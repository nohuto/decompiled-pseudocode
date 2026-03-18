/*
 * XREFs of UsbhAutoOvercurrentResetWorker @ 0x14003F880
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002C0D4 (UsbhReferenceListAdd.c)
 *     Usbh__TestPoint__Ulong @ 0x1400367D4 (Usbh__TestPoint__Ulong.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FA80 (UsbhOvercurrentResetWorker.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x14003FFD0 (Usbh_OvercurrentDerefHubBusy.c)
 */

void __fastcall UsbhAutoOvercurrentResetWorker(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 PortData; // rbp
  __int64 v9; // r8
  __int64 v10; // r9

  FdoExt(a1);
  PortData = UsbhGetPortData(a1, (unsigned __int16)a2, v6, v7);
  if ( (int)Usbh__TestPoint__Ulong(a1, 8u, 0, a2) < 0 || (int)UsbhReferenceListAdd(a1, a3, 1466000239) < 0 )
  {
    LOBYTE(v9) = 1;
    Usbh_OvercurrentDerefHubBusy(a1, PortData, v9);
  }
  else
  {
    LOBYTE(v10) = 1;
    UsbhOvercurrentResetWorker(a1, a2, a3, v10);
    UsbhReferenceListRemove(a1, a3);
  }
}
