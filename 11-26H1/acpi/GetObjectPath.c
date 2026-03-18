/*
 * XREFs of GetObjectPath @ 0x14002C8B4
 * Callers:
 *     GetFieldUnitRegionObj @ 0x140004D70 (GetFieldUnitRegionObj.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x14000EE78 (SyncEvalObject.c)
 *     Acquire @ 0x140014CB0 (Acquire.c)
 *     Release @ 0x140014E60 (Release.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIAmliBuildObjectPathname @ 0x14002C5E4 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x14002C7E4 (AMLIGetNameSpaceObjectPath.c)
 *     AcpiDiagTraceDeviceReset @ 0x14002D070 (AcpiDiagTraceDeviceReset.c)
 *     ResetSignal @ 0x140036A80 (ResetSignal.c)
 *     Wait @ 0x140036BE0 (Wait.c)
 *     ProcessEvalObj @ 0x140039FF0 (ProcessEvalObj.c)
 *     AMLIFindNameSpaceObject @ 0x14004B3A4 (AMLIFindNameSpaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x140052A74 (CreateNativeNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     Simulator_NotifyNamespaceCollision @ 0x14006C9EC (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x14006EC80 (DebugNotify.c)
 *     DebugRunMethod @ 0x14006EF70 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x14006F410 (RunMethodCallBack.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x14000A9F0 (GetObjectPathNoLock.c)
 */

_BYTE *__fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  _BYTE *ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}
