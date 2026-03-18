/*
 * XREFs of UsbhFdoPnp_DoDefault @ 0x140050400
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_DoDefault(__int64 a1, IRP *a2)
{
  __int64 v4; // r10

  FdoExt(a1);
  Log(a1, 2, 1715758438, a2->Tail.Overlay.CurrentStackLocation->MinorFunction, (__int64)a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), a2);
}
