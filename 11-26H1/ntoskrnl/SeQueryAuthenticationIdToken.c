/*
 * XREFs of SeQueryAuthenticationIdToken @ 0x140A7AA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeQueryAuthenticationIdToken(PACCESS_TOKEN Token, PLUID AuthenticationId)
{
  *AuthenticationId = *(struct _LUID *)((char *)Token + 24);
  return 0;
}
