/*
 * XREFs of atoi @ 0x1405381E0
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x1408AA6DC (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x1408AA998 (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x140538200 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
