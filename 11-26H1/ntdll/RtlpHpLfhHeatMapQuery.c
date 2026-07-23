/*
 * XREFs of RtlpHpLfhHeatMapQuery @ 0x180061D60
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x180061B2C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180062280 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800736A0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhHeatMapDecayCounts @ 0x180062170 (RtlpHpLfhHeatMapDecayCounts.c)
 */

__int64 __fastcall RtlpHpLfhHeatMapQuery(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  int v7; // ebx
  __int64 v8; // r11
  unsigned int v9; // edx
  unsigned int v10; // ecx
  signed __int32 v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  signed __int32 v15; // ett
  struct _TEB *v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8

  if ( *(_BYTE *)(a2 + 250) )
    NT_ASSERT("HeatMap->OnFreeList == 0");
  v7 = 0;
  v8 = *a3 >> 1;
  if ( (unsigned int)v8 < 0x7D )
  {
    v12 = *(_DWORD *)(a2 + 252);
    while ( 1 )
    {
      v13 = MEMORY[0x7FFE0008] >> 20;
      v14 = (MEMORY[0x7FFE0008] >> 20) - v12;
      if ( !v14 )
        break;
      v15 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 252), v13, v12);
      if ( v15 == v12 )
      {
        RtlpHpLfhHeatMapDecayCounts(v13, v14, a2, a4, v14);
        break;
      }
    }
    v9 = *(unsigned __int16 *)(a2 + 2 * v8);
  }
  else
  {
    v9 = 0;
  }
  v10 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v10 )
  {
    if ( v10 != 2 )
    {
      if ( v10 != 1 )
      {
        v16 = NtCurrentTeb();
        v17 = v16->RngState[0];
        v18 = v16->RngState[1];
        v19 = v18 + v17;
        v20 = v17 ^ v18;
        v16->RngState[0] = v20 ^ __ROL8__(v17, 24) ^ (v20 << 16);
        v16->RngState[1] = __ROL8__(v20, 37);
        return BYTE4(v19) % 3u;
      }
      return 1LL;
    }
    return 2LL;
  }
  else
  {
    if ( (RtlpHpLfhPerfFlags & 1) == 0 || *(_BYTE *)(a1 + 82) == 1 || v9 < *((unsigned __int16 *)a3 + 38) )
      return 0LL;
    if ( v9 < *((unsigned __int16 *)a3 + 39) )
      return 1LL;
    LOBYTE(v7) = (*(_BYTE *)(a1 + 80) & 1) != 0;
    return (unsigned int)(v7 + 1);
  }
}
