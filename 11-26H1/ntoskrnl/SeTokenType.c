/*
 * XREFs of SeTokenType @ 0x140AFCFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

TOKEN_TYPE __stdcall SeTokenType(PACCESS_TOKEN Token)
{
  return *((_DWORD *)Token + 48);
}
