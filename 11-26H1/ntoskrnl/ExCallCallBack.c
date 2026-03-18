/*
 * XREFs of ExCallCallBack @ 0x140A41008
 * Callers:
 *     ExpWin32DeleteProcedure @ 0x140A408B0 (ExpWin32DeleteProcedure.c)
 *     ExpWin32ParseProcedure @ 0x140A409C0 (ExpWin32ParseProcedure.c)
 *     PsConvertToGuiThread @ 0x140A40AE0 (PsConvertToGuiThread.c)
 *     ExpWin32CloseProcedure @ 0x140A40CA0 (ExpWin32CloseProcedure.c)
 *     ExpWin32OpenProcedure @ 0x140A40DB0 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x140A40ED0 (ExpWin32OkayToCloseProcedure.c)
 *     PfpQueryGpuUtilization @ 0x140A5405C (PfpQueryGpuUtilization.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x140ADE944 (PsRemoveDeepFreezeOptimizations.c)
 *     PsApplyDeepFreezeOptimizations @ 0x140ADE9D0 (PsApplyDeepFreezeOptimizations.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     KeCallbackValidationEpilogue @ 0x1404E07B8 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E921C (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1, signed __int64 a2)
{
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  v4 = ExReferenceCallBackBlock(a1, a2);
  if ( v4 )
  {
    KeCallbackValidationPrologue((__int64)&v7);
    v5 = guard_dispatch_icall_no_overrides(v4[2].Count, a2);
    KeCallbackValidationEpilogue((__int64)&v7, v4[1].Count, 0x103u);
    ExDereferenceCallBackBlock(a1, v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
