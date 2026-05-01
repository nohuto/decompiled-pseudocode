/*
 * XREFs of ??$make@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1804E0F08
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VGamingPosturePositioner@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804E2290 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VGamingPosturePositioner@@@wil@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1804E0F6C (--0-$heap_implements@V-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<GamingPosturePositioner>,>(__int64 *a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0x2E0uLL);
  memset_0(v4, 0, 0x2E0uLL);
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>(v4);
  *a1 = (v2 + 64) & -(__int64)(v2 != 0);
  return a1;
}
