/*
 * XREFs of _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x140218D40
 * Callers:
 *     <none>
 * Callees:
 *     ChildProcessRootSynthesizedMouseInput @ 0x140215D10 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?HandleIvEvent@KST@InputTraceLogging@@SAXXZ @ 0x140218DA0 (-HandleIvEvent@KST@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  InputTraceLogging::KST::HandleIvEvent();
  ChildProcessRootSynthesizedMouseInput(v2, v1);
}
