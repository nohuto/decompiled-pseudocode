/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x140A8F93C
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x140816B9C (SepIsParentOfChildAppContainer.c)
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 *     SepSetTokenCapabilities @ 0x140A44AC4 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x140A8F860 (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x140B095C4 (SepCheckCreateLowBox.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140A2A020 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(char *Sid, char *a2)
{
  ULONG i; // edi
  PULONG v5; // rbx
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  if ( (int)RtlGetAppContainerSidType(Sid, &v7) < 0 || v7 != 2 || (int)RtlGetAppContainerSidType(a2, &v7) < 0 || v7 != 1 )
    return 0;
  for ( i = 1; i < 8; ++i )
  {
    v5 = RtlSubAuthoritySid(Sid, i);
    if ( *v5 != *RtlSubAuthoritySid(a2, i) )
      return 0;
  }
  return 1;
}
