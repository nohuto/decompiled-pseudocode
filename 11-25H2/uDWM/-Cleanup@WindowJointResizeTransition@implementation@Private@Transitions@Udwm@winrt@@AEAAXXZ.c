/*
 * XREFs of ?Cleanup@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DA078
 * Callers:
 *     ?Cancel@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800DA06C (-Cancel@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800DA368 (-PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW.c)
 * Callees:
 *     ?Cancel@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A600 (-Cancel@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CancelPendingAnimations@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D8F1C (-CancelPendingAnimations@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DW.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x1800DB0FC (-clear@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V-$_Uhash_c.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::Cleanup(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this)
{
  __int64 *v2; // rcx
  __int64 *v3; // rbx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  if ( *v2 )
  {
    winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::CancelPendingAnimations(v2);
    *((_DWORD *)this + 44) = 0;
  }
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::clear((char *)this + 112);
  v3 = (__int64 *)((char *)this + 32);
  if ( *v3 )
  {
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::Cancel(v3);
    v4[0] = 0LL;
    if ( v3 != v4 )
    {
      if ( *v3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v3);
      *v3 = 0LL;
    }
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)v4);
  }
}
