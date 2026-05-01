/*
 * XREFs of ?find_interface@?$implements@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIGamingPostureConfigurationStatics@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180336F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  if ( *a2 == *(_QWORD *)L"5" && a2[1] == 0x46000000000000C0LL )
  {
    v2 = a1 + 16;
  }
  else
  {
    if ( *a2 != winrt::impl::guid_v<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>
      || a2[1] != 0x2621224B964944A9LL )
    {
      return 0LL;
    }
    v2 = a1 + 24;
  }
  return v2 & -(__int64)(a1 != 0);
}
