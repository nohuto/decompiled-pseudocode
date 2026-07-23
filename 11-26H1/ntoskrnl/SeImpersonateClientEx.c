/*
 * XREFs of SeImpersonateClientEx @ 0x1409041F0
 * Callers:
 *     SeImpersonateClient @ 0x140819F30 (SeImpersonateClient.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 *     EtwpDelayCreate @ 0x140A15A94 (EtwpDelayCreate.c)
 *     NtImpersonateThread @ 0x140AE0D70 (NtImpersonateThread.c)
 * Callees:
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
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
