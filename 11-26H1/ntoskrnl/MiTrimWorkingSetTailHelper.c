/*
 * XREFs of MiTrimWorkingSetTailHelper @ 0x14045D148
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimWorkingSetTail @ 0x14045D050 (MiTrimWorkingSetTail.c)
 * Callees:
 *     MiFlushDeferredAgingBucket @ 0x14029C4F0 (MiFlushDeferredAgingBucket.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 */

char __fastcall MiTrimWorkingSetTailHelper(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdi
  ULONG_PTR v8; // r8
  unsigned int v9; // r9d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = (__int64)&retaddr;
  v3 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0LL;
  v7 = v3 + 96;
  do
  {
    if ( *(_BYTE *)(v7 + 72) )
      LOBYTE(v2) = MiFlushDeferredAgingBucket(v7, v5, v6 != 0 ? 6 : 0);
    ++v6;
    v7 += 80LL;
  }
  while ( v6 != 2 );
  v8 = *(_QWORD *)(v3 + 80);
  if ( v8 && *(_DWORD *)(v8 + 28) )
  {
    v9 = (*(_DWORD *)v3 >> 12) & 1 | 0x10;
    if ( (*(_BYTE *)a1 & 4) != 0 )
      v9 = (*(_DWORD *)v3 >> 12) & 1;
    v2 = MiFreeWsleList(v5, a2, v8, v9);
    *(_QWORD *)(v3 + 16) -= v2;
  }
  if ( (*(_DWORD *)v3 & 0x800) != 0 )
  {
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(v5 + 16) + 48LL),
      *(_QWORD *)(v3 + 16) - *(_QWORD *)(v3 + 24));
    v2 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 24) = v2;
  }
  return v2;
}
