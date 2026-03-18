/*
 * XREFs of UsbhPdoPnp_DeviceEnumerated @ 0x14002B9C0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhSetSqmEnumerationData @ 0x14002BA80 (UsbhSetSqmEnumerationData.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     UsbhQueryD3ColdSupport @ 0x14002C200 (UsbhQueryD3ColdSupport.c)
 *     UsbhPublishBillboardDetails @ 0x14005DEEC (UsbhPublishBillboardDetails.c)
 *     UsbhPublishDualRoleFeaturesProperty @ 0x14005E108 (UsbhPublishDualRoleFeaturesProperty.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceEnumerated(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rdi

  v4 = PdoExt((__int64)Pdo);
  UsbhQueryD3ColdSupport(*((PDEVICE_OBJECT *)v4 + 148), Pdo);
  UsbhSetSqmEnumerationData(Pdo);
  UsbhEnableTimerObject(
    *((_QWORD *)v4 + 148),
    (_DWORD)v4 + 1704,
    10000,
    *((unsigned __int16 *)v4 + 714),
    *((_QWORD *)v4 + 105),
    2001096260);
  if ( *((_QWORD *)v4 + 301) )
    UsbhPublishBillboardDetails(Pdo);
  if ( (v4[358] & 0x40000) != 0 )
    UsbhPublishDualRoleFeaturesProperty(Pdo);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
