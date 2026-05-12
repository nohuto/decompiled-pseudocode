/*
 * XREFs of sub_1401AA320 @ 0x1401AA320
 * Callers:
 *     sub_1400281F4 @ 0x1400281F4 (sub_1400281F4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1401AA320(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int HighestNodeNumber; // r13d
  unsigned int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // r14

  v6 = sub_1400143E0(72LL, 16LL * a2, 1297375570LL, a3);
  *(_QWORD *)(a1 + 64) = v6;
  if ( !v6 )
    return 3221225495LL;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v8 = HighestNodeNumber + 1;
  v9 = HighestNodeNumber + 1;
  v10 = sub_1400143E0(72LL, v9 << 6, 1297375570LL, a3);
  *(_QWORD *)a1 = v10;
  if ( v10 )
  {
    *(_DWORD *)(a1 + 72) = a2 / v8;
    if ( !(a2 / v8) )
      *(_DWORD *)(a1 + 72) = 1;
    v11 = 0;
    v17 = 0LL;
    do
    {
      InitializeSListHead((PSLIST_HEADER)(v17 + *(_QWORD *)a1));
      v17 += 64LL;
      --v9;
    }
    while ( v9 );
    if ( a2 )
    {
      v12 = 0LL;
      v13 = 0LL;
      do
      {
        v14 = HighestNodeNumber;
        *(_DWORD *)(v12 + *(_QWORD *)(a1 + 64) + 8) = v11;
        v15 = v11 / *(_DWORD *)(a1 + 72);
        if ( v15 < v8 )
          v14 = v15;
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)a1 + (v14 << 6)),
          (PSLIST_ENTRY)(v13 + *(_QWORD *)(a1 + 64)));
        ++v11;
        v12 += 16LL;
        v13 += 16LL;
      }
      while ( v11 < a2 );
    }
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0x4D546152u);
    result = 3221225495LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
