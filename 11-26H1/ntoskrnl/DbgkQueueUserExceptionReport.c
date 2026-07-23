/*
 * XREFs of DbgkQueueUserExceptionReport @ 0x14078D54C
 * Callers:
 *     SepLogLpacAccessFailure @ 0x1404EFB5C (SepLogLpacAccessFailure.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkQueueUserExceptionReport(PVOID Object, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // r14
  __int64 Pool2; // rdi
  char v9; // al
  struct _KPROCESS *v10; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v4 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !DbgkEnableWerUserReporting )
    return 3221226326LL;
  if ( (*((_DWORD *)Object + 29) & 0x400) != 0
    || (IoThreadToProcess((PETHREAD)Object)[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 )
  {
    return 3221225659LL;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)Object + 360, 0x15u) )
    return 3221227268LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  PsReferenceSiloContext(Object);
  *(_QWORD *)Pool2 = Object;
  *(_QWORD *)(Pool2 + 8) = v3;
  if ( a3 )
  {
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(Pool2 + 120) = *(_OWORD *)(a3 + 96);
    *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a3 + 112);
    *(_OWORD *)(Pool2 + 152) = *(_OWORD *)(a3 + 128);
    *(_QWORD *)(Pool2 + 168) = *(_QWORD *)(a3 + 144);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  *(_BYTE *)(Pool2 + 16) = v9;
  *(_QWORD *)(Pool2 + 200) = Pool2;
  *(_QWORD *)(Pool2 + 192) = DbgkUserReportWorkRoutine;
  *(_QWORD *)(Pool2 + 176) = 0LL;
  v10 = IoThreadToProcess((PETHREAD)Object);
  if ( v10 != KeGetCurrentThread()->ApcState.Process )
  {
    KeStackAttachProcess(v10, &ApcState);
    v4 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = PspSuspendThread(
          Object,
          0LL,
          0LL,
          0LL,
          ApcState.ApcListHead[0].Flink,
          ApcState.ApcListHead[0].Blink,
          ApcState.ApcListHead[1].Flink,
          ApcState.ApcListHead[1].Blink,
          ApcState.Process,
          *(_QWORD *)&ApcState.InProgressFlags);
  if ( v12 < 0 )
  {
    KeLeaveCriticalRegion();
    ExFreePoolWithTag((PVOID)Pool2, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFDFFFFF);
    ObfDereferenceObject(Object);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 176), DelayedWorkQueue);
    KeLeaveCriticalRegion();
  }
  if ( v4 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  return (unsigned int)v12;
}
