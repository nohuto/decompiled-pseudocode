/*
 * XREFs of RtlFirstFreeAce @ 0x1800C7650
 * Callers:
 *     RtlAddAccessFilterAce @ 0x18013E020 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013E2D0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E450 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013E7E0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013E990 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v2; // eax
  PACL v3; // r9
  ACL *v4; // r11

  v2 = 0;
  v3 = Acl + 1;
  *FirstFree = 0LL;
  v4 = (PACL)((char *)Acl + Acl->AclSize);
  while ( v2 < Acl->AceCount )
  {
    if ( v3 >= v4 )
      return 0;
    ++v2;
    v3 = (PACL)((char *)v3 + v3->AclSize);
  }
  if ( v3 <= v4 )
    *FirstFree = v3;
  return 1;
}
