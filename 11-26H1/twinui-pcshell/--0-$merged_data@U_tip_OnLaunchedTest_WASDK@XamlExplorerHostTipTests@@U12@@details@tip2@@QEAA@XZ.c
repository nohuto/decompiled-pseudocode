/*
 * XREFs of ??0?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x180282DE0
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802822F4 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTip.c)
 * Callees:
 *     ??0test_state@tip2@@QEAA@XZ @ 0x180282F2C (--0test_state@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-30h]

  *(_QWORD *)&v3 = 0xC100027D0B70LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_QWORD *)(a1 + 8) = a1;
  *((_QWORD *)&v3 + 1) = "OnLaunchedTest_WASDK";
  tip2::test_state::test_state((tip2::test_state *)(a1 + 16));
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 40) = 0x101uLL;
  *(_OWORD *)(a1 + 56) = 0uLL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  *(_DWORD *)(a1 + 272) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1;
  return result;
}
