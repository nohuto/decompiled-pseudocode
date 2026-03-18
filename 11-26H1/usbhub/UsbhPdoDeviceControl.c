/*
 * XREFs of UsbhPdoDeviceControl @ 0x14005D200
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhIncPdoIoCount @ 0x14000EA40 (UsbhIncPdoIoCount.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     KsPropertyHandleDrmSetContentId @ 0x140078B18 (KsPropertyHandleDrmSetContentId.c)
 */

__int64 __fastcall UsbhPdoDeviceControl(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  int LowPart; // esi
  unsigned int v5; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  int Status; // esi

  LowPart = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1145655107, LowPart);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = v5;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v5;
  }
  else
  {
    v7 = PdoExt(BugCheckParameter3);
    v8 = v7;
    if ( LowPart == 2952208 )
    {
      Status = -1073741637;
      Log(*((_QWORD *)v7 + 148), 256, 1885957938, (__int64)BugCheckParameter4, 0LL);
    }
    else if ( LowPart == 3080195 )
    {
      Status = KsPropertyHandleDrmSetContentId(BugCheckParameter4);
      Log(*((_QWORD *)v8 + 148), 256, 1885957937, (__int64)BugCheckParameter4, Status);
    }
    else
    {
      Log(*((_QWORD *)v7 + 148), 256, 1885957939, (__int64)BugCheckParameter4, BugCheckParameter4->IoStatus.Status);
      Status = BugCheckParameter4->IoStatus.Status;
    }
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return (unsigned int)Status;
  }
}
