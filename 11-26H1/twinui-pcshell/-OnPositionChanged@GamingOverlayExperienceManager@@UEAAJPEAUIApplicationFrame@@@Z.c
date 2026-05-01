/*
 * XREFs of ?OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180235E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NPEAUIApplicationFrame@@@Z @ 0x1802C2AF0 (-IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QE.c)
 *     ?OnPositionChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x18035BF0C (-OnPositionChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnPositionChanged(RTL_SRWLOCK *this, struct IApplicationFrame *a2)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v2; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **Ptr; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v6; // rbp
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v7; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  RTL_SRWLOCK *v11; // [rsp+20h] [rbp-28h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v12; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v11, this + 187);
  Ptr = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[188].Ptr;
  v6 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[189].Ptr;
  while ( Ptr != v6
       && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameAppFrame(*Ptr, a2) )
    ++Ptr;
  if ( Ptr != this[189].Ptr )
  {
    v7 = *Ptr;
    if ( *Ptr )
    {
      v2 = *Ptr;
      v12 = *Ptr;
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)v7);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  if ( !v2 )
    return 2147943568LL;
  v9 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnPositionChanged(v2);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEFE,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v9);
  winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v12);
  return v10;
}
