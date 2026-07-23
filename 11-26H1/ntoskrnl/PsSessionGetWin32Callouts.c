/*
 * XREFs of PsSessionGetWin32Callouts @ 0x140481BAC
 * Callers:
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 *     ExpWin32DeleteProcedure @ 0x1409FC2D0 (ExpWin32DeleteProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1409FC3E0 (ExpWin32ParseProcedure.c)
 *     PsConvertToGuiThread @ 0x1409FC500 (PsConvertToGuiThread.c)
 *     ExpWin32CloseProcedure @ 0x1409FC6C0 (ExpWin32CloseProcedure.c)
 *     ExpWin32OpenProcedure @ 0x1409FC7D0 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1409FC8F0 (ExpWin32OkayToCloseProcedure.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     PfpQueryGpuUtilization @ 0x140A5D34C (PfpQueryGpuUtilization.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x140ADBB34 (PsRemoveDeepFreezeOptimizations.c)
 *     PsApplyDeepFreezeOptimizations @ 0x140ADBBC0 (PsApplyDeepFreezeOptimizations.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *PsSessionGetWin32Callouts()
{
  __int64 v0; // rdx
  _RTL_RUN_ONCE *result; // rax

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
