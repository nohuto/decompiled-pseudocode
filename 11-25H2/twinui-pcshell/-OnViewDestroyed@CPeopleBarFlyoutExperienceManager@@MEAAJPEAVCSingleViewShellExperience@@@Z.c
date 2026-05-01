/*
 * XREFs of ?OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379BB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180378510 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18037972C (-NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037A5E4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x18037AB30 (-TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewDestroyed(
        CPeopleBarFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _BYTE v4[336]; // [rsp+20h] [rbp-168h] BYREF

  CPeopleBarFlyoutExperienceManager::NotifyTrayOfFlyoutVisibility(
    (CPeopleBarFlyoutExperienceManager *)((char *)this - 64),
    0);
  if ( **((_DWORD **)this + 68) == 1 )
  {
    CommonPeopleTelemetry::ShowPeopleBarFlyout::TransferToCurrentThread((char *)this + 272, v4);
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v4,
      2147500036LL);
    CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v4);
  }
  return 0LL;
}
