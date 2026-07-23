/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x140251450
 * Callers:
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     MiFlushCacheRange @ 0x140712124 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeInvalidateAllCaches @ 0x140251640 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _UNKNOWN **result; // rax
  int v6; // esi
  __int64 v8; // r14
  int v9; // r15d
  LARGE_INTEGER v10; // r12
  unsigned int v11; // esi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  __int64 CFlushSize; // rdx
  LARGE_INTEGER v16; // rax
  LARGE_INTEGER v17; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  signed __int32 v21; // [rsp+78h] [rbp+10h] BYREF
  int v22; // [rsp+80h] [rbp+18h]

  result = &retaddr;
  v22 = a3;
  v6 = 2;
  v8 = a2;
  if ( a3 != 2 )
    v6 = 0;
  v9 = a3;
  v10.QuadPart = 0LL;
  if ( a2 )
  {
    v11 = v6 | 0xC0000000;
    do
    {
      v12 = MiMapPageInHyperSpaceWorker(a1, 0LL, v11);
      if ( a4 )
      {
        PerformanceFrequency.QuadPart = 0LL;
        v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( PerformanceFrequency.QuadPart != 10000000 )
          v10.QuadPart = 10000000 * v10.QuadPart / PerformanceFrequency.QuadPart;
        _InterlockedOr(v18, 0);
      }
      if ( (unsigned int)KiLargestCacheSize > 0x1000 )
      {
        v13 = v12 + 4096;
        CFlushSize = KeGetCurrentPrcb()->CFlushSize;
        _RAX = (char *)(v12 & ~(CFlushSize - 1));
        if ( _bittest64(&KeFeatureBits, 0x23u) )
        {
          do
          {
            __asm { clflushopt byte ptr [rax] }
            _RAX += CFlushSize;
          }
          while ( (unsigned __int64)_RAX < v13 );
          _InterlockedOr(&v21, 0);
        }
        else
        {
          do
          {
            _mm_clflush(_RAX);
            _RAX += CFlushSize;
          }
          while ( (unsigned __int64)_RAX < v13 );
        }
      }
      else
      {
        KeInvalidateAllCaches();
      }
      if ( a4 )
      {
        _InterlockedOr(v18, 0);
        PerformanceFrequency.QuadPart = 0LL;
        v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( PerformanceFrequency.QuadPart != 10000000 )
          v16.QuadPart = 10000000 * v16.QuadPart / PerformanceFrequency.QuadPart;
        v17 = v10;
        if ( v16.QuadPart >= (unsigned __int64)v10.QuadPart )
          v17 = v16;
        *a4 += v17.QuadPart - v10.QuadPart;
      }
      ++a1;
      result = *(_UNKNOWN ***)&CLFS_LSN_NULL_EXT;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      --v8;
    }
    while ( v8 );
    v9 = v22;
  }
  if ( v9 == 3 )
    return (_UNKNOWN **)MiFlushEntireTbDueToAttributeChange();
  return result;
}
