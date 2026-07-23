/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x14026A720
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 * Callees:
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     PsGetBaseIoPriorityThread @ 0x14026C7A0 (PsGetBaseIoPriorityThread.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IopProbeAndLockPages_0 @ 0x1404AD924 (IopProbeAndLockPages_0.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        void *a5,
        int a6,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9)
{
  __int64 v9; // r13
  size_t v10; // rsi
  __int64 Irp; // rax
  int v14; // r9d
  IRP *v15; // rbx
  __int64 v16; // r14
  int v17; // r15d
  struct _IRP *Pool2; // rax
  int BaseIoPriorityThread; // eax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  IRP *result; // rax
  struct _IRP *v23; // rax
  int v24; // eax
  __int64 Mdl; // rax
  int v26; // edx

  v9 = a2;
  v10 = a4;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = IopAllocateIrpExReturn(v9, a2, 0LL);
  v15 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v16 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v16 - 48) = a1;
  v17 = a1 & 3;
  *(_DWORD *)(v16 - 64) = a6;
  *(_DWORD *)(v16 - 56) = v10;
  if ( !v17 )
  {
    if ( !(_DWORD)v10 && !a6 )
    {
      *(_DWORD *)(Irp + 16) = 0;
      *(_QWORD *)(Irp + 112) = 0LL;
      goto LABEL_9;
    }
    Pool2 = (struct _IRP *)ExAllocatePool2(0x48uLL);
    v15->AssociatedIrp.MasterIrp = Pool2;
    if ( Pool2 )
    {
      if ( a3 )
        memmove(Pool2, a3, v10);
      v15->Flags = 48;
      v15->UserBuffer = a5;
      if ( a5 )
        v15->Flags = 112;
      goto LABEL_9;
    }
    goto LABEL_18;
  }
  if ( v17 != 1 && v17 != 2 )
  {
    *(_QWORD *)(Irp + 112) = a5;
    *(_QWORD *)(v16 - 40) = a3;
    goto LABEL_9;
  }
  if ( a3 )
  {
    v23 = (struct _IRP *)ExAllocatePool2(0x4AuLL);
    v15->AssociatedIrp.MasterIrp = v23;
    if ( !v23 )
    {
LABEL_18:
      IoFreeIrp(v15);
      return 0LL;
    }
    memmove(v23, a3, v10);
    v24 = 48;
  }
  else
  {
    v24 = 0;
  }
  v15->Flags = v24;
  if ( a5 )
  {
    Mdl = IopAllocateMdl((_DWORD)a5, a6, 0, v14, 0LL, 0);
    v15->MdlAddress = (PMDL)Mdl;
    if ( !Mdl )
      goto LABEL_16;
    if ( (int)IopProbeAndLockPages_0(Mdl, v26, v17 != 1, v9, *(unsigned __int8 *)(v16 - 72)) < 0 )
    {
      IoFreeMdl(v15->MdlAddress);
LABEL_16:
      if ( a3 )
        ExFreePoolWithTag(v15->AssociatedIrp.MasterIrp, 0);
      goto LABEL_18;
    }
  }
LABEL_9:
  v15->UserIosb = a9;
  v15->UserEvent = a8;
  v15->Tail.Overlay.Thread = KeGetCurrentThread();
  IopQueueThreadIrp(v15);
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v15->Tail.Overlay.Thread, v15->Tail.Overlay.Thread);
  if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v20 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v20 + 1504) )
      BaseIoPriorityThread = 2;
  }
  v21 = ((BaseIoPriorityThread + 1) << 17) | v15->Flags & 0xFFF1FFFF;
  result = v15;
  v15->Flags = v21;
  return result;
}
