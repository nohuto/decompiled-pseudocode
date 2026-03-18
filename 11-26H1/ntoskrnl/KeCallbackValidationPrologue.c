/*
 * XREFs of KeCallbackValidationPrologue @ 0x1404E921C
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
