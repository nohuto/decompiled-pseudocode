/*
 * XREFs of UsbhPdoSuccess @ 0x14005DC10
 * Callers:
 *     UsbhGenDispatch @ 0x140024630 (UsbhGenDispatch.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x14000EA40 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoSuccess(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  int v4; // eax
  unsigned int v5; // edi

  v4 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1346654035, 0);
  BugCheckParameter4->IoStatus.Status = v4;
  v5 = v4;
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  return v5;
}
