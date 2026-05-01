/*
 * XREFs of ??$tip_make_shared_nothrow@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180587904
 * Callers:
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18058A15C (-open_helper@-$tip_test@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180587954 (--0-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U12345.c)
 */

_QWORD *__fastcall tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>,_GUID * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  LPVOID v4; // rax
  wil::details::in1diag3 *v5; // rcx

  v4 = CoTaskMemAlloc(0x140uLL);
  if ( !v4 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v5);
  *a1 = tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>(
          v4,
          *a2);
  return a1;
}
