/*
 * XREFs of SdbFindNextTag @ 0x180093130
 * Callers:
 *     InitOnceScanIndexes @ 0x180092930 (InitOnceScanIndexes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetNextChild @ 0x18008D95C (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindNextTag(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  __int16 TagFromTagID; // r14
  unsigned int NextChild; // eax

  v4 = a3;
  v6 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v4);
      v4 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild) == TagFromTagID )
        return v4;
    }
    return v6;
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbFindNextTag", 216LL, "Invalid tagid 0x%lx", v4);
    return 0LL;
  }
}
