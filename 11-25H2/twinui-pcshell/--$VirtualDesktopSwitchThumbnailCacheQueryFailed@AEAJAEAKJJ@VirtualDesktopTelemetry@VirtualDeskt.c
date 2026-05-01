/*
 * XREFs of ??$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDesktop@@SAXAEAJAEAK$$QEAJ2@Z @ 0x180538018
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18053A804 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ?VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJJ@Z @ 0x18053F988 (-VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJ.c)
 *     ?get@?$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAAPEAVVirtualDesktopTelemetry@VirtualDesktop@@P6AXXZ@Z @ 0x18053FCC8 (-get@-$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAAPEAVVirtualDesktop.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchThumbnailCacheQueryFailed<long &,unsigned long &,long,long>(
        int *a1,
        unsigned int *a2,
        int *a3,
        int *a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // r10
  VirtualDesktop::VirtualDesktopTelemetry *v10; // rcx

  v9 = *(_DWORD **)(wil::details::static_lazy<VirtualDesktop::VirtualDesktopTelemetry>::get(
                      a1,
                      _lambda_5fd636ce9f394364b2b3b625dee58ba6_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v9 )
  {
    if ( *v9 )
    {
      wil::details::static_lazy<VirtualDesktop::VirtualDesktopTelemetry>::get(
        v8,
        _lambda_5fd636ce9f394364b2b3b625dee58ba6_::_lambda_invoker_cdecl_);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchThumbnailCacheQueryFailed_(v10, *a1, *a2, *a3, *a4);
    }
  }
}
