/*
 * XREFs of SeImpersonateClientEx @ 0x1409286E0
 * Callers:
 *     SeImpersonateClient @ 0x1408140D0 (SeImpersonateClient.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     EtwpDelayCreate @ 0x140A16624 (EtwpDelayCreate.c)
 *     NtImpersonateThread @ 0x140AE31F0 (NtImpersonateThread.c)
 * Callees:
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall SeImpersonateClientEx(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  __int64 v3; // rdx

  v3 = 25LL;
  if ( !ClientContext->DirectlyAccessClientToken )
    v3 = 9LL;
  if ( !ServerThread )
    ServerThread = KeGetCurrentThread();
  return PsImpersonateClient(
           ServerThread,
           ClientContext->ClientToken,
           1u,
           *((_BYTE *)&ClientContext->SecurityQos.Length + v3),
           ClientContext->SecurityQos.ImpersonationLevel);
}
