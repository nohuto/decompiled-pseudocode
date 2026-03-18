/*
 * XREFs of NtQueueApcThreadEx2 @ 0x140A80820
 * Callers:
 *     DifNtQueueApcThreadEx2Wrapper @ 0x140686F00 (DifNtQueueApcThreadEx2Wrapper.c)
 *     NtQueueApcThread @ 0x140A80790 (NtQueueApcThread.c)
 *     NtQueueApcThreadEx @ 0x140A807D0 (NtQueueApcThreadEx.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AD90 (KeInsertQueueApc.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeInitializeApc @ 0x140457520 (KeInitializeApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtQueueApcThreadEx2(void *a1, void *a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
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
  NTSTATUS v20; // ebx
  __int16 v21; // ax
  __int64 v22; // rax
  PVOID v23; // rbx
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v10 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a3 & 0xFFFEFFFE) != 0 )
    return -1073741811;
  if ( (a3 & 1) == 0 )
  {
    v12 = 0;
    goto LABEL_4;
  }
  if ( a2 )
    return -1073741811;
  v12 = 1;
LABEL_4:
  Object[0] = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, Object, 0LL);
  if ( result < 0 )
    return result;
  v14 = Object[0];
  if ( (*((_DWORD *)Object[0] + 29) & 0x400) == 0 )
  {
    if ( (Process = KeGetCurrentThread()->ApcState.Process, !Process[1].ReadyTime)
      || (v21 = WORD2(Process[3].PerProcessorCycleTimes), v21 != 332) && v21 != 452
      || (v22 = *((_QWORD *)Object[0] + 68), *(_QWORD *)(v22 + 784)) && *(_WORD *)(v22 + 1772) != 0x8664
      || (unsigned __int64)-(a4 >> 2) > 0xFFFFFFFF )
    {
      if ( a2 )
      {
        Object[0] = 0LL;
        v20 = ObReferenceObjectByHandle(
                a2,
                2u,
                (POBJECT_TYPE)stru_140FC01F0.SchedulerApc.Reserved[0],
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
      KeInitializeApc(Pool2, (__int64)v14, 0, (__int64)v17, (__int64)v18, a4, v10, a5);
      if ( (a3 & 0x10000) != 0 )
        *(_BYTE *)(Pool2 + 1) |= 1u;
      if ( (unsigned __int8)KeInsertQueueApc(Pool2, a6, a7, 0) )
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
