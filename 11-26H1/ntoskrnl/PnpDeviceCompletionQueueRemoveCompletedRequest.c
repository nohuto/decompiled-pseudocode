/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1404CC35C
 * Callers:
 *     PipEnumerateDevice @ 0x1409AFFD8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  _QWORD *v5; // rdx

  KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F843E8);
  v4 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v5 = (_QWORD *)a2[1], (_QWORD *)*v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseSpinLock(&qword_140F843E8, v3);
  return a2;
}
