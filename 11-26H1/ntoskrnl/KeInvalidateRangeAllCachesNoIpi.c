/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x1402513E0
 * Callers:
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1404754B4 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     KeInvalidateRangeAllCaches @ 0x1404B2650 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x1405101E0 (MiFlushCacheMdl.c)
 *     IvtInitializeIdentityMappings @ 0x1405A9460 (IvtInitializeIdentityMappings.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140251640 (KeInvalidateAllCaches.c)
 */

char __fastcall KeInvalidateRangeAllCachesNoIpi(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rdx
  __int64 CFlushSize; // r8
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 < KiLargestCacheSize )
  {
    v3 = a1 + a2;
    CFlushSize = KeGetCurrentPrcb()->CFlushSize;
    _RAX = (char *)(a1 & ~(CFlushSize - 1));
    if ( _bittest64(&KeFeatureBits, 0x23u) )
    {
      do
      {
        __asm { clflushopt byte ptr [rax] }
        _RAX += CFlushSize;
      }
      while ( (unsigned __int64)_RAX < v3 );
      _InterlockedOr(&v6, 0);
    }
    else
    {
      do
      {
        _mm_clflush(_RAX);
        _RAX += CFlushSize;
      }
      while ( (unsigned __int64)_RAX < v3 );
    }
  }
  else
  {
    LOBYTE(_RAX) = KeInvalidateAllCaches();
  }
  return (char)_RAX;
}
