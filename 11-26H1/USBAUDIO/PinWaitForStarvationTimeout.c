/*
 * XREFs of PinWaitForStarvationTimeout @ 0x140004FA8
 * Callers:
 *     USBCaptureResetWorker @ 0x1400042A0 (USBCaptureResetWorker.c)
 *     USBType1StateChangePin @ 0x1400049E0 (USBType1StateChangePin.c)
 *     PinWaitForStarvation @ 0x14000BF3C (PinWaitForStarvation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PinWaitForStarvationTimeout(__int64 a1, union _LARGE_INTEGER *a2)
{
  __int64 v2; // rbp
  unsigned int v4; // ebx
  KIRQL v5; // al
  KIRQL v6; // si

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 112));
  v6 = v5;
  if ( *(_DWORD *)(v2 + 56) )
  {
    KeResetEvent((PRKEVENT)(v2 + 120));
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 112), v6);
    return (unsigned int)KeWaitForSingleObject((PVOID)(v2 + 120), Executive, 0, 0, a2);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 112), v5);
  }
  return v4;
}
