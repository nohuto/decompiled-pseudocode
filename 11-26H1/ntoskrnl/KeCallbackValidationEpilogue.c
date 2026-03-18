/*
 * XREFs of KeCallbackValidationEpilogue @ 0x1404E07B8
 * Callers:
 *     ObpCallPreOperationCallbacks @ 0x1408EF644 (ObpCallPreOperationCallbacks.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpCallPostOperationCallbacks @ 0x14097183C (ObpCallPostOperationCallbacks.c)
 *     PspCallThreadNotifyRoutines @ 0x1409EB6AC (PspCallThreadNotifyRoutines.c)
 *     ExCallCallBack @ 0x140A41008 (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     PspCallProcessNotifyRoutines @ 0x140A43714 (PspCallProcessNotifyRoutines.c)
 *     KeUserModeCallback @ 0x140A59280 (KeUserModeCallback.c)
 *     PsCallImageNotifyRoutines @ 0x140A791A4 (PsCallImageNotifyRoutines.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
