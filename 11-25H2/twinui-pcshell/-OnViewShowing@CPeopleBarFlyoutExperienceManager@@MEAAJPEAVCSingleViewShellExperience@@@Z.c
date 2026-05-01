/*
 * XREFs of ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379CF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180378100 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_180378100.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180378510 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18037875C (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x18037AB30 (-TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18037AD90 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::reset @ 0x18037AF70 (wil--details--lambda_call__lambda_73bbafb99778084dc859f66a1360e626___--reset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewShowing(
        CPeopleBarFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _QWORD *v3; // rdi
  _BYTE *v5; // [rsp+20h] [rbp-E0h] BYREF
  char v6; // [rsp+28h] [rbp-D8h]
  _QWORD v7[42]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[336]; // [rsp+180h] [rbp+80h] BYREF

  v3 = (_QWORD *)((char *)this + 272);
  CommonPeopleTelemetry::ShowPeopleBarFlyout::TransferToCurrentThread((char *)this + 272, v8);
  v5 = v8;
  v6 = 1;
  CPeopleBarFlyoutExperienceManager::UpdateViewPositionAndEffects(
    (CPeopleBarFlyoutExperienceManager *)((char *)this - 64),
    1);
  wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::reset(&v5);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)v8,
    0);
  v7[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=(v3, (__int64)v7);
  CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v7);
  wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::reset(&v5);
  CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v8);
  return 0LL;
}
