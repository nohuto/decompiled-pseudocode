/*
 * XREFs of AlpcpInitSystem @ 0x1407C1414
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     ExInitializeNPagedLookasideList @ 0x140498C20 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideListInternal @ 0x140498DA0 (ExInitializePagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AlpcpInitializeMessageLog @ 0x1407C1D14 (AlpcpInitializeMessageLog.c)
 *     ExCreateHandleTable @ 0x140971AEC (ExCreateHandleTable.c)
 *     ObCreateObjectTypeEx @ 0x140A5A0C0 (ObCreateObjectTypeEx.c)
 *     NtQuerySystemInformation @ 0x140B144F0 (NtQuerySystemInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *Pool2; // rax
  int SystemInformation; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int16 Src; // [rsp+50h] [rbp-B0h] BYREF
  char v8; // [rsp+52h] [rbp-AEh]
  int v9; // [rsp+58h] [rbp-A8h]
  __int128 v10; // [rsp+5Ch] [rbp-A4h]
  int v11; // [rsp+6Ch] [rbp-94h]
  __int64 v12; // [rsp+74h] [rbp-8Ch]
  int v13; // [rsp+7Ch] [rbp-84h]
  __int64 (__fastcall *v14)(int, int, int, int, __int64); // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v15)(); // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v16)(); // [rsp+98h] [rbp-68h]
  _BYTE v17[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v18; // [rsp+D8h] [rbp-28h]
  int v19; // [rsp+E8h] [rbp-18h]

  DestinationString = 0LL;
  memset_0(v17, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
  AlpcpDummyEvent = (__int64)Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, NotificationEvent, 1u);
    *(_QWORD *)&AlpcpMessageLogLock.WaitRegister.Flags = 0LL;
    AlpcpMessageLogLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)&AlpcpMessageLogLock.StateSaveArea;
    AlpcpMessageLogLock.StateSaveArea = (_XSAVE_FORMAT *)&AlpcpMessageLogLock.StateSaveArea;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset_0(&Src, 0, 0x78uLL);
    Src = 120;
    v14 = AlpcpOpenPort;
    v12 = 512LL;
    v15 = AlpcpClosePort;
    v13 = 504;
    v16 = AlpcpDeletePort;
    v9 = 128;
    v11 = 2031617;
    v8 = v8 & 0xCB | 0x10;
    v10 = AlpcpPortMapping;
    SystemInformation = ObCreateObjectTypeEx(&DestinationString, &Src, (__int64)&AlpcPortObjectType);
    if ( SystemInformation >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideListInternal(
        (__int64)&AlpcpLookasides,
        (PVOID (__fastcall *)(int, SIZE_T, ULONG))AlpcpAllocateMessageFunction,
        (void (__stdcall *)(PVOID))AlpcpFreeMessageFunction,
        0,
        840,
        1934453825,
        32,
        0);
      ExInitializePagedLookasideListInternal(
        (__int64)&unk_140E26440,
        (PVOID (__fastcall *)(int, SIZE_T, ULONG))AlpcpAllocateBuffer,
        (void (__stdcall *)(PVOID))PspUserApcKernelRoutine,
        0,
        128,
        1229155393,
        32,
        0);
      ExInitializePagedLookasideListInternal((__int64)&stru_140E264C0, 0LL, 0LL, 0, 128, 1632136257, 32, 0);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      SystemInformation = NtQuerySystemInformation(0, v17, 0x40uLL, 0LL);
      if ( SystemInformation >= 0 )
      {
        AlpcpRegionGranularity = v19;
        AlpcpViewGranularity = v18;
      }
      if ( LODWORD(AlpcpMessageLogLock.CycleTime) )
      {
        v3 = 4096LL;
        v4 = 0x8000LL;
      }
      else
      {
        v3 = 0LL;
        v4 = 0LL;
      }
      AlpcpInitializeMessageLog(v3, v4);
      *(_QWORD *)&AlpcpMessageLogLock.SystemCallNumber = 0LL;
      AlpcpMessageLogLock.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)&AlpcpMessageLogLock.TrapFrame;
      AlpcpMessageLogLock.TrapFrame = (_KTRAP_FRAME *)&AlpcpMessageLogLock.TrapFrame;
    }
  }
  else
  {
    SystemInformation = -1073741670;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SystemInformation;
}
