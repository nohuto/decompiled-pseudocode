/*
 * XREFs of PnpUnmapActivatingDeviceNodeToThread @ 0x1403C2704
 * Callers:
 *     PnpPoFxActivateDevice @ 0x1409B02B0 (PnpPoFxActivateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
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
