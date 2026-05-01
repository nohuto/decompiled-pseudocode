/*
 * XREFs of ?OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x1803C3630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x1803C15D8 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x1803C1F58 (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x1803C203C (-CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?HideFlyout@MeetNowExperienceManager@@UEAAJXZ @ 0x1803C2DD0 (-HideFlyout@MeetNowExperienceManager@@UEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C5B7C (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA?AV12@XZ @ 0x1803C5EA0 (-TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA-AV12@XZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnIdleStateChanged(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        char a3)
{
  _BYTE v5[336]; // [rsp+20h] [rbp-168h] BYREF

  if ( a3 )
  {
    MeetNowExperienceManager::CancelShowFlyoutActivityTimeout((MeetNowExperienceManager *)((char *)this - 56));
    if ( **((_DWORD **)this + 83) == 1 )
    {
      MeetNowTelemetry::ShowFlyoutActivity::TransferToCurrentThread((char *)this + 392, v5);
      MeetNowTelemetry::ShowFlyoutActivity::CancelledDueToLock((MeetNowTelemetry::ShowFlyoutActivity *)v5);
      MeetNowExperienceManager::HideFlyout((MeetNowExperienceManager *)((char *)this - 56));
      wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
      MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v5);
    }
  }
  return 0LL;
}
