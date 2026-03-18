/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1404D2AE4
 * Callers:
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  _QWORD *v5; // rdx

  KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F84088);
  v4 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v5 = (_QWORD *)a2[1], (_QWORD *)*v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseSpinLock(&qword_140F84088, v3);
  return a2;
}
