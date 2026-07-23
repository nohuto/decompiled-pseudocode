/*
 * XREFs of KeCallbackValidationPrologue @ 0x1404E22FC
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
 */

char __fastcall KeCallbackValidationPrologue(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  char result; // al

  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)a1 = CurrentThread->WaitBlock[3].SpareLong;
  *(_BYTE *)(a1 + 4) = KeGetCurrentIrql();
  *(_BYTE *)(a1 + 5) = KeAreInterruptsEnabled();
  result = CurrentThread->PreviousMode;
  *(_BYTE *)(a1 + 6) = result;
  return result;
}
