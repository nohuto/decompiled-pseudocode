/*
 * XREFs of ??$as@UIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@@YA?AUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@1@PEAU23456@@Z @ 0x1802C3020
 * Callers:
 *     ?UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806C2D90 (-UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitask.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory,Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, void *, __int64 *); // rax
  unsigned int v4; // eax
  int v6; // [rsp+28h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    v9 = 0LL;
    v6 = 0;
    v3 = *a2;
    v7 = 0LL;
    v4 = (*v3)(
           a2,
           &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory>,
           &v9);
    winrt::check_hresult(&v8, v4, &v6);
    *a1 = v9;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
