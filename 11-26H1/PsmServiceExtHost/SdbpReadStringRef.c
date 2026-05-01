/*
 * XREFs of SdbpReadStringRef @ 0x180093C9C
 * Callers:
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180093D4C (SdbpReadTagData.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int16 TagFromTagID; // ax
  unsigned int v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v6 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) != 0x6000 )
  {
    TagFromTagID = SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(1LL, "SdbpReadStringRef", 634LL, "TagID 0x%08X, Tag %04X not STRINGREF type", v2, TagFromTagID);
    return 0LL;
  }
  if ( !(unsigned int)SdbpReadTagData(a1, v2, &v6, 4LL) )
  {
    AslLogCallPrintf(1LL, "SdbpReadStringRef", 639LL, "Error reading data");
    return 0LL;
  }
  return v6;
}
