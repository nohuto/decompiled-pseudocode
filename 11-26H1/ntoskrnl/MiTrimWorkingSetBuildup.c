/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x14048DB10
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MiFlushDeferredAgingBucket @ 0x14029C4F0 (MiFlushDeferredAgingBucket.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 */

char __fastcall MiTrimWorkingSetBuildup(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 i; // rdi
  ULONG_PTR v8; // r8
  unsigned int v9; // r9d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = (__int64)&retaddr;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = a2 + 96;
  for ( i = 0LL; i != 2; ++i )
  {
    if ( *(_BYTE *)(v4 + 72) )
      LOBYTE(v2) = MiFlushDeferredAgingBucket(v4, v3, i != 0 ? 6 : 0);
    v4 += 80LL;
  }
  v8 = *(_QWORD *)(a2 + 80);
  if ( v8 && *(_DWORD *)(v8 + 28) )
  {
    v9 = (*(_DWORD *)a2 >> 12) & 1 | 0x10;
    if ( (*(_BYTE *)a1 & 4) != 0 )
      v9 = (*(_DWORD *)a2 >> 12) & 1;
    v2 = MiFreeWsleList(v3, (*(_DWORD *)a2 >> 12) & 1, v8, v9);
    *(_QWORD *)(a2 + 16) -= v2;
  }
  return v2;
}
