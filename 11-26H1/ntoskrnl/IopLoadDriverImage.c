/*
 * XREFs of IopLoadDriverImage @ 0x14052C948
 * Callers:
 *     NtLoadDriver @ 0x140B3DA10 (NtLoadDriver.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     IopLoadUnloadDriver @ 0x140A39590 (IopLoadUnloadDriver.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriverImage(_OWORD *a1)
{
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // dl
  int ULongFromUser; // eax
  unsigned __int16 v7; // di
  volatile void *ULong64FromUser; // rax
  struct _KTHREAD *v9; // rax
  struct _LIST_ENTRY *Blink; // rbx
  void *Src[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v12; // [rsp+50h] [rbp-68h]
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+60h] [rbp-58h] BYREF
  _BYTE Object[4]; // [rsp+80h] [rbp-38h] BYREF
  int v15; // [rsp+84h] [rbp-34h]
  _QWORD v16[4]; // [rsp+88h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp-10h]

  *(_OWORD *)Src = 0LL;
  Pool2 = 0LL;
  memset_0(&WorkItem, 0, 0x50uLL);
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 0LL;
    DWORD1(v12) = 0;
    ULongFromUser = RtlReadULongFromUser(a1);
    v7 = ULongFromUser;
    LODWORD(v12) = ULongFromUser;
    ULong64FromUser = (volatile void *)RtlReadULong64FromUser((char *)a1 + 8);
    *((_QWORD *)&v12 + 1) = ULong64FromUser;
    *(_OWORD *)Src = v12;
    if ( !v7 )
      return 3221225485LL;
    ProbeForRead(ULong64FromUser, v7, 2u);
    Pool2 = (void *)ExAllocatePool2(0x121uLL);
    RtlCopyFromUser(Pool2, Src[1], LOWORD(Src[0]));
    Src[1] = Pool2;
  }
  else
  {
    *(_OWORD *)Src = *a1;
  }
  Object[2] = 6;
  v15 = 0;
  v16[1] = v16;
  v16[0] = v16;
  v16[2] = 0LL;
  v16[3] = Src;
  if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
  {
    v9 = KeGetCurrentThread();
    Blink = v9[1].WaitBlock[3].WaitListEntry.Blink;
    v9[1].WaitBlock[3].WaitListEntry.Blink = 0LL;
    IopLoadUnloadDriver(&WorkItem);
    KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
  }
  else
  {
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    WorkItem.Parameter = &WorkItem;
    WorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(Object, UserRequest, 0, 0, 0LL);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v17;
}
