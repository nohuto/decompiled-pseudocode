/*
 * XREFs of imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1400A11A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x14004D970 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1400A19C0 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 */

void __fastcall imp_WdfIoQueueStopAndPurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  int v2; // eax
  FxIoQueue *v3; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *fxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  fxDriverGlobals = 0LL;
  v3 = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&v3,
    &fxDriverGlobals);
  if ( (int)FxVerifierCheckIrqlLevel(fxDriverGlobals, 0) >= 0 )
  {
    v2 = FxIoQueue::QueueIdleSynchronously(v3, 1u);
    if ( v2 < 0 )
      FxIoQueue::FatalError(v3, v2);
  }
}
