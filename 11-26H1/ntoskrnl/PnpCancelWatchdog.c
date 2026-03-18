/*
 * XREFs of PnpCancelWatchdog @ 0x1409DE054
 * Callers:
 *     PnpDisableWatchdog @ 0x1409DDFA8 (PnpDisableWatchdog.c)
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x14049FA50 (PnpWatchdogEtwWrite.c)
 *     PnpWatchdogTimerPause @ 0x1409DE0A8 (PnpWatchdogTimerPause.c)
 *     PnpRecordBlackbox @ 0x1409DE16C (PnpRecordBlackbox.c)
 */

__int64 __fastcall PnpCancelWatchdog(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  PnpWatchdogTimerPause(*(_QWORD *)(a1 + 8), a2);
  result = PnpRecordBlackbox(0LL, *(unsigned int *)(a1 + 16));
  if ( *(_BYTE *)(a1 + 32) )
  {
    result = PnpWatchdogEtwWrite((__int64 *)a1, 1);
    if ( !*(_BYTE *)(a1 + 33) )
      return PnpWatchdogEtwWrite((__int64 *)a1, 3);
  }
  return result;
}
