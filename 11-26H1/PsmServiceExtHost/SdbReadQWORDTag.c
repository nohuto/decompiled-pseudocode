/*
 * XREFs of SdbReadQWORDTag @ 0x1800937FC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180092108 (SdbpCheckAllAttributes.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180094584 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009665C (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180093D4C (SdbpReadTagData.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned __int16 TagFromTagID; // ax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v8 = SdbpReadTagData(a1, v4, &v10, 8LL);
    v9 = v10;
    if ( !v8 )
      return a3;
    return v9;
  }
  else
  {
    TagFromTagID = SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL, "SdbReadQWORDTag", 186LL, "TagID 0x%X, Tag 0x%X not of the expected type", v4, TagFromTagID);
    return a3;
  }
}
