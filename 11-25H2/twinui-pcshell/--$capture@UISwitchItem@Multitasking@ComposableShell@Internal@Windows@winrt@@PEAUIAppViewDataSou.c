/*
 * XREFs of ??$capture@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@P87@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@_EAEBQEAU8@@winrt@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@0@$$QEAPEAUIAppViewDataSourceAdapter@@$$QEAP86@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@_EAEBQEAU7@@Z @ 0x180681474
 * Callers:
 *     ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x180682490 (-OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall ___capture_UISwitchItem_Multitasking_ComposableShell_Internal_Windows_winrt__PEAUIAppViewDataSourceAdapter__P87_EAAJPEAUHWND____AEBU_GUID__PEAPEAX__EAEBQEAU8__winrt__YA_AUISwitchItem_Multitasking_ComposableShell_Internal_Windows_0___QEAPEAUIAppViewDataSourceAdapter____QEAP86_EAAJPEAUHWND____AEBU_GUID__PEAPEAX__EAEBQEAU7__Z(
        _QWORD *a1,
        __int64 *a2,
        __int64 (__fastcall **a3)(__int64, __int64, void *, __int64 *),
        __int64 *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, void *, __int64 *); // rax
  int v9; // eax
  int v11; // [rsp+38h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]
  _QWORD *v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v13 = a1;
  v6 = *a4;
  v14 = 0LL;
  v11 = 0;
  v7 = *a2;
  v8 = *a3;
  v12 = 0LL;
  v9 = v8(v7, v6, &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>, &v14);
  winrt::check_hresult((int *)&v13, v9, (__int64)&v11);
  *a1 = v14;
  return a1;
}
