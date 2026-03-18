/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x140585FB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x140599780 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpDeviceBlockUnblockPushLock.KernelWaitTime;
  *((_DWORD *)&HalpEnlightenment + 7) = HIDWORD(HalpDeviceBlockUnblockPushLock.InGlobalUpdateVpThreadPriorityList);
  *(&HalpEnlightenment + 4) = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerAssistPriorityFloor;
  *(&HalpEnlightenment + 6) = (__int64)HalpDeviceBlockUnblockPushLock.KernelShadowStackInitial;
  *(&HalpEnlightenment + 7) = (__int64)HalpDeviceBlockUnblockPushLock.KernelShadowStackBase;
  *(&HalpEnlightenment + 8) = HalpDeviceBlockUnblockPushLock.KernelShadowStackLimit.AllFields;
  *(&HalpEnlightenment + 9) = HalpDeviceBlockUnblockPushLock.ExtendedFeatureDisableMask;
  *(&HalpEnlightenment + 10) = (__int64)HalpDeviceBlockUnblockPushLock.WpsFeedback;
  *(&HalpEnlightenment + 11) = HalpDeviceBlockUnblockPushLock.Spare35[0];
  *(&HalpEnlightenment + 14) = (__int64)HalpDeviceBlockUnblockPushLock.SystemAffinityTokenListHead.Next;
  *(&HalpEnlightenment + 19) = (__int64)HalpDeviceBlockUnblockPushLock.Spare32;
  *(&HalpEnlightenment + 20) = HalpDeviceBlockUnblockPushLock.KcsanThread;
  *(&HalpEnlightenment + 21) = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerAssistYieldCounter;
  *(&HalpEnlightenment + 22) = HalpDeviceBlockUnblockPushLock.SchedulerAssistLastYieldBoostTime;
  *(&HalpEnlightenment + 23) = HalpDeviceBlockUnblockPushLock.Padding[0];
  *(&HalpEnlightenment + 24) = HalpDeviceBlockUnblockPushLock.Padding[1];
  *(&HalpEnlightenment + 49) = qword_140FBAF08;
  *(&HalpEnlightenment + 50) = qword_140FBAF10;
  *(&HalpEnlightenment + 32) = qword_140FBAE80;
  *(&HalpEnlightenment + 45) = qword_140FBAEE8;
  *(&HalpEnlightenment + 31) = qword_140FBAE78;
  *(&HalpEnlightenment + 33) = qword_140FBAE88;
  *(&HalpEnlightenment + 36) = qword_140FBAEA0;
  *(&HalpEnlightenment + 37) = qword_140FBAEA8;
  *(&HalpEnlightenment + 38) = qword_140FBAEB0;
  *(&HalpEnlightenment + 39) = qword_140FBAEB8;
  *(&HalpEnlightenment + 34) = qword_140FBAE90;
  *(&HalpEnlightenment + 35) = qword_140FBAE98;
  *(&HalpEnlightenment + 29) = qword_140FBAE68;
  *(&HalpEnlightenment + 30) = qword_140FBAE70;
  *(&HalpEnlightenment + 1) = HalpDeviceBlockUnblockPushLock.UserWaitTime;
  *(&HalpEnlightenment + 2) = (__int64)HalpDeviceBlockUnblockPushLock.GlobalUpdateVpThreadPriorityListEntry.Flink;
  *(&HalpEnlightenment + 12) = HalpDeviceBlockUnblockPushLock.Spare35[1];
  *(&HalpEnlightenment + 13) = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Spare36;
  *(&HalpEnlightenment + 15) = (__int64)HalpDeviceBlockUnblockPushLock.IptSaveArea;
  *(&HalpEnlightenment + 16) = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.ResourceIndex;
  *(&HalpEnlightenment + 17) = (__int64)HalpDeviceBlockUnblockPushLock.SchedulerSharedSwappablePage;
  *(&HalpEnlightenment + 18) = (__int64)HalpDeviceBlockUnblockPushLock.AutoBoostThreadState;
  *(&HalpEnlightenment + 26) = HalpDeviceBlockUnblockPushLock.Padding[3];
  *(&HalpEnlightenment + 27) = HalpDeviceBlockUnblockPushLock.Padding[4];
  *(&HalpEnlightenment + 28) = qword_140FBAE60;
  *(&HalpEnlightenment + 40) = qword_140FBAEC0;
  *(&HalpEnlightenment + 41) = qword_140FBAEC8;
  *(&HalpEnlightenment + 42) = qword_140FBAED0;
  *(&HalpEnlightenment + 43) = qword_140FBAED8;
  *(&HalpEnlightenment + 44) = qword_140FBAEE0;
  *(&HalpEnlightenment + 46) = qword_140FBAEF0;
  *(&HalpEnlightenment + 47) = qword_140FBAEF8;
  *(&HalpEnlightenment + 48) = qword_140FBAF00;
  return HalpTimerUpdateApiConsumers();
}
