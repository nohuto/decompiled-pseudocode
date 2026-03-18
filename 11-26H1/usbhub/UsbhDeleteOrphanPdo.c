/*
 * XREFs of UsbhDeleteOrphanPdo @ 0x14003A118
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhRemoveAndDeletePdo @ 0x14000803C (UsbhRemoveAndDeletePdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     SET_PDO_HWPNPSTATE @ 0x140033458 (SET_PDO_HWPNPSTATE.c)
 */

void __fastcall UsbhDeleteOrphanPdo(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  v2 = PdoExt((__int64)DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[281] != 6 )
  {
    SET_PDO_HWPNPSTATE((__int64)DeviceObject, 6, 6);
    KeWaitForSingleObject(v2 + 324, Executive, 0, 0, 0LL);
    v3 = (void *)*((_QWORD *)v2 + 142);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *((_QWORD *)v2 + 142) = 0LL;
    }
    v4 = (void *)*((_QWORD *)v2 + 280);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)v2 + 280) = 0LL;
    }
    v5 = (void *)*((_QWORD *)v2 + 355);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *((_QWORD *)v2 + 355) = 0LL;
    }
    v6 = (void *)*((_QWORD *)v2 + 299);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *((_QWORD *)v2 + 299) = 0LL;
    }
    v7 = (void *)*((_QWORD *)v2 + 300);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *((_QWORD *)v2 + 300) = 0LL;
    }
    v8 = (void *)*((_QWORD *)v2 + 316);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)v2 + 316) = 0LL;
    }
    v9 = (void *)*((_QWORD *)v2 + 106);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *((_QWORD *)v2 + 106) = 0LL;
    }
    if ( (v2[356] & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)DeviceObject, (ULONG_PTR)DeviceObject);
      KeWaitForSingleObject(v2 + 310, Executive, 0, 0, 0LL);
    }
    v2[356] = 16;
    UsbhRemoveAndDeletePdo(DeviceObject);
  }
}
