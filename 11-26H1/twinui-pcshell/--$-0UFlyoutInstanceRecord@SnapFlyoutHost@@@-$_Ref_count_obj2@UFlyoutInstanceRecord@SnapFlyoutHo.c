/*
 * XREFs of ??$?0UFlyoutInstanceRecord@SnapFlyoutHost@@@?$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAA@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805B17B0
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B2A60 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@impl@winrt@@QEAA@$$QEAU012@@Z @ 0x1805B2324 (--0-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B2324.c)
 */

__int64 __fastcall std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::`vftable';
  v2 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 24) = v3;
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    a1 + 32,
    a2 + 2,
    a2,
    a1);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v5 + 48,
    v4 + 32,
    v4,
    v5);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v7 + 64,
    v6 + 48,
    v6,
    v7);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v9 + 80,
    v8 + 64,
    v8,
    v9);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v11 + 96,
    v10 + 80,
    v10,
    v11);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v13 + 112,
    v12 + 96,
    v12,
    v13);
  return v14;
}
