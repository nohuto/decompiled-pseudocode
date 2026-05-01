/*
 * XREFs of ?IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x1805B0DA0
 * Callers:
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805AEE70 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_InitCoro$2 @ 0x1805B0AD4 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+158h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+160h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x100uLL);
  v8 = 0;
  LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync__InitCoro_2(
    &v8,
    (__int64)v6 + 112,
    a2,
    a3,
    a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
