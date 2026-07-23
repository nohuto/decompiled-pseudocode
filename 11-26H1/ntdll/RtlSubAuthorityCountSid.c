/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1800DE710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PUCHAR __cdecl RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
