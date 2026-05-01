/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551A84
 * Callers:
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557284 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557DC0 (-SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchTyp.c)
 *     _lambda_f2ca46843af7fe20e5ddf713755dabab_::operator() @ 0x18055D448 (_lambda_f2ca46843af7fe20e5ddf713755dabab_--operator().c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180567660 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     ?SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@PEAUISwitchThumbnailDeviceManager@@PEAUIImmersiveSettingsCache@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4VirtualDesktopSwitchType@@@Z @ 0x1805682C0 (-SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDi.c)
 *     _lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4_::operator() @ 0x180569B84 (_lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4_--operator().c)
 *     _lambda_9a7bfcc99c4e75b6f719d590bcf52609_::operator() @ 0x180569C18 (_lambda_9a7bfcc99c4e75b6f719d590bcf52609_--operator().c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E30 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 *     __lambda_9a7bfcc99c4e75b6f719d590bcf52609_::operator()_::_1_::dtor$1 @ 0x1806F48A0 (__lambda_9a7bfcc99c4e75b6f719d590bcf52609_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180281974 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180558EB8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returnc.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>,wil::err_returncode_policy>(a1);
}
