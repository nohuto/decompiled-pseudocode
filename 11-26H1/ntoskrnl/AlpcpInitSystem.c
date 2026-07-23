/*
 * XREFs of AlpcpInitSystem @ 0x1407C3E88
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ExInitializeNPagedLookasideList @ 0x140492770 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideListInternal @ 0x1404928F0 (ExInitializePagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpInitializeMessageLog @ 0x1407C4D74 (AlpcpInitializeMessageLog.c)
 *     ExCreateHandleTable @ 0x1409BCDDC (ExCreateHandleTable.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 *     NtQuerySystemInformation @ 0x140B168E0 (NtQuerySystemInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *Pool2; // rax
  NTSTATUS v2; // ebx
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
  _BYTE SystemInformation[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v18; // [rsp+D8h] [rbp-28h]
  int v19; // [rsp+E8h] [rbp-18h]

  DestinationString = 0LL;
  memset_0(SystemInformation, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
  AlpcpDummyEvent = (__int64)Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, NotificationEvent, 1u);
    AlpcpMessageLogLock.FirstArgument = 0LL;
    *(_QWORD *)&AlpcpMessageLogLock.SystemCallNumber = (char *)&AlpcpMessageLogLock.116 + 4;
    *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&AlpcpMessageLogLock.116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)((char *)&AlpcpMessageLogLock.116 + 4);
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
    v2 = ObCreateObjectTypeEx(&DestinationString, &Src, (__int64)&AlpcPortObjectType);
    if ( v2 >= 0 )
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
        (__int64)&unk_140E26580,
        (PVOID (__fastcall *)(int, SIZE_T, ULONG))AlpcpAllocateBuffer,
        (void (__stdcall *)(PVOID))PspUserApcKernelRoutine,
        0,
        128,
        1229155393,
        32,
        0);
      ExInitializePagedLookasideListInternal((__int64)&stru_140E26600, 0LL, 0LL, 0, 128, 1632136257, 32, 0);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v2 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v2 >= 0 )
      {
        AlpcpRegionGranularity = v19;
        AlpcpViewGranularity = v18;
      }
      if ( AlpcpMessageLogEnabled )
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
      AlpcpMessageLogLock.KernelStack = 0LL;
      *(_QWORD *)&AlpcpMessageLogLock.WaitRegister.Flags = &AlpcpMessageLogLock.SchedulingGroup;
      AlpcpMessageLogLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)&AlpcpMessageLogLock.SchedulingGroup;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
