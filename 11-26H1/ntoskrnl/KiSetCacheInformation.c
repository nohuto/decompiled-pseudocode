/*
 * XREFs of KiSetCacheInformation @ 0x140BFCFC0
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KiSetCacheInformationAmd @ 0x140BFD0E8 (KiSetCacheInformationAmd.c)
 *     KiSetStandardizedCacheInformation @ 0x140BFDE14 (KiSetStandardizedCacheInformation.c)
 */

__int64 KiSetCacheInformation()
{
  KPCR *Pcr; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v2; // r8
  __int64 result; // rax
  unsigned int v9; // r11d
  _CACHE_DESCRIPTOR *Cache; // rbx
  int v11; // r9d
  unsigned __int8 Associativity; // r8

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    result = KiSetCacheInformationAmd();
  }
  else
  {
    if ( (unsigned int)CurrentPrcb->CpuVendor - 2 >= 2 )
      KeBugCheck(0x5Du);
    v2 = KeGetCurrentPrcb();
    _RAX = 0LL;
    __asm { cpuid }
    result = (unsigned int)(_RAX - 3);
    v2->CacheCount = 0;
    if ( (unsigned int)result <= 0x7FFFFFFC )
      result = KiSetStandardizedCacheInformation(v2, 4LL);
  }
  v9 = 0;
  Cache = CurrentPrcb->Cache;
  v11 = 0;
  Pcr->SecondLevelCacheSize = 0;
  if ( CurrentPrcb->CacheCount )
  {
    while ( 1 )
    {
      if ( Cache->Level >= 2u )
      {
        result = (unsigned int)Cache->Type;
        if ( (_DWORD)result == 2 || !(_DWORD)result )
          break;
      }
LABEL_20:
      ++Cache;
      if ( ++v11 >= CurrentPrcb->CacheCount )
        return result;
    }
    Associativity = Cache->Associativity;
    if ( Associativity == 0xFF )
    {
      Associativity = 16;
    }
    else if ( !Associativity )
    {
LABEL_16:
      if ( Cache->LineSize > (unsigned int)KeLargestCacheLine )
        KeLargestCacheLine = Cache->LineSize;
      result = Cache->Size;
      if ( (unsigned int)result > KiLargestCacheSize )
        KiLargestCacheSize = Cache->Size;
      goto LABEL_20;
    }
    if ( Cache->Size / Associativity > v9 )
    {
      v9 = Cache->Size / Associativity;
      Pcr->SecondLevelCacheSize = Cache->Size;
      Pcr->SecondLevelCacheAssociativity = Associativity;
    }
    goto LABEL_16;
  }
  return result;
}
