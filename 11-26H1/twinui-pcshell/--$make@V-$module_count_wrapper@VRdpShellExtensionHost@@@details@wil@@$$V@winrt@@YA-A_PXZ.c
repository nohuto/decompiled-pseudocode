/*
 * XREFs of ??$make@V?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18067354C
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VRdpShellExtensionHost@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180673E00 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VRdpShellExtensionHost@@@wil@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180673628 (--0-$heap_implements@V-$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@@impl@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<wil::details::module_count_wrapper<RdpShellExtensionHost>,>(_QWORD *a1)
{
  void *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0xE0uLL);
  memset_0(v3, 0, 0xE0uLL);
  *a1 = winrt::impl::heap_implements<wil::details::module_count_wrapper<RdpShellExtensionHost>>::heap_implements<wil::details::module_count_wrapper<RdpShellExtensionHost>>(v3);
  return a1;
}
