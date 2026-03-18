/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x140586350
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140427BB0 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x140599780 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax
  char v1; // dl

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    HIDWORD(HalpDeviceBlockUnblockPushLock.InGlobalUpdateVpThreadPriorityList) = dword_140FBB03C;
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerAssistPriorityFloor = qword_140FBB040;
    HalpDeviceBlockUnblockPushLock.KernelShadowStackInitial = (void *)qword_140FBB050;
    HalpDeviceBlockUnblockPushLock.KernelShadowStackBase = (void *)qword_140FBB058;
    HalpDeviceBlockUnblockPushLock.KernelShadowStackLimit.AllFields = qword_140FBB060;
    HalpDeviceBlockUnblockPushLock.ExtendedFeatureDisableMask = qword_140FBB068;
    HalpDeviceBlockUnblockPushLock.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)qword_140FBB070;
    HalpDeviceBlockUnblockPushLock.Spare35[0] = qword_140FBB078;
    HalpDeviceBlockUnblockPushLock.SystemAffinityTokenListHead.Next = (struct _SINGLE_LIST_ENTRY *)qword_140FBB090;
    HalpDeviceBlockUnblockPushLock.Spare32 = (void *)qword_140FBB0B8;
    HalpDeviceBlockUnblockPushLock.KcsanThread = qword_140FBB0C0;
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerAssistYieldCounter = qword_140FBB0C8;
    HalpDeviceBlockUnblockPushLock.SchedulerAssistLastYieldBoostTime = qword_140FBB0D0;
    HalpDeviceBlockUnblockPushLock.Padding[0] = qword_140FBB0D8;
    HalpDeviceBlockUnblockPushLock.Padding[1] = qword_140FBB0E0;
    HalpDeviceBlockUnblockPushLock.KernelWaitTime = HalpEnlightenment;
    qword_140FBAF08 = qword_140FBB1A8;
    qword_140FBAF10 = qword_140FBB1B0;
    qword_140FBAE80 = qword_140FBB120;
    qword_140FBAEE8 = qword_140FBB188;
    qword_140FBAE78 = qword_140FBB118;
    qword_140FBAE88 = qword_140FBB128;
    qword_140FBAEA0 = qword_140FBB140;
    qword_140FBAEA8 = qword_140FBB148;
    qword_140FBAEB0 = qword_140FBB150;
    qword_140FBAEB8 = qword_140FBB158;
    qword_140FBAE90 = qword_140FBB130;
    qword_140FBAE98 = qword_140FBB138;
    qword_140FBAE68 = qword_140FBB108;
    qword_140FBAE70 = qword_140FBB110;
    *(_OWORD *)&HalpDeviceBlockUnblockPushLock.UserWaitTime = xmmword_140FBB028;
    HalpDeviceBlockUnblockPushLock.Spare35[1] = qword_140FBB080;
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Spare36 = qword_140FBB088;
    HalpDeviceBlockUnblockPushLock.IptSaveArea = (void *)qword_140FBB098;
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.ResourceIndex = qword_140FBB0A0;
    HalpDeviceBlockUnblockPushLock.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)qword_140FBB0A8;
    HalpDeviceBlockUnblockPushLock.AutoBoostThreadState = (void *)qword_140FBB0B0;
    HalpDeviceBlockUnblockPushLock.Padding[3] = qword_140FBB0F0;
    HalpDeviceBlockUnblockPushLock.Padding[4] = qword_140FBB0F8;
    qword_140FBAE60 = qword_140FBB100;
    qword_140FBAEC0 = qword_140FBB160;
    qword_140FBAEC8 = qword_140FBB168;
    qword_140FBAED0 = qword_140FBB170;
    qword_140FBAED8 = qword_140FBB178;
    qword_140FBAEE0 = qword_140FBB180;
    qword_140FBAEF0 = qword_140FBB190;
    qword_140FBAEF8 = qword_140FBB198;
    qword_140FBAF00 = qword_140FBB1A0;
    HalpEnlightenment = 0LL;
    dword_140FBB03C = -1;
    qword_140FBB040 = 0LL;
    qword_140FBB050 = 0LL;
    qword_140FBB058 = 0LL;
    qword_140FBB060 = 0LL;
    qword_140FBB068 = 0LL;
    qword_140FBB070 = 0LL;
    qword_140FBB078 = 0LL;
    qword_140FBB090 = 0LL;
    qword_140FBB0B8 = 0LL;
    qword_140FBB0C0 = 0LL;
    qword_140FBB0C8 = 0LL;
    qword_140FBB0D0 = 0LL;
    qword_140FBB0D8 = 0LL;
    qword_140FBB0E0 = 0LL;
    qword_140FBB1A8 = 0LL;
    qword_140FBB120 = 0LL;
    qword_140FBB188 = 0LL;
    qword_140FBB118 = 0LL;
    qword_140FBB128 = 0LL;
    qword_140FBB140 = 0LL;
    qword_140FBB148 = 0LL;
    qword_140FBB150 = 0LL;
    qword_140FBB158 = 0LL;
    qword_140FBB130 = 0LL;
    qword_140FBB138 = 0LL;
    if ( !v1 )
      qword_140FBB108 = 0LL;
    qword_140FBB110 = 0LL;
    xmmword_140FBB028 = 0uLL;
    qword_140FBB080 = 0LL;
    qword_140FBB088 = 0LL;
    qword_140FBB098 = 0LL;
    qword_140FBB0A0 = 0LL;
    qword_140FBB0A8 = 0LL;
    qword_140FBB0B0 = 0LL;
    qword_140FBB0F0 = 0LL;
    qword_140FBB0F8 = 0LL;
    qword_140FBB100 = 0LL;
    qword_140FBB160 = 0LL;
    qword_140FBB168 = 0LL;
    qword_140FBB170 = 0LL;
    qword_140FBB178 = 0LL;
    qword_140FBB180 = 0LL;
    qword_140FBB190 = 0LL;
    qword_140FBB198 = 0LL;
    qword_140FBB1A0 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
