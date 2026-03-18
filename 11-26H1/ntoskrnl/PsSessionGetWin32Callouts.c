/*
 * XREFs of PsSessionGetWin32Callouts @ 0x14048806C
 * Callers:
 *     ExpWin32DeleteProcedure @ 0x140A408B0 (ExpWin32DeleteProcedure.c)
 *     ExpWin32ParseProcedure @ 0x140A409C0 (ExpWin32ParseProcedure.c)
 *     PsConvertToGuiThread @ 0x140A40AE0 (PsConvertToGuiThread.c)
 *     ExpWin32CloseProcedure @ 0x140A40CA0 (ExpWin32CloseProcedure.c)
 *     ExpWin32OpenProcedure @ 0x140A40DB0 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x140A40ED0 (ExpWin32OkayToCloseProcedure.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     PfpQueryGpuUtilization @ 0x140A5405C (PfpQueryGpuUtilization.c)
 *     KeUserModeCallback @ 0x140A59280 (KeUserModeCallback.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x140ADE944 (PsRemoveDeepFreezeOptimizations.c)
 *     PsApplyDeepFreezeOptimizations @ 0x140ADE9D0 (PsApplyDeepFreezeOptimizations.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *PsSessionGetWin32Callouts()
{
  __int64 v0; // rdx
  union _RTL_RUN_ONCE *result; // rax

  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return &PsWin32CallBack;
  v0 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].CycleTime + 120);
  if ( !v0 )
    return &PsWin32NullCallBack;
  result = &PsWin32CallBack;
  if ( v0 == 1 )
    return &PsWin32NullCallBack;
  return result;
}
