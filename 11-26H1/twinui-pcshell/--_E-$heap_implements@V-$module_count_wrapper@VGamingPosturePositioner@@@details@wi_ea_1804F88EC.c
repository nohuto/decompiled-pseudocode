/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1804F88EC
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@WGA@EAAPEAXI@Z @ 0x1804F87B0 (--_E-$heap_implements@V-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winr.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ @ 0x1804F767C (--1-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ.c)
 */

GamingPosturePositioner *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vector deleting destructor'(
        GamingPosturePositioner *a1,
        char a2)
{
  wil::details::module_count_wrapper<GamingPosturePositioner>::~module_count_wrapper<GamingPosturePositioner>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x350);
  return a1;
}
