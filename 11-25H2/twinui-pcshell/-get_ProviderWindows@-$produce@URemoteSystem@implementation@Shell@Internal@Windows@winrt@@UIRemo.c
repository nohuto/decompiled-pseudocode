/*
 * XREFs of ?get_ProviderWindows@?$produce@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystem@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180640590
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800A9908 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::Windows::Internal::Shell::IRemoteSystem>::get_ProviderWindows(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v9, (RTL_SRWLOCK *)v4);
  v5 = a1 + 40;
  if ( !a1 )
    v5 = 56LL;
  try
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
      (__int64 **)v5,
      &v8);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
    v6 = v8;
    v8 = 0LL;
    *a2 = v6;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
