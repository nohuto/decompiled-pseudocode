/*
 * XREFs of ?EvtPollDriver@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x14006E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PollDriver@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x14006E6F0 (-PollDriver@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 */

void __fastcall NdisPoll::EvtPollDriver(NdisPoll *a1, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  NdisPoll::PollDriver(a1, a2);
}
