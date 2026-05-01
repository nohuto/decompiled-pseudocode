/*
 * XREFs of SdbGetStringTagPtr @ 0x1800933A4
 * Callers:
 *     SdbpApphelpExeInfo @ 0x1800907CC (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180090B18 (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180090E54 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckAllAttributes @ 0x180092108 (SdbpCheckAllAttributes.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180094584 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckContainment @ 0x1800948B0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x1800949B0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x180094A80 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094C30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095C10 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x1800962C0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800963F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009665C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x180096F88 (SdbpMatchList.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x18009393C (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x1800939AC (SdbpGetMappedTagData.c)
 *     SdbpReadStringRef @ 0x180093C9C (SdbpReadStringRef.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v6; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
  {
    AslLogCallPrintf(1LL, "SdbGetStringTagPtr", 722LL, "Invalid pdb");
    return 0LL;
  }
  v6 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  if ( v6 == (__int16)0x8000 )
    return SdbpGetMappedTagData(a1, v3);
  if ( v6 == 24576 )
  {
    StringRef = SdbpReadStringRef(a1, v3);
    if ( !StringRef )
    {
      AslLogCallPrintf(1LL, "SdbGetStringTagPtr", 742LL, "Error getting StringRef");
      return 0LL;
    }
    return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  return v2;
}
