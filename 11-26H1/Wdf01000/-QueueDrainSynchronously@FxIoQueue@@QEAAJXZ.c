/*
 * XREFs of ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1400A1A64
 * Callers:
 *     imp_WdfIoQueueDrainSynchronously @ 0x1400A1130 (imp_WdfIoQueueDrainSynchronously.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x140005090 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004E7B8 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     WPP_IFR_SF_dq @ 0x140080778 (WPP_IFR_SF_dq.c)
 */

__int64 __fastcall FxIoQueue::QueueDrainSynchronously(FxIoQueue *this)
{
  int v2; // ebp
  void *v3; // rbx
  const void *_a2; // r8
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v2 = FxIoQueue::QueuePurge(
         this,
         0,
         0,
         (void (__fastcall *)(WDFQUEUE__ *, void *))FxIoQueue::_PurgeComplete,
         &eventOnStack);
  if ( v2 >= 0 )
  {
    v3 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(
        this->m_Globals,
        5u,
        0xDu,
        0x4Cu,
        WPP_FxIoQueue_cpp_Traceguids,
        this->m_Queue.m_RequestCount + this->m_DriverIoCount,
        _a2);
    }
    KeEnterCriticalRegion();
    if ( !this->m_ObjectSize )
      v3 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      this->m_Globals,
      &eventOnStack,
      "waiting for queue to drain, WDFQUEUE",
      v3,
      this->m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v2;
}
