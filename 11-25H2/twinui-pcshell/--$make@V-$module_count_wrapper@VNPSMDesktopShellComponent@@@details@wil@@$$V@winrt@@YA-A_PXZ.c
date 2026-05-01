/*
 * XREFs of ??$make@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x180151C38
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180151500 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@UEAAJPEAUIUn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805EB14C (--0-$heap_implements@V-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<NPSMDesktopShellComponent>,>(__int64 *a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0x120uLL);
  memset_0(v4, 0, 0x120uLL);
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>(v4);
  *a1 = (v2 + 8) & -(__int64)(v2 != 0);
  return a1;
}
