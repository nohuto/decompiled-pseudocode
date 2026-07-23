/*
 * XREFs of ExCallCallBack @ 0x1409FCA28
 * Callers:
 *     ExpWin32DeleteProcedure @ 0x1409FC2D0 (ExpWin32DeleteProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1409FC3E0 (ExpWin32ParseProcedure.c)
 *     PsConvertToGuiThread @ 0x1409FC500 (PsConvertToGuiThread.c)
 *     ExpWin32CloseProcedure @ 0x1409FC6C0 (ExpWin32CloseProcedure.c)
 *     ExpWin32OpenProcedure @ 0x1409FC7D0 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1409FC8F0 (ExpWin32OkayToCloseProcedure.c)
 *     PfpQueryGpuUtilization @ 0x140A5D34C (PfpQueryGpuUtilization.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x140ADBB34 (PsRemoveDeepFreezeOptimizations.c)
 *     PsApplyDeepFreezeOptimizations @ 0x140ADBBC0 (PsApplyDeepFreezeOptimizations.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
