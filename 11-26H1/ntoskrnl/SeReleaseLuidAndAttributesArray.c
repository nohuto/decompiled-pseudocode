/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x140A43238
 * Callers:
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     NtAdjustPrivilegesToken @ 0x140A42610 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x140A42F40 (NtPrivilegeCheck.c)
 *     NtCreateTokenEx @ 0x140A44080 (NtCreateTokenEx.c)
 *     NtFilterToken @ 0x140A45140 (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x140A46440 (NtAdjustGroupsToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
