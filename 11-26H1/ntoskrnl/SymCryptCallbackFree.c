/*
 * XREFs of SymCryptCallbackFree @ 0x1407228C8
 * Callers:
 *     SymCryptRsakeyFree @ 0x14055A380 (SymCryptRsakeyFree.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x14055AC74 (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x14055AD7C (SymCryptEcurveFree.c)
 *     SymCryptEckeyFree @ 0x14055B790 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptIntFree @ 0x14055C24C (SymCryptIntFree.c)
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptMlDsakeyAllocate @ 0x14055E1CC (SymCryptMlDsakeyAllocate.c)
 *     SymCryptMlDsakeyFree @ 0x14055E274 (SymCryptMlDsakeyFree.c)
 *     SymCryptRsaPkcs1Sign @ 0x14055EB54 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x14055ECB0 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptMlDsaSelftest @ 0x140563120 (SymCryptMlDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x1405632FC (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140563510 (SymCryptRsaSignVerifyPct.c)
 *     SymCryptMlDsaPkDecode @ 0x140572D9C (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaPkEncode @ 0x140572FE0 (SymCryptMlDsaPkEncode.c)
 *     SymCryptMlDsaSkDecode @ 0x140573AF4 (SymCryptMlDsaSkDecode.c)
 *     SymCryptMlDsaSkEncode @ 0x140573DD0 (SymCryptMlDsaSkEncode.c)
 *     SymCryptMlDsaTemporariesFree @ 0x140574124 (SymCryptMlDsaTemporariesFree.c)
 *     SymCryptEcDhSecretAgreement @ 0x140574A80 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptFree @ 0x1408A4DBC (MincryptFree.c)
 */

__int64 __fastcall SymCryptCallbackFree(__int64 a1)
{
  return MincryptFree(a1 - *(unsigned int *)(a1 - 4));
}
