/*
 * XREFs of ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x18028AF1C
 * Callers:
 *     ?GetDeferral@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18028AEC0 (-GetDeferral@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UI.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@?$factory_cache_entry@UDeferral@Foundation@Windows@winrt@@UIDeferralFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@Z @ 0x1801EE8B8 (--$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@-$factory_cache_entry@UDeferral@Foundati.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x18028B044 (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 **v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v9 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  v3 = 0LL;
  v11 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    v3 = a1;
    v11 = a1;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1);
    v4 = v3;
  }
  v9 = (__int64 *)v3;
  if ( v4 )
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v3);
  v10 = &v9;
  v10 = (__int64 **)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v10 + 1));
  v5 = v9;
  v9 = 0LL;
  v6[2] = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v6 = off_180721E38;
  v8 = v6;
  if ( v9 )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v9);
  v10 = &v8;
  _InterlockedIncrement64(&qword_1808D9F48);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory> )
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      &v10,
      (__int64)a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>);
    _InterlockedDecrement64(&qword_1808D9F48);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808D9F48);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>::call<_lambda_05b02c468eda432e9e6db40beed076d3_ &>(
      v5,
      a2,
      (__int64 **)&v10);
  }
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  if ( v3 )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v11);
  return a2;
}
