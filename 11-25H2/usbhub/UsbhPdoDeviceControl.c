/*
 * XREFs of UsbhPdoDeviceControl @ 0x14005CC20
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x140015EF0 (UsbhIncPdoIoCount.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     KsPropertyHandleDrmSetContentId @ 0x140077A30 (KsPropertyHandleDrmSetContentId.c)
 */

__int64 __fastcall UsbhPdoDeviceControl(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  int LowPart; // esi
  int Status; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // rbp

  LowPart = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Status = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1145655107, LowPart);
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    v6 = PdoExt(BugCheckParameter3);
    v7 = v6;
    if ( LowPart == 2952208 )
    {
      Status = -1073741637;
      Log(*((_QWORD *)v6 + 148), 256, 1885957938, (__int64)BugCheckParameter4, 0LL);
    }
    else if ( LowPart == 3080195 )
    {
      Status = KsPropertyHandleDrmSetContentId(BugCheckParameter4);
      Log(*((_QWORD *)v7 + 148), 256, 1885957937, (__int64)BugCheckParameter4, Status);
    }
    else
    {
      Log(*((_QWORD *)v6 + 148), 256, 1885957939, (__int64)BugCheckParameter4, BugCheckParameter4->IoStatus.Status);
      Status = BugCheckParameter4->IoStatus.Status;
    }
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  return (unsigned int)Status;
}
