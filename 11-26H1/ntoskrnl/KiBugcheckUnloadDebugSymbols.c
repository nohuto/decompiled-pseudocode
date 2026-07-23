/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x1405EA2EC
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x1406CF57C (ExRebootSystemForRecovery.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404F708C (DbgUnLoadImageSymbols.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  if ( !KiHypervisorInitiatedCrashDump )
    return DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  return result;
}
