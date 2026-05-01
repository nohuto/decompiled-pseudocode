/*
 * XREFs of ?FindPackagesForUserWithPackageTypes@?$consume_Windows_Management_Deployment_IPackageManager2@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBW4PackageTypes@Deployment@Management@Windows@3@@Z @ 0x18027B7DC
 * Callers:
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x18002A768 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Management_Deployment_IPackageManager2<winrt::Windows::Management::Deployment::PackageManager>::FindPackagesForUserWithPackageTypes(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5)
{
  __int64 (__fastcall ***v8)(_QWORD, void *, _QWORD **); // rcx
  unsigned int v9; // eax
  _QWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  int v14; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h]
  _QWORD *v16; // [rsp+80h] [rbp+20h] BYREF
  _QWORD *v17; // [rsp+88h] [rbp+28h] BYREF

  v17 = a2;
  v13 = 0LL;
  v8 = *a1;
  if ( v8 )
  {
    v17 = 0LL;
    v9 = (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::Management::Deployment::IPackageManager2>, &v17);
    v10 = v17;
    v16 = v17;
  }
  else
  {
    v9 = 0;
    v16 = 0LL;
    v10 = 0LL;
  }
  v14 = 0;
  v15 = 0LL;
  winrt::check_hresult(&v17, v9, &v14);
  v14 = 0;
  v15 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, __int64 *))(*v10 + 112LL))(
          v10,
          *a3,
          *a4,
          *a5,
          &v13);
  winrt::check_hresult(&v17, v11, &v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  *a2 = v13;
  return a2;
}
