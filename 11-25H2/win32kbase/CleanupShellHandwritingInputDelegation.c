/*
 * XREFs of CleanupShellHandwritingInputDelegation @ 0x140141590
 * Callers:
 *     <none>
 * Callees:
 *     ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401415A8 (-ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall CleanupShellHandwritingInputDelegation(DelegationAPI *a1, struct tagTHREADINFO *a2)
{
  DelegationAPI::ScrubShellHandwritingDelegateThread(a1, a2);
}
