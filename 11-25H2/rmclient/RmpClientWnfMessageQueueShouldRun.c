/*
 * XREFs of RmpClientWnfMessageQueueShouldRun @ 0x18000A680
 * Callers:
 *     RmpClientWnfMessageQueueWorker @ 0x18000A550 (RmpClientWnfMessageQueueWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpClientWnfMessageQueueShouldRun(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != a1 + 16 || (*(_BYTE *)(a1 + 64) & 2) != 0;
}
