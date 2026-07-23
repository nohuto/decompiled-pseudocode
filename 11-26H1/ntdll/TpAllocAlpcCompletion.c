/*
 * XREFs of TpAllocAlpcCompletion @ 0x180107E90
 * Callers:
 *     <none>
 * Callees:
 *     TppAllocAlpcCompletion @ 0x180085234 (TppAllocAlpcCompletion.c)
 */

NTSTATUS __cdecl TpAllocAlpcCompletion(
        PTP_ALPC *AlpcReturn,
        HANDLE AlpcPort,
        PTP_ALPC_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  return TppAllocAlpcCompletion(
           (_PEB_LDR_DATA *)AlpcReturn,
           AlpcPort,
           (__int64)Callback,
           (__int64)Context,
           (__int64)CallbackEnviron,
           0);
}
