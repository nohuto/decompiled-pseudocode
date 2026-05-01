/*
 * XREFs of ??$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180552340
 * Callers:
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x18055244C (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 *     ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1806159C0 (-Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::CoCreateInstance<IServiceProvider,wil::err_exception_policy>(__int64 *a1, IID *rclsid)
{
  HRESULT Instance; // eax
  int ppv; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(a1);
  Instance = CoCreateInstance(rclsid, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, (LPVOID *)a1);
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)Instance,
      ppv);
  return a1;
}
