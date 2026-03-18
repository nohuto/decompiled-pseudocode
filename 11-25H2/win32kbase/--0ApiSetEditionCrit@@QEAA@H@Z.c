/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x140033288
 * Callers:
 *     rimDeviceResetApc @ 0x140033010 (rimDeviceResetApc.c)
 *     InputUnInitialize @ 0x1400CED9C (InputUnInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x140153C6C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x140212920 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A620 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A900 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 * Callees:
 *     ApiSetEnterEditionCrit @ 0x140197084 (ApiSetEnterEditionCrit.c)
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 1) = ApiSetEnterEditionCrit();
  return this;
}
