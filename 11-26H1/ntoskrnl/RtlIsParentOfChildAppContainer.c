/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1409E4888
 * Callers:
 *     SepCheckCreateAppContainer @ 0x14081B0F4 (SepCheckCreateAppContainer.c)
 *     SepIsParentOfChildAppContainer @ 0x14081CDAC (SepIsParentOfChildAppContainer.c)
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1409E47AC (SepSetTokenPackage.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140A3D0C0 (RtlGetAppContainerSidType.c)
 */

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  ULONG i; // edi
  PULONG v5; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ParentAppContainerSidType
    || RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return 0;
  }
  for ( i = 1; i < 8; ++i )
  {
    v5 = RtlSubAuthoritySid(ParentAppContainerSid, i);
    if ( *v5 != *RtlSubAuthoritySid(ChildAppContainerSid, i) )
      return 0;
  }
  return 1;
}
