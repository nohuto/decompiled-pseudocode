/*
 * XREFs of UsbhPdoPower @ 0x140033830
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoPower_WaitWake @ 0x14000F7A0 (UsbhPdoPower_WaitWake.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     Usbh_HubDeferIrpProcessing @ 0x14004B6D4 (Usbh_HubDeferIrpProcessing.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoPower(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _DWORD *v6; // r10
  char QuadPart; // r8
  int MinorFunction; // r11d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int Status; // ebx
  _DWORD *v13; // rax
  int v14; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v13 = PdoExt(BugCheckParameter3);
    v14 = Usbh_HubDeferIrpProcessing(*((_QWORD *)v13 + 148), BugCheckParameter3, UsbhPdoPowerWorker, BugCheckParameter4);
    Status = v14;
    if ( v14 >= 0 )
      return 259;
    BugCheckParameter4->IoStatus.Status = v14;
    goto LABEL_13;
  }
  if ( PdoExt(BugCheckParameter3)[281] == 6 )
  {
    Status = -1073741130;
    BugCheckParameter4->IoStatus.Status = -1073741130;
LABEL_13:
    IofCompleteRequest(BugCheckParameter4, 0);
    return Status;
  }
  v4 = PdoExt(BugCheckParameter3);
  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  QuadPart = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( (unsigned int)CurrentStackLocation->MinorFunction - 2 <= 1 )
    {
      QuadPart = LOBYTE(CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart) | 0x80;
      if ( CurrentStackLocation->Parameters.Create.Options != 1 )
        QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
    }
  }
  else
  {
    QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v9 = ((unsigned __int8)_InterlockedExchangeAdd(v4 + 227, 1u) + 1) & 0xF;
  *((_BYTE *)v6 + v9 + 912) = MinorFunction;
  *((_BYTE *)v6 + v9 + 928) = QuadPart;
  v6[294] = MinorFunction;
  v10 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v10 >= 4u )
  {
    Status = BugCheckParameter4->IoStatus.Status;
    goto LABEL_13;
  }
  return (unsigned int)funcs_1400338D6[2 * v10](BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
}
