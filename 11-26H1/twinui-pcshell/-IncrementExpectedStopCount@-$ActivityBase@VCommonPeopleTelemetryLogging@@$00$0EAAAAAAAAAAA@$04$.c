/*
 * XREFs of ?IncrementExpectedStopCount@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803811A8
 * Callers:
 *     ?Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x18038225C (-Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x18040D610 (-Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180016044 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::IncrementExpectedStopCount(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v2);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 272) + 248LL);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
