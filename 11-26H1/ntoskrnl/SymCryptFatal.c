/*
 * XREFs of SymCryptFatal @ 0x1405E7EE8
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14055577C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x140555854 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptInitEnvCommon @ 0x14055883C (SymCryptInitEnvCommon.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x1405652BC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x14056580C (SymCryptRsaSelftest.c)
 *     SymCryptFdefModSetRandomGeneric @ 0x14056F330 (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x140555744 (SymCryptFatalEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall __noreturn SymCryptFatal(ULONG_PTR a1)
{
  SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(a1);
}
