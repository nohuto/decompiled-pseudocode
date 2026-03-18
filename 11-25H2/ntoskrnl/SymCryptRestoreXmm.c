/*
 * XREFs of SymCryptRestoreXmm @ 0x140499A34
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x1405187A0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x14051AB08 (SymCryptParallelSha256Process.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526DE4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140526F7C (SymCryptEcDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x140527154 (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140527360 (SymCryptRsaSignVerifyPct.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
