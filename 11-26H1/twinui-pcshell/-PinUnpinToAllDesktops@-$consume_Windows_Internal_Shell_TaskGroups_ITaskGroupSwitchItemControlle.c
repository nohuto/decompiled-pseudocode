/*
 * XREFs of ?PinUnpinToAllDesktops@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x1806B6E20
 * Callers:
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B5D34 (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::PinUnpinToAllDesktops(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v9 = 0LL;
    v4 = (**v3)(
           v3,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupSwitchItemController>,
           &v9);
    v5 = v9;
    v10 = v9;
  }
  else
  {
    v4 = 0;
    v10 = 0LL;
    v5 = 0LL;
  }
  v7 = 0;
  v8 = 0LL;
  winrt::check_hresult((int *)&v9, v4, (__int64)&v7);
  v7 = 0;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 88LL))(v5, *a2);
  winrt::check_hresult((int *)&v9, v6, (__int64)&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
}
