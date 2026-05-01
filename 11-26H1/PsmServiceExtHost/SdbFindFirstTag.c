/*
 * XREFs of SdbFindFirstTag @ 0x1800930BC
 * Callers:
 *     SdbGetDatabaseID @ 0x18008D4A8 (SdbGetDatabaseID.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x18008E058 (SdbpGetDatabaseRuntimePlatform.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18008F700 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpApphelpExeInfo @ 0x1800907CC (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180090B18 (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180090E54 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x180091020 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x180092108 (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180092930 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x1800931D4 (SdbpFindMatchingDWORD.c)
 *     InitOnceGetStringTableOffset @ 0x180093280 (InitOnceGetStringTableOffset.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180094584 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckContainment @ 0x1800948B0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x1800949B0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x180094A80 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094C30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095C10 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x1800962C0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800963F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009665C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchAll @ 0x180096E30 (SdbpMatchAll.c)
 *     SdbpMatchEquality @ 0x180096EE0 (SdbpMatchEquality.c)
 *     SdbpMatchList @ 0x180096F88 (SdbpMatchList.c)
 *     SdbpMatchOne @ 0x180097150 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x18008D5B8 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18008D95C (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, unsigned int a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, a2, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
