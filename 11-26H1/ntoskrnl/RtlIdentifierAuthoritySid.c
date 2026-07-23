/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x140AFD33C
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     SepIsAppSiloCapability @ 0x1404B6E7C (SepIsAppSiloCapability.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
