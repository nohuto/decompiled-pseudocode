/*
 * XREFs of ?TryLaunchGamingAppAsync@?$produce@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureController@34567@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180331010
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryLaunchGamingAppAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@UUri@967@@Z @ 0x180331080 (-TryLaunchGamingAppAsync@GamingPostureController@implementation@Posture@GamingExperiences@Intern.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureController>::TryLaunchGamingAppAsync(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v8 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v8);
  v5 = (__int64 *)winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync(
                    (a1 - 88) & -(__int64)(a1 != 0),
                    &v9,
                    &v8);
  v6 = *v5;
  *v5 = 0LL;
  *a3 = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return 0LL;
}
