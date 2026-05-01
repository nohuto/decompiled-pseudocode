/*
 * XREFs of ??$call@AEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@?$factory_cache_entry@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@UIRandomAccessStreamReferenceStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@Z @ 0x1805E1538
 * Callers:
 *     ?CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAccessStream@2345@@Z @ 0x1805E5338 (-CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAcces.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@winrt@@YA?AUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x1805E1BDC (--$get_activation_factory@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@w.c)
 *     ??R_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@QEBA@AEBUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@Z @ 0x1805E43A8 (--R_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@QEBA@AEBUIRandomAccessStreamReferenceStatics@Strea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::call<_lambda_ed0b7a32649d79a086cc6cb7ea869b18_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        __int64 a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = (__int64)L"Windows.Storage.Streams.RandomAccessStreamReference";
  v9[1] = 51LL;
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>(&v11, v10);
  v5 = (signed __int64)v11;
  v12 = 0LL;
  if ( !v11 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v6 = v12;
  if ( !v12 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  if ( v7 )
  {
    v12 = &qword_1808DB268;
    _InterlockedIncrement64(&qword_1808DB268);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>,
            v5,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB270);
    }
    _lambda_ed0b7a32649d79a086cc6cb7ea869b18_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>);
    _InterlockedDecrement64(&qword_1808DB268);
  }
  else
  {
    _lambda_ed0b7a32649d79a086cc6cb7ea869b18_::operator()(a3, a2, &v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
