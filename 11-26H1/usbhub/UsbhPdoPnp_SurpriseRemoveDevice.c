/*
 * XREFs of UsbhPdoPnp_SurpriseRemoveDevice @ 0x14005DAE0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhPdoRemoveCleanup @ 0x140010CF0 (UsbhPdoRemoveCleanup.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     SET_PDO_SWPNPSTATE @ 0x140035700 (SET_PDO_SWPNPSTATE.c)
 *     UsbhSetPdo_FailIo @ 0x140048260 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhBillboardCleanup @ 0x14005C76C (UsbhBillboardCleanup.c)
 *     WnfPublishUsbPartnerDualRoleFeatures @ 0x140060850 (WnfPublishUsbPartnerDualRoleFeatures.c)
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
