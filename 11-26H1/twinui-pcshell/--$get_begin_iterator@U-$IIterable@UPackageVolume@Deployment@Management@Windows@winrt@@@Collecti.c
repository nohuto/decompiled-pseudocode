/*
 * XREFs of ??$get_begin_iterator@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$IIterator@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@1@AEBU?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@3451@@Z @ 0x1805C5A60
 * Callers:
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@impl@winrt@@QEBA@XZ @ 0x1805DAFFC (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackageVolume@Deployment.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::get_begin_iterator<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  int v8; // [rsp+28h] [rbp-18h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h]
  int v10; // [rsp+68h] [rbp+28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0LL;
  v3 = *a2;
  v8 = 0;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v11);
  winrt::check_hresult(&v10, v4, (__int64)&v8);
  v5 = v11;
  v12 = v11;
  LOBYTE(v10) = 0;
  v8 = 0;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 56LL))(v11, &v10);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v8);
  if ( (_BYTE)v10 )
  {
    v12 = 0LL;
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  return a1;
}
