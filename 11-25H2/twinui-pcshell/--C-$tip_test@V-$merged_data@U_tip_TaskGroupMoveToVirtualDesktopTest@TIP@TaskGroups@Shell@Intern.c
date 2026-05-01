/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@1@XZ @ 0x18068BDD0
 * Callers:
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18068E494 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180693A78 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Sh.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest>>::ensure_data();
  v4 = *v3;
  *a2 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 304));
  tip2::details::shared_data<1,0,0>::begin_update(*a2 + 8);
  return a2;
}
