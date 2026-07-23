/*
 * XREFs of RtlFirstFreeAce @ 0x140A50810
 * Callers:
 *     RtlAddAccessFilterAce @ 0x140808BD0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140808EE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408092A4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x14081E3F8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081E61C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x14081E764 (SddlAddScopedPolicyIDAce.c)
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
