/*
 * XREFs of PiSwDeviceDereference @ 0x140A7B3F4
 * Callers:
 *     PiSwProcessRemove @ 0x14090B360 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140A7B100 (PiSwCloseDevice.c)
 *     PiSwBusRelationRemove @ 0x140A7B204 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140A7B310 (PiSwUnassociateDeviceObject.c)
 *     PiSwDispatch @ 0x140A7B430 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140A7B628 (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
