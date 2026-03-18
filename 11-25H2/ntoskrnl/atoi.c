/*
 * XREFs of atoi @ 0x1404FB460
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140817D94 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140818268 (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140BFE650 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1404FB480 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
