/*
 * XREFs of ?EvaluateException@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1401B3B7C
 * Callers:
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1402A4F2C (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall EvaluateException(struct _EXCEPTION_POINTERS *a1)
{
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 3274;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Exception encountered in pfnRenderGdi: EXCEPTION_POINTERS 0x%I64x",
    (__int64)a1,
    0LL,
    0LL,
    0LL,
    0LL);
  return 1LL;
}
