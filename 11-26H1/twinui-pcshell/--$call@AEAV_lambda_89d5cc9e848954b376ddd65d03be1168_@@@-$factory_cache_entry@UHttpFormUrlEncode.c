/*
 * XREFs of ??$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@?$factory_cache_entry@UHttpFormUrlEncodedContent@Http@Web@Windows@winrt@@UIHttpFormUrlEncodedContentFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@Z @ 0x180171A50
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180172130 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@winrt@@YA?AUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@0@AEBUhstring@param@0@@Z @ 0x18036AADC (--$get_activation_factory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@winrt@@YA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>::call<_lambda_89d5cc9e848954b376ddd65d03be1168_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        _QWORD *a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  _DWORD *v9; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+98h] [rbp+48h] BYREF

  v12 = a1;
  if ( aWindowsWebHttp[42] )
    abort();
  v10[0] = 1;
  v10[1] = 42;
  v11 = L"Windows.Web.Http.HttpFormUrlEncodedContent";
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>(&v12, &v9);
  v5 = (signed __int64)v12;
  v13 = 0LL;
  if ( !v12 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
  v6 = v13;
  v7 = 1;
  if ( !v13 )
  {
LABEL_6:
    v7 = 0;
    if ( !v6 )
      goto LABEL_8;
  }
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
LABEL_8:
  if ( v7 )
  {
    v13 = &qword_1808DBB28;
    _InterlockedIncrement64(&qword_1808DBB28);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>,
            v5,
            0LL) )
    {
      v5 = 0LL;
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DBB30);
    }
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      a3,
      a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>);
    _InterlockedDecrement64(&qword_1808DBB28);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  else
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(a3, a2, (__int64)&v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  return a2;
}
