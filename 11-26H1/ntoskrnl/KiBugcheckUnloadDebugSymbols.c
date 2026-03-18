/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x1405E797C
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x1406CB54C (ExRebootSystemForRecovery.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404FDB4C (DbgUnLoadImageSymbols.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  if ( !KiHypervisorInitiatedCrashDump )
    return DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  return result;
}
