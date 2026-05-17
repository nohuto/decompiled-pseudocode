/*
 * XREFs of RtlpProtectHeap @ 0x18007F550
 * Callers:
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpProtectHeap(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r15
  _BYTE *v4; // rdi
  int v5; // ebp
  _QWORD *i; // rbx
  char *j; // rsi
  int v9; // r14d
  int v10; // r14d
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+40h] [rbp-58h]
  __int128 v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF
  int v15; // [rsp+A8h] [rbp+10h] BYREF
  char *v16; // [rsp+B0h] [rbp+18h] BYREF

  v2 = (_QWORD *)(a1 + 288);
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v4 = (_BYTE *)(a1 + 563);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (a2 & 0x22) != 0 )
  {
    v5 = 1;
    if ( (*v4 & 1) == 0 )
      *v4 |= 1u;
  }
  else
  {
    v5 = 0;
  }
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    if ( i != (_QWORD *)24 )
    {
      for ( j = (char *)i[3]; (unsigned __int64)j < i[6]; j += *((_QWORD *)&v12 + 1) )
      {
        v9 = ZwQueryVirtualMemory(-1LL, j, 0LL, &v11, 48LL, 0LL);
        if ( v9 < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("VirtualQuery Failed 0x%p %x\n", j, v9);
          return (unsigned int)v9;
        }
        if ( (_DWORD)v13 == 4096 )
        {
          v14 = *((_QWORD *)&v12 + 1);
          v16 = j;
          v10 = ZwProtectVirtualMemory(-1LL, &v16, &v14, a2, &v15);
          if ( v10 < 0 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("VirtualProtect Failed 0x%p %x\n", j, v10);
            return (unsigned int)v10;
          }
        }
      }
    }
  }
  if ( !v5 && (*v4 & 1) != 0 )
    *v4 &= ~1u;
  return 0LL;
}
