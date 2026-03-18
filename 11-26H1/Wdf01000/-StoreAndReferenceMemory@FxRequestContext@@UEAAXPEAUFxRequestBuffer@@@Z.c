/*
 * XREFs of ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350
 * Callers:
 *     imp_WdfDeviceStopIdleActual @ 0x140010F50 (imp_WdfDeviceStopIdleActual.c)
 *     StopIdleWorker @ 0x140011570 (StopIdleWorker.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x140031520 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140031FD0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1400322B0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400326D0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x14004AD80 (imp_WdfDeviceResumeIdleActual.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x140060C28 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxRequestContext::StoreAndReferenceMemory(FxRequestContext *this, FxRequestBuffer *Buffer)
{
  IFxMemory *Memory; // rax
  __int64 v5; // r8

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    v5 = 130LL;
LABEL_6:
    Buffer->u.Memory.Memory->AddRef(
      Buffer->u.Memory.Memory,
      this,
      v5,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    Memory = Buffer->u.Memory.Memory;
    goto LABEL_4;
  }
  if ( Buffer->DataType == FxRequestBufferReferencedMdl )
  {
    v5 = 135LL;
    goto LABEL_6;
  }
  Memory = 0LL;
LABEL_4:
  this->m_RequestMemory = Memory;
}
