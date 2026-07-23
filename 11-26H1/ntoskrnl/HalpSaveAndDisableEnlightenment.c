/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x140588870
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14059BF00 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax
  char v1; // dl

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    *(&HalpDeviceBlockUnblockPushLock.ReservedPreviousReadyTimeValue + 1) = dword_140FBB3DC;
    HalpDeviceBlockUnblockPushLock.KernelWaitTime = qword_140FBB3E0;
    HalpDeviceBlockUnblockPushLock.1008 = ($06DA74891900ABA548658392A057F771)xmmword_140FBB3F0;
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerAssistPriorityFloor = qword_140FBB400;
    HalpDeviceBlockUnblockPushLock.KernelShadowStack = (void *)qword_140FBB408;
    HalpDeviceBlockUnblockPushLock.KernelShadowStackInitial = (void *)qword_140FBB410;
    HalpDeviceBlockUnblockPushLock.KernelShadowStackBase = (void *)qword_140FBB418;
    HalpDeviceBlockUnblockPushLock.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)qword_140FBB430;
    HalpDeviceBlockUnblockPushLock.IptSaveArea = (void *)qword_140FBB458;
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.ResourceIndex = qword_140FBB460;
    HalpDeviceBlockUnblockPushLock.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)qword_140FBB468;
    HalpDeviceBlockUnblockPushLock.AutoBoostThreadState = (void *)qword_140FBB470;
    HalpDeviceBlockUnblockPushLock.Spare32 = (void *)qword_140FBB478;
    HalpDeviceBlockUnblockPushLock.KcsanThread = qword_140FBB480;
    HalpDeviceBlockUnblockPushLock.TracingPrivate[0] = HalpEnlightenment;
    qword_140FBB2A8 = qword_140FBB548;
    qword_140FBB2B0 = qword_140FBB550;
    qword_140FBB220 = qword_140FBB4C0;
    qword_140FBB288 = qword_140FBB528;
    HalpDeviceBlockUnblockPushLock.Padding[4] = qword_140FBB4B8;
    qword_140FBB228 = qword_140FBB4C8;
    qword_140FBB240 = qword_140FBB4E0;
    qword_140FBB248 = qword_140FBB4E8;
    qword_140FBB250 = qword_140FBB4F0;
    qword_140FBB258 = qword_140FBB4F8;
    qword_140FBB230 = qword_140FBB4D0;
    qword_140FBB238 = qword_140FBB4D8;
    HalpDeviceBlockUnblockPushLock.Padding[2] = qword_140FBB4A8;
    HalpDeviceBlockUnblockPushLock.Padding[3] = qword_140FBB4B0;
    *(_OWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerAssist = xmmword_140FBB3C8;
    HalpDeviceBlockUnblockPushLock.KernelShadowStackLimit.AllFields = qword_140FBB420;
    HalpDeviceBlockUnblockPushLock.ExtendedFeatureDisableMask = qword_140FBB428;
    HalpDeviceBlockUnblockPushLock.Spare35[0] = qword_140FBB438;
    HalpDeviceBlockUnblockPushLock.Spare35[1] = qword_140FBB440;
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Spare36 = qword_140FBB448;
    HalpDeviceBlockUnblockPushLock.SystemAffinityTokenListHead.Next = (struct _SINGLE_LIST_ENTRY *)qword_140FBB450;
    HalpDeviceBlockUnblockPushLock.SchedulerAssistLastYieldBoostTime = qword_140FBB490;
    HalpDeviceBlockUnblockPushLock.Padding[0] = qword_140FBB498;
    HalpDeviceBlockUnblockPushLock.Padding[1] = qword_140FBB4A0;
    qword_140FBB260 = qword_140FBB500;
    qword_140FBB268 = qword_140FBB508;
    qword_140FBB270 = qword_140FBB510;
    qword_140FBB278 = qword_140FBB518;
    qword_140FBB280 = qword_140FBB520;
    qword_140FBB290 = qword_140FBB530;
    qword_140FBB298 = qword_140FBB538;
    qword_140FBB2A0 = qword_140FBB540;
    HalpEnlightenment = 0LL;
    dword_140FBB3DC = -1;
    qword_140FBB3E0 = 0LL;
    xmmword_140FBB3F0 = 0uLL;
    qword_140FBB400 = 0LL;
    qword_140FBB408 = 0LL;
    qword_140FBB410 = 0LL;
    qword_140FBB418 = 0LL;
    qword_140FBB430 = 0LL;
    qword_140FBB458 = 0LL;
    qword_140FBB460 = 0LL;
    qword_140FBB468 = 0LL;
    qword_140FBB470 = 0LL;
    qword_140FBB478 = 0LL;
    qword_140FBB480 = 0LL;
    qword_140FBB548 = 0LL;
    qword_140FBB4C0 = 0LL;
    qword_140FBB528 = 0LL;
    qword_140FBB4B8 = 0LL;
    qword_140FBB4C8 = 0LL;
    qword_140FBB4E0 = 0LL;
    qword_140FBB4E8 = 0LL;
    qword_140FBB4F0 = 0LL;
    qword_140FBB4F8 = 0LL;
    qword_140FBB4D0 = 0LL;
    qword_140FBB4D8 = 0LL;
    if ( !v1 )
      qword_140FBB4A8 = 0LL;
    qword_140FBB4B0 = 0LL;
    xmmword_140FBB3C8 = 0uLL;
    qword_140FBB420 = 0LL;
    qword_140FBB428 = 0LL;
    qword_140FBB438 = 0LL;
    qword_140FBB440 = 0LL;
    qword_140FBB448 = 0LL;
    qword_140FBB450 = 0LL;
    qword_140FBB490 = 0LL;
    qword_140FBB498 = 0LL;
    qword_140FBB4A0 = 0LL;
    qword_140FBB500 = 0LL;
    qword_140FBB508 = 0LL;
    qword_140FBB510 = 0LL;
    qword_140FBB518 = 0LL;
    qword_140FBB520 = 0LL;
    qword_140FBB530 = 0LL;
    qword_140FBB538 = 0LL;
    qword_140FBB540 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
