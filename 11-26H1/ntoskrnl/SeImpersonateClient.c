/*
 * XREFs of SeImpersonateClient @ 0x1408140D0
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1409286E0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
