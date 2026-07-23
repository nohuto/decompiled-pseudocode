/*
 * XREFs of CcFetchDataForRead @ 0x1402C8550
 * Callers:
 *     CcMapAndCopyFromCache @ 0x140A718D0 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140AF04E0 (CcMdlRead.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1403A1408 (MmWaitForCacheManagerPrefetch.c)
 *     MmPrefetchForCacheManager @ 0x140A59FA0 (MmPrefetchForCacheManager.c)
 *     MmHardFaultBytesRequired @ 0x140A74460 (MmHardFaultBytesRequired.c)
 */

char __fastcall CcFetchDataForRead(
        int a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        _DWORD *a5,
        _QWORD *P,
        int a7,
        __int64 a8,
        LARGE_INTEGER *a9)
{
  unsigned __int64 v10; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rbp
  __int64 v17; // r8

  v10 = *a2 & 0xFFFFFFFFFFFFF000uLL;
  v12 = *P + (*(_DWORD *)a2 & 0x3F000);
  v13 = ((a3 + *a2 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - v10;
  v14 = v13;
  if ( 0x40000 - ((*(_DWORD *)P + (*(_DWORD *)a2 & 0x3F000)) & 0x3FFFFu) < (unsigned int)v13 )
    v14 = 0x40000 - ((*(_DWORD *)P + (*(_DWORD *)a2 & 0x3F000)) & 0x3FFFF);
  v15 = v14;
  if ( !(unsigned int)MmHardFaultBytesRequired(v12, v10, v14) )
    goto LABEL_4;
  if ( a4 )
  {
    if ( a9 && !a9->QuadPart )
      *a9 = KeQueryPerformanceCounter(0LL);
    LODWORD(v17) = 0;
    if ( v15 == v13 )
      v17 = *P;
    MmPrefetchForCacheManager(a1, v10, v17, v13, a7);
    *a5 = 1;
LABEL_4:
    MmCheckCachedPageStates(v12, v15, 0LL, 0LL);
    return 1;
  }
  return 0;
}
