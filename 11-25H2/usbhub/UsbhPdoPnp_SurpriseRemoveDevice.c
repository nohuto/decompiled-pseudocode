/*
 * XREFs of UsbhPdoPnp_SurpriseRemoveDevice @ 0x14005D4E0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhPdoRemoveCleanup @ 0x1400177EC (UsbhPdoRemoveCleanup.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     SET_PDO_SWPNPSTATE @ 0x1400376D8 (SET_PDO_SWPNPSTATE.c)
 *     UsbhSetPdo_FailIo @ 0x140048710 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhBillboardCleanup @ 0x14005C19C (UsbhBillboardCleanup.c)
 *     WnfPublishUsbPartnerDualRoleFeatures @ 0x1400601A0 (WnfPublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall UsbhPdoPnp_SurpriseRemoveDevice(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rbx
  int v5; // r10d

  v4 = PdoExt((__int64)Pdo);
  Log(*((_QWORD *)v4 + 148), 256, 1936879716, (__int64)Irp, *((_QWORD *)v4 + 145));
  Log(*((_QWORD *)v4 + 148), v5, 1936879665, (__int64)Pdo, (__int64)v4);
  UsbhSetPdo_FailIo((__int64)Pdo);
  if ( (v4[355] & 0x400000) != 0 )
    KeSetEvent((PRKEVENT)(v4 + 730), 0, 0);
  if ( (v4[358] & 0x40000) != 0 )
  {
    WnfPublishUsbPartnerDualRoleFeatures(*((_QWORD *)v4 + 382), 0LL, 0LL);
    v4[358] &= ~0x40000u;
  }
  if ( *((_QWORD *)v4 + 301) )
    UsbhBillboardCleanup(Pdo);
  UsbhPdoRemoveCleanup(Pdo);
  Usbh_PdoSurpriseRemove_PdoEvent(*((_QWORD *)v4 + 148), Pdo, (KSPIN_LOCK)(v4 + 236));
  SET_PDO_SWPNPSTATE((__int64)Pdo, 102, 3);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
