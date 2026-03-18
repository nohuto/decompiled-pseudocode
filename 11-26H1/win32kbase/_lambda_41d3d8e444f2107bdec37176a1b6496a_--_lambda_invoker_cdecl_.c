/*
 * XREFs of _lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_ @ 0x140148FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandlePTPEvent@KST@InputTraceLogging@@SAXXZ @ 0x14014900C (-HandlePTPEvent@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140149060 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 */

void __fastcall lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_(void *a1)
{
  InputTraceLogging::KST::HandlePTPEvent();
  CPTPProcessor::ProcessMouseQueue();
}
