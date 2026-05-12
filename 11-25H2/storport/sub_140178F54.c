/*
 * XREFs of sub_140178F54 @ 0x140178F54
 * Callers:
 *     sub_140045120 @ 0x140045120 (sub_140045120.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140178F54(__int64 a1)
{
  ULONG v1; // eax
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 860);
  *(&Parameters.Version + 1) = 0;
  Parameters.Version = v1;
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 848);
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 848) = 0LL;
}
