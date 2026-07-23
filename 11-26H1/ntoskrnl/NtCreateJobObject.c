/*
 * XREFs of NtCreateJobObject @ 0x140A7F420
 * Callers:
 *     DifNtCreateJobObjectWrapper @ 0x140674F30 (DifNtCreateJobObjectWrapper.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExInitializeFastResource @ 0x14025FFC0 (ExInitializeFastResource.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     EtwTraceJob @ 0x140A07238 (EtwTraceJob.c)
 *     PspLockJobListExclusive @ 0x140A7F7C0 (PspLockJobListExclusive.c)
 *     PspIoRateEntryInitialize @ 0x140A7F830 (PspIoRateEntryInitialize.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     PspUnlockJobListExclusive @ 0x140A80BD0 (PspUnlockJobListExclusive.c)
 */

NTSTATUS __cdecl NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 PreviousMode; // r15
  char v7; // r13
  unsigned int v8; // ebx
  int inserted; // esi
  size_t v10; // r8
  PRKEVENT v11; // rbx
  _QWORD *p_Lock; // rax
  _XSAVE_FORMAT *StateSaveArea; // rcx
  NTSTATUS v14; // r14d
  __int64 Handle; // rax
  PRKEVENT v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-88h]
  int Blink; // [rsp+50h] [rbp-58h]
  PRKEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  void *v21; // [rsp+68h] [rbp-40h] BYREF
  LARGE_INTEGER Interval; // [rsp+70h] [rbp-38h] BYREF

  Event = 0LL;
  v21 = 0LL;
  Blink = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
    RtlWriteULong64ToUser(JobHandle, 0LL);
  else
    *JobHandle = 0LL;
  v7 = PoEnergyEstimationEnabled();
  v8 = v7 != 0 ? 2288 : 1848;
  inserted = ObCreateObjectEx(
               PreviousMode,
               PsJobType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v18,
               v8,
               0,
               v8,
               &Event,
               0LL);
  if ( inserted < 0 )
  {
    v11 = Event;
    goto LABEL_23;
  }
  v10 = v8;
  v11 = Event;
  memset_0(Event, 0, v10);
  v11[54].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v11;
  *(_QWORD *)&v11[2].Header.Lock = (char *)v11 + 40;
  v11[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v11[1].Header.WaitListHead.Blink;
  *(_QWORD *)&v11[54].Header.Lock = (char *)v11 + 1288;
  v11[53].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v11[53].Header.WaitListHead.Blink;
  v11[53].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v11[53];
  *(_QWORD *)&v11[53].Header.Lock = v11 + 53;
  v11[55].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v11[55];
  *(_QWORD *)&v11[55].Header.Lock = v11 + 55;
  KeInitializeEvent(v11, NotificationEvent, 0);
  v11[52].Header.WaitListHead.Blink = 0LL;
  *(_QWORD *)&v11[11].Header.Lock = 2097153LL;
  memset_0(&v11[11].Header.WaitListHead, 0, 0x100uLL);
  v11[30].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)2097153;
  memset_0(&v11[30].Header.WaitListHead.Blink, 0, 0x100uLL);
  v11[63].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v11[63];
  *(_QWORD *)&v11[63].Header.Lock = v11 + 63;
  v11[63].Header.WaitListHead.Blink = 0LL;
  if ( v7 )
    *(_QWORD *)&v11[65].Header.Lock = v11 + 77;
  v11[24].Header.LockNV = -1;
  v11[46].Header.LockNV = 16382;
  *(_QWORD *)&v11[73].Header.Lock = 1LL;
  v11[44].Header.SignalState = 10;
  v11[24].Header.SignalState = 5;
  ExInitializeFastResource((ULONG_PTR)&v11[2].Header.WaitListHead, 1uLL);
  PspLockJobListExclusive(CurrentThread);
  p_Lock = &v11[1].Header.Lock;
  StateSaveArea = KiSystemServiceTraceCallbackLock.StateSaveArea;
  if ( *(struct _KTHREAD **)KiSystemServiceTraceCallbackLock.StateSaveArea != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.KernelStack )
    __fastfail(3u);
  *p_Lock = &KiSystemServiceTraceCallbackLock.KernelStack;
  v11[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)StateSaveArea;
  *(_QWORD *)&StateSaveArea->ControlWord = p_Lock;
  KiSystemServiceTraceCallbackLock.StateSaveArea = (_XSAVE_FORMAT *)&v11[1];
  PspUnlockJobListExclusive(CurrentThread);
  v11[45].Header.SignalState = 5;
  LODWORD(v11[45].Header.WaitListHead.Flink) = 5;
  HIDWORD(v11[45].Header.WaitListHead.Flink) = 8;
  LODWORD(v11[45].Header.WaitListHead.Blink) = 8;
  LODWORD(v11[64].Header.WaitListHead.Blink) |= 0x200000u;
  Blink = (int)v11[64].Header.WaitListHead.Blink;
  while ( 1 )
  {
    v14 = ExUuidCreate((UUID *)&v11[61].Header.WaitListHead);
    if ( v14 != -1073741267 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  inserted = 0;
  if ( v14 != 1073872982 )
    inserted = v14;
  if ( inserted >= 0 )
  {
    Handle = ExCreateHandleEx((unsigned int *)PspSiloMonitorLock.WaitBlock[1].SparePtr, (__int64)v11, 0, 0LL, 0LL);
    if ( Handle )
      v11[61].Header.SignalState = Handle;
    else
      inserted = -1073741670;
  }
  PspIoRateEntryInitialize(&v11[68]);
  v11[70].Header.WaitListHead.Blink = 0LL;
  *(_QWORD *)&v11[71].Header.Lock = 0LL;
  v11[72].Header.WaitListHead.Blink = 0LL;
  v16 = v11;
  if ( inserted < 0 )
    goto LABEL_29;
  PsReferenceSiloContext(v11);
  inserted = ObInsertObjectEx((char *)v11, 0LL, DesiredAccess, 0, 0, 0LL, &v21);
  if ( inserted < 0 )
  {
    v16 = v11;
LABEL_29:
    ObfDereferenceObject(v16);
    v11 = 0LL;
    goto LABEL_23;
  }
  if ( PreviousMode )
    RtlWriteULong64ToUser(JobHandle, (__int64)v21);
  else
    *JobHandle = v21;
LABEL_23:
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob((__int64)v11, Blink, inserted, 0x720u);
  if ( v11 )
    ObfDereferenceObject(v11);
  return inserted;
}
