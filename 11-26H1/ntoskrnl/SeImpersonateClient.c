/*
 * XREFs of SeImpersonateClient @ 0x140819F30
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1409041F0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
