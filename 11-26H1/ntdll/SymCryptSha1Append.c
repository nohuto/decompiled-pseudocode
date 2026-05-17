/*
 * XREFs of SymCryptSha1Append @ 0x180039CF0
 * Callers:
 *     RtlCreateServiceSid @ 0x180039210 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180039D50 (RtlCreateVirtualAccountSid.c)
 *     RtlpA_SHAUpdate @ 0x18013B4C0 (RtlpA_SHAUpdate.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x18003898C (SymCryptHashAppendInternal.c)
 */

size_t __fastcall SymCryptSha1Append(unsigned int *a1, char *a2, size_t a3)
{
  return SymCryptHashAppendInternal((__int64)SymCryptSha1Algorithm_default, a1, a2, a3);
}
