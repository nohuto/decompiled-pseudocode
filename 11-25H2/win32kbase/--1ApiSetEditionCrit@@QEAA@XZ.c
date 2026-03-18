/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268
 * Callers:
 *     rimDeviceResetApc @ 0x140033010 (rimDeviceResetApc.c)
 *     InputUnInitialize @ 0x1400CED9C (InputUnInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x140153C6C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x140212920 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A620 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A900 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 * Callees:
 *     ApiSetLeaveEditionCrit @ 0x140197400 (ApiSetLeaveEditionCrit.c)
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( *(_DWORD *)this )
  {
    if ( !*((_DWORD *)this + 1) )
      ApiSetLeaveEditionCrit();
  }
}
