/*
 * XREFs of SdbpGetNextTagId @ 0x1409D43D4
 * Callers:
 *     SdbGetNextChild @ 0x1409D5104 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409D51F4 (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x140B29A58 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B37E4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1409D52D0 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // ecx

  v2 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize == 0x20000000 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextTagId", 2856, (unsigned int)"Reading from unfinished tag");
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v2);
  if ( !TagHeadSize )
  {
    if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
      return 0x10000000LL;
    return *(unsigned int *)(a1 + 20);
  }
  if ( (*(_DWORD *)(a1 + 2608) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v2 + TagDataSize + TagHeadSize;
}
