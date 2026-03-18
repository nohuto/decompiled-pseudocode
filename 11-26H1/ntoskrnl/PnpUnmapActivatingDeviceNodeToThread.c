/*
 * XREFs of PnpUnmapActivatingDeviceNodeToThread @ 0x1403B8804
 * Callers:
 *     PnpPoFxActivateDevice @ 0x14090E180 (PnpPoFxActivateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 */

void __fastcall PnpUnmapActivatingDeviceNodeToThread(__int64 a1)
{
  KIRQL v1; // bl
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  Buffer[0] = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PnpDeviceActivationTableSpinLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceActivationTable, Buffer);
  KeReleaseSpinLock(&PnpDeviceActivationTableSpinLock, v1);
}
