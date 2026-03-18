/*
 * XREFs of ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x1801CAA98
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::OverlayDebounceTimeMs__ @ 0x180007A10 (_dynamic_initializer_for__CCommonRegistryData--OverlayDebounceTimeMs__.c)
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1801CAAC8 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 __fastcall details::CRegistryKeyLoader<unsigned long>::Load(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(a1, &v5, a3) )
    return v5;
  return a2;
}
