/*
 * XREFs of ??$as@UITaskGroup@TaskGroups@Shell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITaskGroup@TaskGroups@Shell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18027D568
 * Callers:
 *     ?UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806C2D90 (-UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitask.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<Windows::Internal::Shell::TaskGroups::ITaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
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
    v4 = (*v3)(a2, &winrt::impl::guid_v<Windows::Internal::Shell::TaskGroups::ITaskGroup>, &v9);
    winrt::check_hresult(&v8, v4, &v6);
    *a1 = v9;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
