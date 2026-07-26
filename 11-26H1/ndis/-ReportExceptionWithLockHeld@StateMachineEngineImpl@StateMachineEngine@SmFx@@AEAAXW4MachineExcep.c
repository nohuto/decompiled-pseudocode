/*
 * XREFs of ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400783E0
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140004C70 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ndisDispatchRequest @ 0x14000C5E0 (ndisDispatchRequest.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140077050 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14008C430 (-AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 *     ?ReportException@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400E9C90 (-ReportException@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z.c)
 * Callees:
 *     ?GetStateIdFromStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGG@Z @ 0x14005FFD0 (-GetStateIdFromStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGG@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned int a2,
        __int16 a3,
        unsigned __int16 a4)
{
  unsigned __int16 StateIdFromStateIndex; // ax
  __int64 v8; // r8
  void (__fastcall *v9)(_QWORD, _QWORD, __int64, _QWORD); // r10

  *((_DWORD *)this + 2 * *((unsigned __int8 *)this + 977) + 192) = a2;
  *((_WORD *)this + 4 * *((unsigned __int8 *)this + 977) + 386) = a3;
  *((_WORD *)this + 4 * *((unsigned __int8 *)this + 977) + 387) = a4;
  *((_BYTE *)this + 977) = (*((_BYTE *)this + 977) + 1) & 7;
  KeReleaseSpinLock((PKSPIN_LOCK)this + 125, *((_BYTE *)this + 1009));
  if ( *((_QWORD *)this + 115) )
  {
    StateIdFromStateIndex = SmFx::StateMachineEngine::StateMachineEngineImpl::GetStateIdFromStateIndex(this, a4);
    v9(*((_QWORD *)this + 112), a2, v8, StateIdFromStateIndex);
  }
}
