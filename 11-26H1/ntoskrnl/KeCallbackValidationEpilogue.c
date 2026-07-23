/*
 * XREFs of KeCallbackValidationEpilogue @ 0x1404D9E98
 * Callers:
 *     ObpCallPreOperationCallbacks @ 0x1408F5C04 (ObpCallPreOperationCallbacks.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 *     ObpCallPostOperationCallbacks @ 0x1409BB9AC (ObpCallPostOperationCallbacks.c)
 *     PsCallImageNotifyRoutines @ 0x1409E6750 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1409E7E7C (PspCallThreadNotifyRoutines.c)
 *     ExCallCallBack @ 0x1409FCA28 (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     PspCallProcessNotifyRoutines @ 0x1409FE474 (PspCallProcessNotifyRoutines.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall KeCallbackValidationEpilogue(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v5; // rdi
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  ULONG_PTR result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  if ( *(_DWORD *)a1 != CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, a2, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, a3);
  v7 = *(unsigned __int8 *)(a1 + 4);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
    KeBugCheckEx(0xC8u, a3 | ((v7 | ((unsigned __int64)KeGetCurrentIrql() << 8)) << 8), a2, 0LL, 0LL);
  v8 = KeAreInterruptsEnabled();
  if ( *(_BYTE *)(a1 + 5) != v8 )
    KeBugCheckEx(0x20Au, a2, v8, v5, 0LL);
  result = CurrentThread->PreviousMode;
  if ( *(_BYTE *)(a1 + 6) != (_BYTE)result )
    KeBugCheckEx(0x1F9u, a2, result, v5, 0LL);
  return result;
}
