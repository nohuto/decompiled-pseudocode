/*
 * XREFs of ?OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180244EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801C7F30 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NPEAUIApplicationFrame@@@Z @ 0x1802CB25C (-IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QE.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?OnPositionChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180355614 (-OnPositionChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnPositionChanged(RTL_SRWLOCK *this, struct IApplicationFrame *a2)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v2; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **Ptr; // rbp
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **i; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v7; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11[2]; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  v12 = 0LL;
  *(_QWORD *)v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v12, this + 179);
  Ptr = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[181].Ptr;
  for ( i = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[180].Ptr;
        i != Ptr
     && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameAppFrame(*i, a2);
        ++i )
  {
    ;
  }
  if ( i != this[181].Ptr )
  {
    v7 = *i;
    if ( *i )
    {
      v2 = *i;
      *(_QWORD *)v11 = *i;
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)v7);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v12);
  if ( !v2 )
    return 2147943568LL;
  v9 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnPositionChanged(v2);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEBF,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v9);
  winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)v11);
  return v10;
}
