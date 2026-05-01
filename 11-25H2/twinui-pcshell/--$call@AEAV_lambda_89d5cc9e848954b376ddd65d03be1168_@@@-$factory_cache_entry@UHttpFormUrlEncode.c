/*
 * XREFs of ??$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@?$factory_cache_entry@UHttpFormUrlEncodedContent@Http@Web@Windows@winrt@@UIHttpFormUrlEncodedContentFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@Z @ 0x18020F468
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x1800AE3F0 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x18005D510 (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@winrt@@YA?AUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@0@AEBUhstring@param@0@@Z @ 0x18036396C (--$get_activation_factory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@winrt@@YA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>::call<_lambda_89d5cc9e848954b376ddd65d03be1168_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-10h]
  __int64 *v10; // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  if ( aWindowsWebHttp[42] )
    abort();
  v8[0] = 1;
  v8[1] = 42;
  v9 = L"Windows.Web.Http.HttpFormUrlEncodedContent";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>(&v10, &v7);
  if ( v10
    && (v11 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v10)(
          v10,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v11),
        (v6[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089B3D8;
    _InterlockedIncrement64(&qword_18089B3D8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089B3E0);
    }
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>);
    _InterlockedDecrement64(&qword_18089B3D8);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  }
  else
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(a3, a2, &v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  return a2;
}
