/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::OverlayDebounceTimeMs__ @ 0x180007A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x1801CAA98 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::OverlayDebounceTimeMs__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"OverlayDebounceTimeMs", 2000LL, 0LL);
  CCommonRegistryData::OverlayDebounceTimeMs = result;
  return result;
}
