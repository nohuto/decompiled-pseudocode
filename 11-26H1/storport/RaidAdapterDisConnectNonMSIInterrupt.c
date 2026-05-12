/*
 * XREFs of RaidAdapterDisConnectNonMSIInterrupt @ 0x140184FA8
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x140060844 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterDisConnectNonMSIInterrupt(__int64 a1)
{
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  Parameters.Version = *(_DWORD *)(a1 + 876);
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 864);
  *(&Parameters.Version + 1) = 0;
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 864) = 0LL;
}
