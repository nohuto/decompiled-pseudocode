/*
 * XREFs of PnpWatchdogFirstChanceCallback @ 0x1407A38C0
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x14049FA50 (PnpWatchdogEtwWrite.c)
 *     PnpRecordBlackbox @ 0x1409DE16C (PnpRecordBlackbox.c)
 */

__int64 __fastcall PnpWatchdogFirstChanceCallback(__int64 a1)
{
  __int64 result; // rax

  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 16));
  result = PnpWatchdogEtwWrite((__int64 *)a1, 0);
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
