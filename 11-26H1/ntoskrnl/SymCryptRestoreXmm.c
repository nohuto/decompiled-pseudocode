/*
 * XREFs of SymCryptRestoreXmm @ 0x1404CF078
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x140555A30 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x140557ED0 (SymCryptParallelSha256Process.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x1405652BC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x14056580C (SymCryptRsaSelftest.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
