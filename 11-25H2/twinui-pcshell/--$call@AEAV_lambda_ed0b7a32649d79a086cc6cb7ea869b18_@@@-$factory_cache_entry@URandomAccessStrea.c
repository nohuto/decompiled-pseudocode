/*
 * XREFs of ??$call@AEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@?$factory_cache_entry@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@UIRandomAccessStreamReferenceStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@Z @ 0x1805BDAC4
 * Callers:
 *     ?CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAccessStream@2345@@Z @ 0x1805C11FC (-CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAcces.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??R_lambda_25f685323ecfdadefb1917e024cec3b1_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z @ 0x1802C81C4 (--R_lambda_25f685323ecfdadefb1917e024cec3b1_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@winrt@@YA?AUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x1805BE0D4 (--$get_activation_factory@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::call<_lambda_ed0b7a32649d79a086cc6cb7ea869b18_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.Storage.Streams.RandomAccessStreamReference";
  v7[1] = 51LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>(&v9, v8);
  if ( v9
    && (v10 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v9)(
          v9,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v10),
        (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089AB78;
    _InterlockedIncrement64(&qword_18089AB78);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089AB80);
    }
    _lambda_25f685323ecfdadefb1917e024cec3b1_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>);
    _InterlockedDecrement64(&qword_18089AB78);
  }
  else
  {
    _lambda_25f685323ecfdadefb1917e024cec3b1_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
