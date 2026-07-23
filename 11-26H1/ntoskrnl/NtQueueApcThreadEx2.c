/*
 * XREFs of NtQueueApcThreadEx2 @ 0x140A86690
 * Callers:
 *     DifNtQueueApcThreadEx2Wrapper @ 0x14068AAE0 (DifNtQueueApcThreadEx2Wrapper.c)
 *     NtQueueApcThread @ 0x140A86600 (NtQueueApcThread.c)
 *     NtQueueApcThreadEx @ 0x140A86640 (NtQueueApcThreadEx.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx2(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        ULONG ApcFlags,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  char v10; // r15
  KPROCESSOR_MODE PreviousMode; // si
  char v12; // r14
  NTSTATUS result; // eax
  PVOID v14; // rbp
  _KPROCESS *Process; // rcx
  __int64 Pool2; // rbx
  void (__fastcall *v17)(void *); // r9
  void (__stdcall *v18)(PVOID); // rsi
  __int64 v19; // rdx
  int v20; // ebx
  __int16 v21; // ax
  __int64 v22; // rax
  PVOID v23; // rbx
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v10 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (ApcFlags & 0xFFFEFFFE) != 0 )
    return -1073741811;
  if ( (ApcFlags & 1) == 0 )
  {
    v12 = 0;
    goto LABEL_4;
  }
  if ( ReserveHandle )
    return -1073741811;
  v12 = 1;
LABEL_4:
  Object[0] = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, Object, 0LL);
  if ( result < 0 )
    return result;
  v14 = Object[0];
  if ( (*((_DWORD *)Object[0] + 29) & 0x400) == 0 )
  {
    if ( (Process = KeGetCurrentThread()->ApcState.Process, !Process[1].ReadyTime)
      || (v21 = WORD2(Process[3].PerProcessorCycleTimes), v21 != 332) && v21 != 452
      || (v22 = *((_QWORD *)Object[0] + 68), *(_QWORD *)(v22 + 784)) && *(_WORD *)(v22 + 1772) != 0x8664
      || (unsigned __int64)-((__int64)ApcRoutine >> 2) > 0xFFFFFFFF )
    {
      if ( ReserveHandle )
      {
        Object[0] = 0LL;
        v20 = ObReferenceObjectByHandle(
                ReserveHandle,
                2u,
                (POBJECT_TYPE)stru_140FC11F0.SchedulerApc.ApcListEntry.Blink,
                PreviousMode,
                Object,
                0LL);
        if ( v20 < 0 )
          goto LABEL_15;
        v23 = Object[0];
        if ( _InterlockedCompareExchange((volatile signed __int32 *)Object[0], 1, 0) )
        {
          ObfDereferenceObject(v23);
          v20 = -1073741584;
          goto LABEL_15;
        }
        Pool2 = (__int64)v23 + 8;
        v17 = (void (__fastcall *)(void *))PspUserApcReserveKernelRoutine;
        v18 = (void (__stdcall *)(PVOID))PspUserApcReserveRundownRoutine;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x41uLL);
        if ( !Pool2 )
        {
          v20 = -1073741801;
          goto LABEL_15;
        }
        v17 = (void (__fastcall *)(void *))KeSpecialUserApcKernelRoutine;
        v10 = v12 ^ 1;
        v18 = ExFreePool;
        if ( !v12 )
          v17 = PspUserApcKernelRoutine;
      }
      KeInitializeApc(
        Pool2,
        (__int64)v14,
        0,
        (__int64)v17,
        (__int64)v18,
        (__int64)ApcRoutine,
        v10,
        (__int64)ApcArgument1);
      if ( (ApcFlags & 0x10000) != 0 )
        *(_BYTE *)(Pool2 + 1) |= 1u;
      if ( (unsigned __int8)KeInsertQueueApc(Pool2, (__int64)ApcArgument2, (__int64)ApcArgument3, 0) )
      {
        v20 = 0;
      }
      else
      {
        guard_dispatch_icall_no_overrides(Pool2, v19);
        v20 = -1073741823;
      }
      goto LABEL_15;
    }
  }
  v20 = -1073741816;
LABEL_15:
  ObfDereferenceObject(v14);
  return v20;
}
