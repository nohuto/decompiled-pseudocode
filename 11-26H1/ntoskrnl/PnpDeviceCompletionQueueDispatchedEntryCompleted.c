/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140493910
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1404937E0 (PnpDeviceCompletionRoutine.c)
 *     PiProcessNewDeviceNodeWorker @ 0x1407A5070 (PiProcessNewDeviceNodeWorker.c)
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpDeviceCompletionQueueAddCompletedRequest @ 0x14049397C (PnpDeviceCompletionQueueAddCompletedRequest.c)
 */

void __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  __int64 v5; // r8
  KIRQL v6; // di
  _QWORD *v7; // rdx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F84088);
  v5 = *a2;
  v6 = v3;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v7 = (_QWORD *)a2[1], (_QWORD *)*v7 != a2) )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  --dword_140F84050;
  PnpDeviceCompletionQueueAddCompletedRequest(v4, a2);
  KeReleaseSpinLock(&qword_140F84088, v6);
}
