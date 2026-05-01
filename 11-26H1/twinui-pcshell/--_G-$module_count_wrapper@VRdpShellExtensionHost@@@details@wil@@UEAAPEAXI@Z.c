/*
 * XREFs of ??_G?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@UEAAPEAXI@Z @ 0x180673D30
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@@impl@winrt@@WCA@EAAPEAXI@Z @ 0x180673D10 (--_E-$heap_implements@V-$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@@impl@winrt@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@UEAA@XZ @ 0x1806738C4 (--1-$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@UEAA@XZ.c)
 */

RdpShellExtensionHost *__fastcall wil::details::module_count_wrapper<RdpShellExtensionHost>::`scalar deleting destructor'(
        RdpShellExtensionHost *a1,
        char a2)
{
  wil::details::module_count_wrapper<RdpShellExtensionHost>::~module_count_wrapper<RdpShellExtensionHost>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xE0);
  return a1;
}
