/*
 * XREFs of RtlFirstFreeAce @ 0x1800C9ED0
 * Callers:
 *     RtlAddAccessFilterAce @ 0x18013E170 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013E420 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E5A0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013E930 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013EAE0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r11

  v2 = 0;
  v3 = a1 + 8;
  *a2 = 0LL;
  v4 = a1 + *(unsigned __int16 *)(a1 + 2);
  while ( v2 < *(unsigned __int16 *)(a1 + 4) )
  {
    if ( v3 >= v4 )
      return 0;
    ++v2;
    v3 += *(unsigned __int16 *)(v3 + 2);
  }
  if ( v3 <= v4 )
    *a2 = v3;
  return 1;
}
