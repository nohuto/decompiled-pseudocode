/*
 * XREFs of RtlGetAppContainerSidType @ 0x140A2A020
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlGetAppContainerParent @ 0x140804020 (RtlGetAppContainerParent.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x140A293B8 (SepValidateReferencedCachedHandles.c)
 *     RtlIsParentOfChildAppContainer @ 0x140A8F93C (RtlIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140491650 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(char *Sid, _DWORD *a2)
{
  UCHAR v4; // cl

  if ( (unsigned __int8)Sid[1] >= 2u
    && *Sid == 1
    && RtlCompareMemory(Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)Sid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(Sid);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
