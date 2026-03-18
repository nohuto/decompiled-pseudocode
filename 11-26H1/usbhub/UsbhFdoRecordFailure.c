/*
 * XREFs of UsbhFdoRecordFailure @ 0x140040444
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     memmove @ 0x140061CC0 (memmove.c)
 */

__int64 __fastcall UsbhFdoRecordFailure(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // r14
  int *SecurityContext; // rdi
  int v8; // r11d
  unsigned int v9; // ebx
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  size_t v12; // r15
  void *Pool2; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 PortData; // rax

  FdoExt(a1);
  v6 = PdoExt(a2);
  SecurityContext = (int *)a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  Log(a1, 8, 1717854513, *((_QWORD *)v6 + 106), (__int64)SecurityContext);
  v9 = 0;
  if ( *((_QWORD *)v6 + 106) )
    goto LABEL_2;
  if ( !SecurityContext )
  {
    Log(a1, v8, 1717854514, 0LL, 0LL);
LABEL_2:
    v9 = -1073741811;
    goto LABEL_14;
  }
  Log(a1, v8, 1717854515, 0LL, (unsigned int)*SecurityContext);
  v11 = 4096;
  if ( v10 > 0x1000 || (v11 = v10, v10 >= 0x14) )
  {
    v12 = v11;
    Pool2 = (void *)ExAllocatePool2(64LL, v11, 1112885333LL);
    *((_QWORD *)v6 + 106) = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, SecurityContext, v12);
      if ( SecurityContext[3] == 7 )
      {
        PortData = UsbhGetPortData(a1, *((unsigned __int16 *)v6 + 714), v14, v15);
        if ( PortData )
        {
          _InterlockedExchange((volatile __int32 *)(PortData + 428), 7);
          UsbhException(
            a1,
            *((_WORD *)v6 + 714),
            131,
            0LL,
            0,
            SecurityContext[1],
            SecurityContext[2],
            usbfile_dioctl_c,
            1349,
            0);
        }
      }
      UsbhException(
        a1,
        *((_WORD *)v6 + 714),
        130,
        0LL,
        0,
        SecurityContext[1],
        SecurityContext[2],
        usbfile_dioctl_c,
        1357,
        0);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741789;
  }
LABEL_14:
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v9;
}
