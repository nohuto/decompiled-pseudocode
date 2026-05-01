/*
 * XREFs of ?CreateSystemDialog@?$produce@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureController@34567@@impl@winrt@@UEAAHPEAXUguid@3@PEAPEAX@Z @ 0x18032D110
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUGamingPostureSystemDialog@34567@AEBUhstring@7@AEBUguid@7@@Z @ 0x18032D16C (-CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Wi.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureController>::CreateSystemDialog(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *SystemDialog; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-10h] BYREF

  v8 = a2;
  *a4 = 0LL;
  try
  {
    SystemDialog = (__int64 *)winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CreateSystemDialog();
    v6 = *SystemDialog;
    *SystemDialog = 0LL;
    *a4 = v6;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
