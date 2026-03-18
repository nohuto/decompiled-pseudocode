/*
 * XREFs of UsbhPdoPowerWorkerInternal @ 0x140035644
 * Callers:
 *     UsbhPdoPower @ 0x1400355C0 (UsbhPdoPower.c)
 *     UsbhPdoPowerWorker @ 0x14004BD10 (UsbhPdoPowerWorker.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhPdoPower_WaitWake @ 0x1400161E0 (UsbhPdoPower_WaitWake.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoPowerWorkerInternal(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _DWORD *v6; // r10
  char QuadPart; // r9
  int MinorFunction; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int Status; // edi

  if ( PdoExt(BugCheckParameter3)[281] == 6 )
  {
    Status = -1073741130;
    BugCheckParameter4->IoStatus.Status = -1073741130;
LABEL_12:
    IofCompleteRequest(BugCheckParameter4, 0);
    return Status;
  }
  v4 = PdoExt(BugCheckParameter3);
  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  QuadPart = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (_BYTE)MinorFunction )
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
    goto LABEL_12;
  }
  return (unsigned int)funcs_1400356D7[2 * v10](BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
}
