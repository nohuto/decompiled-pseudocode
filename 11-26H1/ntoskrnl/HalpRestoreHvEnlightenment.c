/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x1405884D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x14059BF00 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpDeviceBlockUnblockPushLock.TracingPrivate[0];
  *((_DWORD *)&HalpEnlightenment + 7) = *(&HalpDeviceBlockUnblockPushLock.ReservedPreviousReadyTimeValue + 1);
  *(&HalpEnlightenment + 4) = HalpDeviceBlockUnblockPushLock.KernelWaitTime;
  *((_OWORD *)&HalpEnlightenment + 3) = HalpDeviceBlockUnblockPushLock.1008;
  *(&HalpEnlightenment + 8) = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerAssistPriorityFloor;
  *(&HalpEnlightenment + 9) = (__int64)HalpDeviceBlockUnblockPushLock.KernelShadowStack;
  *(&HalpEnlightenment + 10) = (__int64)HalpDeviceBlockUnblockPushLock.KernelShadowStackInitial;
  *(&HalpEnlightenment + 11) = (__int64)HalpDeviceBlockUnblockPushLock.KernelShadowStackBase;
  *(&HalpEnlightenment + 14) = (__int64)HalpDeviceBlockUnblockPushLock.WpsFeedback;
  *(&HalpEnlightenment + 19) = (__int64)HalpDeviceBlockUnblockPushLock.IptSaveArea;
  *(&HalpEnlightenment + 20) = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.ResourceIndex;
  *(&HalpEnlightenment + 21) = (__int64)HalpDeviceBlockUnblockPushLock.SchedulerSharedSwappablePage;
  *(&HalpEnlightenment + 22) = (__int64)HalpDeviceBlockUnblockPushLock.AutoBoostThreadState;
  *(&HalpEnlightenment + 23) = (__int64)HalpDeviceBlockUnblockPushLock.Spare32;
  *(&HalpEnlightenment + 24) = HalpDeviceBlockUnblockPushLock.KcsanThread;
  *(&HalpEnlightenment + 49) = qword_140FBB2A8;
  *(&HalpEnlightenment + 50) = qword_140FBB2B0;
  *(&HalpEnlightenment + 32) = qword_140FBB220;
  *(&HalpEnlightenment + 45) = qword_140FBB288;
  *(&HalpEnlightenment + 31) = HalpDeviceBlockUnblockPushLock.Padding[4];
  *(&HalpEnlightenment + 33) = qword_140FBB228;
  *(&HalpEnlightenment + 36) = qword_140FBB240;
  *(&HalpEnlightenment + 37) = qword_140FBB248;
  *(&HalpEnlightenment + 38) = qword_140FBB250;
  *(&HalpEnlightenment + 39) = qword_140FBB258;
  *(&HalpEnlightenment + 34) = qword_140FBB230;
  *(&HalpEnlightenment + 35) = qword_140FBB238;
  *(&HalpEnlightenment + 29) = HalpDeviceBlockUnblockPushLock.Padding[2];
  *(&HalpEnlightenment + 30) = HalpDeviceBlockUnblockPushLock.Padding[3];
  *(&HalpEnlightenment + 1) = (__int64)HalpDeviceBlockUnblockPushLock.SchedulerAssist;
  *(&HalpEnlightenment + 2) = (__int64)HalpDeviceBlockUnblockPushLock.AbWaitObject;
  *(&HalpEnlightenment + 12) = HalpDeviceBlockUnblockPushLock.KernelShadowStackLimit.AllFields;
  *(&HalpEnlightenment + 13) = HalpDeviceBlockUnblockPushLock.ExtendedFeatureDisableMask;
  *(&HalpEnlightenment + 15) = HalpDeviceBlockUnblockPushLock.Spare35[0];
  *(&HalpEnlightenment + 16) = HalpDeviceBlockUnblockPushLock.Spare35[1];
  *(&HalpEnlightenment + 17) = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Spare36;
  *(&HalpEnlightenment + 18) = (__int64)HalpDeviceBlockUnblockPushLock.SystemAffinityTokenListHead.Next;
  *(&HalpEnlightenment + 26) = HalpDeviceBlockUnblockPushLock.SchedulerAssistLastYieldBoostTime;
  *(&HalpEnlightenment + 27) = HalpDeviceBlockUnblockPushLock.Padding[0];
  *(&HalpEnlightenment + 28) = HalpDeviceBlockUnblockPushLock.Padding[1];
  *(&HalpEnlightenment + 40) = qword_140FBB260;
  *(&HalpEnlightenment + 41) = qword_140FBB268;
  *(&HalpEnlightenment + 42) = qword_140FBB270;
  *(&HalpEnlightenment + 43) = qword_140FBB278;
  *(&HalpEnlightenment + 44) = qword_140FBB280;
  *(&HalpEnlightenment + 46) = qword_140FBB290;
  *(&HalpEnlightenment + 47) = qword_140FBB298;
  *(&HalpEnlightenment + 48) = qword_140FBB2A0;
  return HalpTimerUpdateApiConsumers();
}
