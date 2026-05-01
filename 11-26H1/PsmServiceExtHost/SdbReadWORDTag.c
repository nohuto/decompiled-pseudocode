/*
 * XREFs of SdbReadWORDTag @ 0x18009389C
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180092108 (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180092930 (InitOnceScanIndexes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180093D4C (SdbpReadTagData.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int16 TagFromTagID; // ax
  __int64 result; // rax
  bool v6; // zf
  unsigned __int16 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v7 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v6 = (unsigned int)SdbpReadTagData(a1, v2, &v7, 2LL) == 0;
    result = 0LL;
    if ( !v6 )
      return v7;
  }
  else
  {
    TagFromTagID = SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(1LL, "SdbReadWORDTag", 172LL, "TagID 0x%X, Tag 0x%X not of the expected type", v2, TagFromTagID);
    return 0LL;
  }
  return result;
}
