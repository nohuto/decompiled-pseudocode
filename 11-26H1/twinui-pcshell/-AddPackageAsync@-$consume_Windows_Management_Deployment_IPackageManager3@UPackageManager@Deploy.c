/*
 * XREFs of ?AddPackageAsync@?$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@AEBU?$async_iterable@UUri@Foundation@Windows@winrt@@@param@3@AEBW4DeploymentOptions@Deployment@Management@63@AEBUPackageVolume@Deployment@Management@63@@Z @ 0x1805CE14C
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Management_Deployment_IPackageManager3<winrt::Windows::Management::Deployment::PackageManager>::AddPackageAsync(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, void *, _QWORD **); // rcx
  int v10; // eax
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp-20h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h]
  _QWORD *v17; // [rsp+90h] [rbp+20h] BYREF
  _QWORD *v18; // [rsp+98h] [rbp+28h] BYREF

  v18 = a2;
  v14 = 0LL;
  v9 = *a1;
  if ( v9 )
  {
    v18 = 0LL;
    v10 = (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::Management::Deployment::IPackageManager3>, &v18);
    v11 = v18;
    v17 = v18;
  }
  else
  {
    v10 = 0;
    v17 = 0LL;
    v11 = 0LL;
  }
  v15 = 0;
  v16 = 0LL;
  winrt::check_hresult((int *)&v18, v10, (__int64)&v15);
  v15 = 0;
  v16 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*v11 + 56LL))(
          v11,
          *a3,
          *a4,
          *a5,
          *a6,
          &v14);
  winrt::check_hresult((int *)&v18, v12, (__int64)&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  *a2 = v14;
  return a2;
}
