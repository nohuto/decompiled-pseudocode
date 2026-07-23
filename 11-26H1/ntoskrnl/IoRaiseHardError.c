/*
 * XREFs of IoRaiseHardError @ 0x1405CD930
 * Callers:
 *     DifIoRaiseHardErrorWrapper @ 0x140661360 (DifIoRaiseHardErrorWrapper.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     IopGetThreadActiveConsoleId @ 0x140B29378 (IopGetThreadActiveConsoleId.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  PDEVICE_OBJECT v3; // r12
  PVPB v4; // r13
  bool v6; // r15
  PETHREAD Thread; // r14
  int SessionId; // ebx
  char v9; // cl
  __int64 Pool2; // rbx
  bool v11; // r15
  struct _EX_RUNDOWN_REF *p_WaitStatus; // r12
  char *Teb; // rcx
  _KPROCESS *Process; // r13
  char v15; // r14
  char ULongFromUser; // bl
  __int16 v17; // ax
  struct _WORK_QUEUE_ITEM *v19; // rax
  char *v20; // [rsp+50h] [rbp-78h]
  _OWORD v21[3]; // [rsp+68h] [rbp-60h] BYREF

  v3 = RealDeviceObject;
  v4 = Vpb;
  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0
    || (SessionId = PsGetSessionId((__int64)Thread->Process),
        SessionId != (unsigned int)IopGetThreadActiveConsoleId(Thread)) )
  {
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_33;
    goto LABEL_32;
  }
  if ( (Irp->Flags & 0x3FF1FFFF) == 0x43 || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 18 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    v6 = KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
  }
  if ( v9 )
  {
    if ( !v6 )
      goto LABEL_29;
  }
  else if ( !v6 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      KeInitializeApc(
        Pool2,
        (__int64)Thread,
        Irp->ApcEnvironment,
        (__int64)PspUserApcKernelRoutine,
        (__int64)IopAbortRequest,
        (__int64)IopRaiseHardError,
        0,
        (__int64)Irp);
      KeInsertQueueApc(Pool2, (__int64)v4, (__int64)v3, 0);
      return;
    }
    goto LABEL_33;
  }
  if ( (Thread->MiscFlags & 0x400) == 0 )
  {
    v11 = 1;
    p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    {
      memset(v21, 0, sizeof(v21));
      Teb = (char *)Thread->Teb;
      v20 = Teb;
      Process = Thread->Process;
      if ( Process == KeGetCurrentThread()->ApcState.Process )
      {
        v15 = 0;
      }
      else
      {
        v15 = 1;
        KiStackAttachProcess(Process, 0, (__int64)v21);
        Teb = v20;
      }
      ULongFromUser = RtlReadULongFromUser(Teb + 5808);
      if ( Process[1].ReadyTime )
      {
        v17 = WORD2(Process[3].PerProcessorCycleTimes);
        if ( v17 == 332 || v17 == 452 )
          ULongFromUser |= RtlReadULongFromUser(v20 + 12072);
      }
      v11 = (ULongFromUser & 0x10) != 0;
      if ( v15 )
        KiUnstackDetachProcess((__int64)v21, 0);
      ExReleaseRundownProtection_0(p_WaitStatus);
      v4 = Vpb;
    }
    if ( !v11 )
    {
      v3 = RealDeviceObject;
      goto LABEL_29;
    }
LABEL_32:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_33;
  }
LABEL_29:
  v19 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
  if ( v19 )
  {
    v19->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
    v19->Parameter = v19;
    v19->List.Flink = 0LL;
    v19[1].List.Flink = (struct _LIST_ENTRY *)Irp;
    v19[1].List.Blink = (struct _LIST_ENTRY *)v4;
    v19[1].WorkerRoutine = (void (__fastcall *)(void *))v3;
    ExQueueWorkItem(v19, CriticalWorkQueue);
    return;
  }
LABEL_33:
  IofCompleteRequest(Irp, 1);
}
