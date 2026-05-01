/*
 * XREFs of ?put_AllowLightDismiss@?$produce@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureSystemDialog@34567@@impl@winrt@@UEAAH_N@Z @ 0x18033AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureSystemDialog>::put_AllowLightDismiss(
        __int64 a1,
        char a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 34;
  if ( !a1 )
    v2 = 50LL;
  if ( *(_BYTE *)v2 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturesystemdialog.cpp",
      (const char *)0x8007139FLL,
      v5);
  v3 = a1 + 32;
  if ( !a1 )
    v3 = 48LL;
  *(_BYTE *)v3 = a2;
  return 0LL;
}
