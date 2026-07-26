/*
 * XREFs of ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14008C430
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140004C70 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ndisDispatchRequest @ 0x14000C5E0 (ndisDispatchRequest.c)
 *     ?EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x140060070 (-EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140077050 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 * Callees:
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400783E0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     ?LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z @ 0x1400E9998 (-LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z.c)
 */

char __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::AddEventToEventQueue(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        __int16 a2)
{
  __int64 v3; // rcx
  char v4; // al

  v3 = *((unsigned __int8 *)this + 979);
  v4 = (v3 + 1) & 0xF;
  if ( v4 == *((_BYTE *)this + 978) )
  {
    SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(this, 2u, a2, 0);
    return 0;
  }
  else
  {
    *((_WORD *)this + v3 + 416) = a2;
    *((_BYTE *)this + 979) = v4;
    SmFx::StateMachineEngine::StateMachineEngineImpl::LogEventEnqueue(this, a2);
    return 1;
  }
}
