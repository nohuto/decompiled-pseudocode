/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1801B60D4
 * Callers:
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x18025CCFC (-Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
             *(__int64 **)a1,
             *(_QWORD *)(a1 + 8));
  return result;
}
