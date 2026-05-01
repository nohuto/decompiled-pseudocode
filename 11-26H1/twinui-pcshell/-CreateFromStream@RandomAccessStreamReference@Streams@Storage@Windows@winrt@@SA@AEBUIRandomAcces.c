/*
 * XREFs of ?CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAccessStream@2345@@Z @ 0x1805E5338
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB290 (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ??$call@AEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@?$factory_cache_entry@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@UIRandomAccessStreamReferenceStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@Z @ 0x1805E1538 (--$call@AEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@-$factory_cache_entry@URandomAccessStrea.c)
 *     ??R_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@QEBA@AEBUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@Z @ 0x1805E43A8 (--R_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@QEBA@AEBUIRandomAccessStreamReferenceStatics@Strea.c)
 */

const struct winrt::Windows::Storage::Streams::IRandomAccessStream *__fastcall winrt::Windows::Storage::Streams::RandomAccessStreamReference::CreateFromStream(
        const struct winrt::Windows::Storage::Streams::IRandomAccessStream *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DB268;
  _InterlockedIncrement64(&qword_1808DB268);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics> )
  {
    _lambda_ed0b7a32649d79a086cc6cb7ea869b18_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>);
    _InterlockedDecrement64(&qword_1808DB268);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB268);
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::RandomAccessStreamReference,winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::call<_lambda_ed0b7a32649d79a086cc6cb7ea869b18_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)a1,
      (__int64)&v4);
  }
  return a1;
}
