/*
 * XREFs of _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x14021DC10
 * Callers:
 *     <none>
 * Callees:
 *     ChildProcessRootSynthesizedMouseInput @ 0x14021B1D0 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?HandleIvEvent@KST@InputTraceLogging@@SAXXZ @ 0x14021DC70 (-HandleIvEvent@KST@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_(void *a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d

  InputTraceLogging::KST::HandleIvEvent();
  ChildProcessRootSynthesizedMouseInput(v2, v1, v3);
}
