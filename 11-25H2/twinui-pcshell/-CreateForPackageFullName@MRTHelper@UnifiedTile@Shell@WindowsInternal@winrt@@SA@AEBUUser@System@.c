/*
 * XREFs of ?CreateForPackageFullName@MRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@SA@AEBUUser@System@Windows@5@AEBUhstring@param@5@@Z @ 0x1805C1184
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805C74DC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ??$call@AEAV_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@@?$factory_cache_entry@UMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@UIMRTHelperStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@@Z @ 0x1805BD9AC (--$call@AEAV_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@@-$factory_cache_entry@UMRTHelper@Unified.c)
 *     ??R_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@QEBA@AEBUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@Z @ 0x1805BFD80 (--R_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@QEBA@AEBUIMRTHelperStatics@UnifiedTile@Shell@Windo.c)
 */

const struct winrt::Windows::System::User *__fastcall winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper::CreateForPackageFullName(
        const struct winrt::Windows::System::User *a1,
        const struct winrt::param::hstring *a2,
        __int64 a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_18089D1F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics> )
  {
    _lambda_6f34e705270e868253aa28e6dfc0cbd7_::operator()(
      v5,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>);
    _InterlockedDecrement64(&qword_18089D1F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089D1F8);
    winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::call<_lambda_6f34e705270e868253aa28e6dfc0cbd7_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (__int64)v5);
  }
  return a1;
}
