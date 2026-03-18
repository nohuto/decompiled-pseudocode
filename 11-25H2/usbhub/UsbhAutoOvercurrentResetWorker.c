/*
 * XREFs of UsbhAutoOvercurrentResetWorker @ 0x14003FD90
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh__TestPoint__Ulong @ 0x14001A6C4 (Usbh__TestPoint__Ulong.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002EFD0 (UsbhReferenceListAdd.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FF90 (UsbhOvercurrentResetWorker.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1400404F0 (Usbh_OvercurrentDerefHubBusy.c)
 */

void __fastcall UsbhAutoOvercurrentResetWorker(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 PortData; // rbp
  __int64 v7; // r8
  __int64 v8; // r9

  FdoExt(a1);
  PortData = UsbhGetPortData(a1, a2);
  if ( (int)Usbh__TestPoint__Ulong(a1, 8u, 0, a2) < 0 || (int)UsbhReferenceListAdd(a1, a3, 1466000239) < 0 )
  {
    LOBYTE(v7) = 1;
    Usbh_OvercurrentDerefHubBusy(a1, PortData, v7);
  }
  else
  {
    LOBYTE(v8) = 1;
    UsbhOvercurrentResetWorker(a1, a2, a3, v8);
    UsbhReferenceListRemove(a1, a3);
  }
}
