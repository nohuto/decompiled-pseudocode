/*
 * XREFs of SdbFindNextTag @ 0x1409D4254
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     InitOnceScanIndexes @ 0x1409D48C0 (InitOnceScanIndexes.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409D767C (KsepDbCacheReadDeviceInternal.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409D8FD8 (KsepDbGetDriverShimsInternal.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x1409D5104 (SdbGetNextChild.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindNextTag(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v7; // edi
  __int16 TagFromTagID; // r14
  unsigned int NextChild; // eax
  __int64 v10; // r8
  __int64 v11; // r9

  v5 = a3;
  v7 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, (unsigned int)a3, a3, a4);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v5);
      v5 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild, v10, v11) == TagFromTagID )
        return v5;
    }
    return v7;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbFindNextTag", 216, (unsigned int)"Invalid tagid 0x%lx");
    return 0LL;
  }
}
