/*
 * XREFs of ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x180347810
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180074580 (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?IsSameActivationId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x1802A4C24 (-IsSameActivationId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@@1@PEAUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@@Z @ 0x18033EED4 (--$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implement.c)
 *     ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x180343C98 (-FindWindowW@GamingOverlayExperienceManager@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall GamingOverlayExperienceManager::GetWindow(
        RTL_SRWLOCK *this,
        int a2,
        struct Windows::Internal::GamingOverlay::IGameBarWindowControl **a3)
{
  int v6; // ebx
  Windows::Internal::ApplicationModel::WindowManagement *v7; // rcx
  __int64 PropW; // r15
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **Ptr; // rsi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **i; // rbx
  __int64 v11; // r8
  struct Windows::Internal::GamingOverlay::IGameBarWindowControl *v13; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v14; // [rsp+20h] [rbp-48h] BYREF
  struct Windows::Internal::GamingOverlay::IGameBarWindowControl *v15; // [rsp+28h] [rbp-40h] BYREF
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-38h] BYREF

  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v16, this + 177);
  v6 = ~a2;
  if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(v7) )
  {
    PropW = (unsigned int)GetPropW((HWND)v6, L"Microsoft.Windows.WindowFactory.ActivationId");
    Ptr = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[179].Ptr;
    for ( i = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[178].Ptr;
          i != Ptr
       && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameActivationId(
             *i,
             PropW);
          ++i )
    {
      ;
    }
  }
  else
  {
    LODWORD(v15) = (unsigned int)GetPropW((HWND)v6, L"Microsoft.Windows.WindowFactory.ViewId");
    i = *GamingOverlayExperienceManager::FindWindowW((__int64)&this[-18], &v14, v11, (unsigned int *)&v15);
  }
  if ( i == this[179].Ptr )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
    return 2147943568LL;
  }
  else
  {
    winrt::impl::as<Windows::Internal::GamingOverlay::IGameBarWindowControl,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,0>(
      &v15,
      (volatile signed __int64 *)*i);
    v13 = v15;
    if ( v15 )
      (*(void (__fastcall **)(struct Windows::Internal::GamingOverlay::IGameBarWindowControl *))(*(_QWORD *)v15 + 8LL))(v15);
    *a3 = v13;
    if ( v13 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v15);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
    return 0LL;
  }
}
