/*
 * XREFs of SymCryptSha1Append @ 0x180024260
 * Callers:
 *     RtlCreateServiceSid @ 0x180023780 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x1800242C0 (RtlCreateVirtualAccountSid.c)
 *     RtlpA_SHAUpdate @ 0x18013B230 (RtlpA_SHAUpdate.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x180022EFC (SymCryptHashAppendInternal.c)
 */

size_t __fastcall SymCryptSha1Append(unsigned int *a1, char *a2, size_t a3)
{
  return SymCryptHashAppendInternal((__int64)SymCryptSha1Algorithm_default, a1, a2, a3);
}
