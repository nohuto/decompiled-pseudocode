/*
 * XREFs of _lambda_4be18ebf708cd778800d3ace51194f58_::operator() @ 0x1805C10D0
 * Callers:
 *     wil::details::lambda_call__lambda_4be18ebf708cd778800d3ace51194f58___::_lambda_call__lambda_4be18ebf708cd778800d3ace51194f58___ @ 0x1805C10B0 (wil--details--lambda_call__lambda_4be18ebf708cd778800d3ace51194f58___--_lambda_call__lambda_4be1.c)
 * Callees:
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028163C (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802816A0 (--0-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@IEAA@AE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802C78AC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$SnapFlyoutInstance_LoadSnapBarControlFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1805C070C (--$SnapFlyoutInstance_LoadSnapBarControlFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ??$SnapFlyoutInstance_LoadSnapLayoutPickerFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1805C0750 (--$SnapFlyoutInstance_LoadSnapLayoutPickerFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 */

void __fastcall lambda_4be18ebf708cd778800d3ace51194f58_::operator()(int **a1)
{
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = **a1;
  if ( v2 == 1 )
  {
    SnapFlyoutTelemetry::SnapFlyoutInstance_LoadSnapLayoutPickerFailed<unsigned int &>(a1[1] + 80);
  }
  else
  {
    if ( v2 != 2 )
    {
      v3 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3C,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
        (const char *)v3,
        v4);
    }
    SnapFlyoutTelemetry::SnapFlyoutInstance_LoadSnapBarControlFailed<unsigned int &>(a1[1] + 80);
  }
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
    &v6,
    (__int64 *)a1[2] + 6);
  *(_BYTE *)(v6 + 277) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v6);
  tip2::details::shared_data<1,0,0>::complete_without_lock(*((_QWORD *)a1[2] + 6) + 8LL);
}
