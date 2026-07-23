/*
 * XREFs of RtlpHpLfhHeatMapQuery @ 0x1403497A0
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1403496A8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140349DA0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14063CB34 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhHeatMapQuery(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 v3; // r9
  __int64 v6; // r11
  signed __int32 v7; // eax
  int v8; // edi
  unsigned int v9; // ecx
  signed __int32 v10; // ett
  __int64 v11; // rax
  __int64 v12; // r8
  char v13; // r10
  char v14; // r10
  _WORD *v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v21; // r8
  char *v22; // rdx
  unsigned __int64 v23; // r8
  _WORD *v24; // rax

  v3 = a2 + 250;
  if ( *(_BYTE *)(a2 + 250) )
    NT_ASSERT("HeatMap->OnFreeList == 0");
  v6 = *a3 >> 1;
  if ( (unsigned int)v6 >= 0x7D )
  {
    v8 = 0;
    v16 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 252);
    while ( 1 )
    {
      v8 = 0;
      v9 = (MEMORY[0xFFFFF78000000008] >> 20) - v7;
      if ( !v9 )
        break;
      v10 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 252), MEMORY[0xFFFFF78000000008] >> 20, v7);
      if ( v10 == v7 )
      {
        if ( v9 > 0x1E )
        {
          v24 = (_WORD *)a2;
          if ( a2 < v3 )
          {
            do
              *v24++ = 0;
            while ( (unsigned __int64)v24 < v3 );
          }
        }
        else
        {
          v11 = 3LL;
          v12 = 1LL;
          v13 = v9;
          while ( 1 )
          {
            if ( (v9 & 1) != 0 )
              v12 *= v11;
            LOBYTE(v9) = (unsigned __int8)v9 >> 1;
            if ( !(_BYTE)v9 )
              break;
            v11 *= v11;
          }
          v14 = 2 * v13;
          v15 = (_WORD *)a2;
          if ( a2 < v3 )
          {
            do
            {
              *v15 = (v12 * (unsigned __int64)(unsigned __int16)*v15) >> v14;
              ++v15;
            }
            while ( (unsigned __int64)v15 < v3 );
          }
        }
        break;
      }
    }
    v16 = *(unsigned __int16 *)(a2 + 2 * v6);
  }
  v17 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v17 )
  {
    if ( v17 == 2 )
      return 2LL;
    if ( v17 != 1 )
    {
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v21 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v22 = (char *)Blink + v21;
      v23 = (unsigned __int64)Blink ^ v21;
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v23 ^ __ROL8__(Blink, 24) ^ (v23 << 16));
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v23, 37);
      return BYTE4(v22) % 3u;
    }
    return 1LL;
  }
  if ( (RtlpHpLfhPerfFlags & 1) == 0 || *(_BYTE *)(a1 + 82) == 1 || v16 < *((unsigned __int16 *)a3 + 38) )
    return 0LL;
  if ( v16 < *((unsigned __int16 *)a3 + 39) )
    return 1LL;
  LOBYTE(v8) = (*(_BYTE *)(a1 + 80) & 1) != 0;
  return (unsigned int)(v8 + 1);
}
