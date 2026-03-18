/*
 * XREFs of atoi @ 0x140535D60
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x1408A42CC (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x1408A4588 (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140CAF604 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x140535D80 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
