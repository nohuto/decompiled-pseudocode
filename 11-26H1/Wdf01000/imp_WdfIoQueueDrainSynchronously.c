/*
 * XREFs of imp_WdfIoQueueDrainSynchronously @ 0x1400A1130
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1400A19C0 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1400A1A64 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 */

void __fastcall imp_WdfIoQueueDrainSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  int v2; // eax
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pQueue = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue,
    &pFxDriverGlobals);
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) >= 0 )
  {
    v2 = FxIoQueue::QueueDrainSynchronously(pQueue);
    if ( v2 < 0 )
      FxIoQueue::FatalError(pQueue, v2);
  }
}
