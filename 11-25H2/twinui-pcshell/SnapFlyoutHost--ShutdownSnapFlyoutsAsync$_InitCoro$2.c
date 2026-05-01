/*
 * XREFs of SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2 @ 0x180590A3C
 * Callers:
 *     ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x180590D50 (-ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@V-$list@U-$com_ptr@USnap.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1804DFB38 (-_Alloc_sentinel_and_proxy@-$list@V-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@w.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180590B00 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)(a2 + 113) = a5;
  v9 = a2 + 112;
  *(_QWORD *)(a2 + 121) = 0LL;
  *(_QWORD *)(a2 + 129) = 0LL;
  std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Alloc_sentinel_and_proxy((_QWORD *)(a2 + 121));
  v10 = *(_QWORD *)(v9 + 9);
  *(_QWORD *)(v9 + 9) = *a4;
  *a4 = v10;
  v11 = *(_QWORD *)(v9 + 17);
  *(_QWORD *)(v9 + 17) = a4[1];
  a4[1] = v11;
  *(_QWORD *)a2 = SnapFlyoutHost::ShutdownSnapFlyoutsAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 112) = 0;
  return SnapFlyoutHost::ShutdownSnapFlyoutsAsync__ResumeCoro_1(a2);
}
