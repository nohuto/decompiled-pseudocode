/*
 * XREFs of SymCryptRestoreXmm @ 0x1404D58B4
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x1405535A0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x140555A40 (SymCryptParallelSha256Process.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140562DAC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140562F44 (SymCryptEcDsaSelftest.c)
 *     SymCryptMlDsaSelftest @ 0x140563120 (SymCryptMlDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x1405632FC (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140563510 (SymCryptRsaSignVerifyPct.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
