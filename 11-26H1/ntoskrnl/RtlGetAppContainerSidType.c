/*
 * XREFs of RtlGetAppContainerSidType @ 0x140A3D0C0
 * Callers:
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlGetAppContainerParent @ 0x140809AC0 (RtlGetAppContainerParent.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409E4888 (RtlIsParentOfChildAppContainer.c)
 *     SepValidateReferencedCachedHandles @ 0x140A3C458 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14048B1A0 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

NTSTATUS __cdecl RtlGetAppContainerSidType(PSID AppContainerSid, PAPPCONTAINER_SID_TYPE AppContainerSidType)
{
  UCHAR v4; // cl

  if ( *((_BYTE *)AppContainerSid + 1) >= 2u
    && *(_BYTE *)AppContainerSid == 1
    && RtlCompareMemory((char *)AppContainerSid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)AppContainerSid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(AppContainerSid);
    if ( v4 == 8 )
    {
      *AppContainerSidType = ParentAppContainerSidType;
      return 0;
    }
    if ( v4 == 12 )
    {
      *AppContainerSidType = ChildAppContainerSidType;
      return 0;
    }
    *AppContainerSidType = InvalidAppContainerSidType;
  }
  else
  {
    *AppContainerSidType = NotAppContainerSidType;
  }
  return -1073700352;
}
