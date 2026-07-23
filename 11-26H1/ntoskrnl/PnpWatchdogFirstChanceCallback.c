/*
 * XREFs of PnpWatchdogFirstChanceCallback @ 0x1407A6400
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x1404995A0 (PnpWatchdogEtwWrite.c)
 *     PnpRecordBlackbox @ 0x140A1B298 (PnpRecordBlackbox.c)
 */

__int64 __fastcall PnpWatchdogFirstChanceCallback(__int64 a1)
{
  __int64 result; // rax

  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 16));
  result = PnpWatchdogEtwWrite((__int64 *)a1, 0);
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
