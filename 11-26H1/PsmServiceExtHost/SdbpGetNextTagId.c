/*
 * XREFs of SdbpGetNextTagId @ 0x18008F22C
 * Callers:
 *     SdbGetFirstChild @ 0x18008D5B8 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18008D95C (SdbGetNextChild.c)
 *     SdbpGetNextIndexedRecord @ 0x180092F50 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180093BA8 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, unsigned int a2)
{
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  TagDataSize = SdbGetTagDataSize();
  if ( TagDataSize == 0x20000000 )
  {
    AslLogCallPrintf(1LL, "SdbpGetNextTagId", 2856LL, "Reading from unfinished tag");
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, a2);
  if ( TagHeadSize )
  {
    if ( (*(_BYTE *)(a1 + 2608) & 1) == 0 )
      TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
    return a2 + TagDataSize + TagHeadSize;
  }
  else
  {
    if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
      return *(unsigned int *)(a1 + 20);
    return 0x10000000LL;
  }
}
