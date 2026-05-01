/*
 * XREFs of ?get_AllowLightDismiss@?$produce@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureSystemDialog@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x18033A7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureSystemDialog>::get_AllowLightDismiss(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax

  v2 = a1 + 32;
  if ( !a1 )
    v2 = 48LL;
  *a2 = *(_BYTE *)v2;
  return 0LL;
}
