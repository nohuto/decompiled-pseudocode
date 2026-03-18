/*
 * XREFs of UsbhFdoPnp_PassOnSuccess @ 0x140050470
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_PassOnSuccess(__int64 a1, IRP *a2)
{
  __int64 v3; // r10
  PDEVICE_OBJECT *v4; // rax

  Log(a1, 2, 1718842723, 0LL, (__int64)a2);
  v4 = (PDEVICE_OBJECT *)FdoExt(v3);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = 0;
  return IofCallDriver(v4[151], a2);
}
