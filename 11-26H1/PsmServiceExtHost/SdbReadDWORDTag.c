/*
 * XREFs of SdbReadDWORDTag @ 0x180093760
 * Callers:
 *     SdbpGetDatabaseRuntimePlatform @ 0x18008E058 (SdbpGetDatabaseRuntimePlatform.c)
 *     SdbpApphelpExeInfo @ 0x1800907CC (SdbpApphelpExeInfo.c)
 *     SdbpReadApphelpDisplayResources @ 0x180091020 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x180092108 (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180092930 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x1800931D4 (SdbpFindMatchingDWORD.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180094584 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckContainment @ 0x1800948B0 (SdbpCheckContainment.c)
 *     SdbpCheckOSKind @ 0x180096120 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x1800961A0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800963F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009665C (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180093D4C (SdbpReadTagData.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned __int16 TagFromTagID; // ax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v8 = SdbpReadTagData(a1, v4, &v10, 4LL);
    v9 = v10;
    if ( !v8 )
      return a3;
    return v9;
  }
  else
  {
    TagFromTagID = SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL, "SdbReadDWORDTag", 179LL, "TagID 0x%X, Tag 0x%X not of the expected type", v4, TagFromTagID);
    return a3;
  }
}
