/*
 * XREFs of MiEmptyCacheSlice @ 0x14071675C
 * Callers:
 *     MiFreeLargeProcessPagesToCache @ 0x140716898 (MiFreeLargeProcessPagesToCache.c)
 *     MiFreeProcessLargePageCache @ 0x140716BA8 (MiFreeProcessLargePageCache.c)
 * Callees:
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 */

unsigned __int64 __fastcall MiEmptyCacheSlice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 result; // rax
  __int64 i; // rdi
  char v8; // bl
  __int64 v10; // rcx

  v3 = *(unsigned int *)(a3 + 8);
  v4 = a2 + 48;
  MiInitializeLargePfnList(a2);
  result = 0xFFFFDE0000000000uLL;
  for ( i = 48LL * *(_QWORD *)a3 - 0x220000000000LL; v3; v3 &= result )
  {
    v8 = -1;
    if ( _BitScanForward64((unsigned __int64 *)&v10, v3) )
      v8 = v10;
    *(_DWORD *)(a3 + 12) = (*(_DWORD *)(a3 + 12) - 1) ^ (*(_DWORD *)(a3 + 12) ^ (*(_DWORD *)(a3 + 12) - 1)) & 0xFFFFFFC0;
    MiSimpleInsertPage(v4, (i + 768LL * v8 + 0x220000000000LL) / 48, 2);
    result = (unsigned int)~(1 << v8);
  }
  *(_DWORD *)(a3 + 8) = 0;
  return result;
}
