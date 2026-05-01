/*
 * XREFs of SdbGetFirstChild @ 0x18008D5B8
 * Callers:
 *     InitOnceScanIndexes @ 0x180092930 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x180096F88 (SdbpMatchList.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x18008F22C (SdbpGetNextTagId.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, unsigned int a2)
{
  unsigned int NextTagId; // esi
  unsigned int v6; // ebx

  if ( a2 )
  {
    if ( (SdbGetTagFromTagID() & 0xF000) != 0x7000 )
      return 0LL;
    NextTagId = SdbpGetNextTagId(a1, a2);
    if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
      && NextTagId > *(_DWORD *)(a1 + 20) )
    {
      AslLogCallPrintf(
        2LL,
        "SdbGetFirstChild",
        2923LL,
        "SdbpGetNextTagId returned value larger than the SDB (for tiParent=0x%X; pdb->dwSize=0x%X)",
        a2,
        *(_DWORD *)(a1 + 20));
      return 0LL;
    }
    v6 = a2 + 6;
  }
  else
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v6 = 12;
  }
  return v6 < NextTagId ? v6 : 0;
}
