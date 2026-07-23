/*
 * XREFs of SeQueryTokenTrustSid @ 0x1404B5310
 * Callers:
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
