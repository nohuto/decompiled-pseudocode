/*
 * XREFs of sub_14018CF90 @ 0x14018CF90
 * Callers:
 *     sub_1400CC090 @ 0x1400CC090 (sub_1400CC090.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14018CF90(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 584);
  *(&Parameters.Version + 1) = 0;
  Parameters.Version = *(_DWORD *)(v1 + 12);
  Parameters.ConnectionContext.Generic = *(PVOID *)(v1 + 120);
  IoDisconnectInterruptEx(&Parameters);
  result = *(_QWORD **)(a1 + 584);
  *result = 0LL;
  return result;
}
