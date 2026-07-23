/*
 * XREFs of MiQueryHardwareCacheInformation @ 0x140D05588
 * Callers:
 *     MiCreatePfnDatabase @ 0x140CF8B98 (MiCreatePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 MiQueryHardwareCacheInformation()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CacheCount; // rdx
  _CACHE_DESCRIPTOR *Cache; // rcx
  _PROCESSOR_CACHE_TYPE Type; // eax
  unsigned int SecondLevelCacheSize; // esi
  unsigned int SecondLevelCacheAssociativity; // eax
  __int64 result; // rax
  unsigned int i; // ebx

  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( (_DWORD)CacheCount )
  {
    do
    {
      if ( Cache->Level == 1 )
      {
        Type = Cache->Type;
        if ( Type == CacheData || Type == CacheUnified )
          dword_140E2D874 = Cache->Size;
      }
      ++Cache;
      --CacheCount;
    }
    while ( CacheCount );
  }
  if ( (unsigned int)dword_140E2D874 < 0x4000 )
    dword_140E2D874 = 0x4000;
  dword_140E2D8B4 = 256;
  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140E2D870 = SecondLevelCacheSize;
  SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
  if ( (_BYTE)SecondLevelCacheAssociativity )
    SecondLevelCacheSize /= SecondLevelCacheAssociativity;
  result = guard_dispatch_icall_no_overrides(50LL, 24LL);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      guard_dispatch_icall_no_overrides(i, 1LL);
      result = (unsigned __int16)KeNumberNodes;
    }
  }
  dword_140E2D90C = SecondLevelCacheSize;
  HIDWORD(qword_140E2D904) = SecondLevelCacheSize >> 4;
  return result;
}
