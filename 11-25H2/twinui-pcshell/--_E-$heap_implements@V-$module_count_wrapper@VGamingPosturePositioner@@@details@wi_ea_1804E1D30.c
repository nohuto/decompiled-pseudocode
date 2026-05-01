/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1804E1D30
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@WGA@EAAPEAXI@Z @ 0x1804E1CF0 (--_E-$heap_implements@V-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winr.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ @ 0x1804E1630 (--1-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ.c)
 */

GamingPosturePositioner *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vector deleting destructor'(
        GamingPosturePositioner *a1,
        char a2)
{
  wil::details::module_count_wrapper<GamingPosturePositioner>::~module_count_wrapper<GamingPosturePositioner>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x2E0);
  return a1;
}
