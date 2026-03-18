/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x140AFB42C
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     SepIsAppSiloCapability @ 0x1404BD69C (SepIsAppSiloCapability.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
