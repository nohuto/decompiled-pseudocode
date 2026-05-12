/*
 * XREFs of NvmeAdapterDisConnectNonMSIInterrupt @ 0x1401996B4
 * Callers:
 *     NvmeAdapterDeleteAsyncCallbacks @ 0x1400D47B0 (NvmeAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NvmeAdapterDisConnectNonMSIInterrupt(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 600);
  *(&Parameters.Version + 1) = 0;
  Parameters.Version = *(_DWORD *)(v1 + 12);
  Parameters.ConnectionContext.Generic = *(PVOID *)v1;
  IoDisconnectInterruptEx(&Parameters);
  result = *(_QWORD **)(a1 + 600);
  *result = 0LL;
  return result;
}
