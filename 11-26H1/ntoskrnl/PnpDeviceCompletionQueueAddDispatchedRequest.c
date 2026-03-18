/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x1404CAA2C
 * Callers:
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140AA5DC4 (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rcx
  BOOL v5; // edi

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140F84088);
  v4 = (_QWORD *)qword_140F84048;
  v5 = *(_QWORD *)&PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(ULONG **)qword_140F84048 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140F84050;
  qword_140F84048 = (__int64)a2;
  KeReleaseSpinLock(&qword_140F84088, v3);
  return v5;
}
