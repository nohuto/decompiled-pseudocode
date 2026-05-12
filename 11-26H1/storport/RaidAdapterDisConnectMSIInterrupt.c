/*
 * XREFs of RaidAdapterDisConnectMSIInterrupt @ 0x140183D70
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x140060844 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterDisConnectMSIInterrupt(__int64 a1)
{
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  Parameters.Version = *(_DWORD *)(a1 + 876);
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 4416);
  *(&Parameters.Version + 1) = 0;
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 864) = 0LL;
}
