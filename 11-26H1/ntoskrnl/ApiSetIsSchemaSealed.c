/*
 * XREFs of ApiSetIsSchemaSealed @ 0x1406DDE28
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140850A14 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  char result; // al
  char v2; // al

  result = 0;
  if ( *(_DWORD *)a1 == 6 )
  {
    if ( *(_DWORD *)(a1 + 16) > 8u && *(_BYTE *)(a1 + 28) == 7 )
      v2 = *(_BYTE *)(a1 + 30);
    else
      v2 = *(_BYTE *)(a1 + 8);
  }
  else
  {
    if ( *(_BYTE *)a1 != 7 )
      return result;
    v2 = *(_BYTE *)(a1 + 2);
  }
  return v2 & 1;
}
