/*
 * XREFs of ?TaskGroupDataSource@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18057E79C
 * Callers:
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x1800CD9F0 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1806A7CA0 (-ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>::TaskGroupDataSource(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, _QWORD **); // rcx
  int v4; // eax
  _QWORD *v5; // rbx
  int v6; // eax
  int v8; // [rsp+28h] [rbp-18h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h]
  _QWORD *v10; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v11 = a2;
  v12 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(
           v3,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapter>,
           &v11);
    v5 = v11;
    v10 = v11;
  }
  else
  {
    v4 = 0;
    v10 = 0LL;
    v5 = 0LL;
  }
  v8 = 0;
  v9 = 0LL;
  winrt::check_hresult((int *)&v11, v4, (__int64)&v8);
  v8 = 0;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v5 + 56LL))(v5, &v12);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  *a2 = v12;
  return a2;
}
