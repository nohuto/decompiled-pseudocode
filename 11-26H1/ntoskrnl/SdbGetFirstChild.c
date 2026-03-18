/*
 * XREFs of SdbGetFirstChild @ 0x1409E87E4
 * Callers:
 *     SdbpMatchList @ 0x1408850CC (SdbpMatchList.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A9287C (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B9F54 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetNextTagId @ 0x1409E79BC (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int NextTagId; // esi
  unsigned int v5; // ebx

  v2 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v5 = 12;
    return v5 < NextTagId ? v5 : 0;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v2);
    if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
      || NextTagId <= *(_DWORD *)(a1 + 20) )
    {
      v5 = v2 + 6;
      return v5 < NextTagId ? v5 : 0;
    }
    AslLogCallPrintf(
      2,
      (unsigned int)"SdbGetFirstChild",
      2923,
      (unsigned int)"SdbpGetNextTagId returned value larger than the SDB (for tiParent=0x%X; pdb->dwSize=0x%X)");
  }
  return 0LL;
}
