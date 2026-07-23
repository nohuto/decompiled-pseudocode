/*
 * XREFs of SdbGetNextChild @ 0x1409D5104
 * Callers:
 *     SdbpMatchList @ 0x14088B4CC (SdbpMatchList.c)
 *     SdbpFindNextNamedTagHelper @ 0x14088BCD4 (SdbpFindNextNamedTagHelper.c)
 *     SdbFindNextTag @ 0x1409D4254 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A973CC (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B37E4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetNextTagId @ 0x1409D43D4 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int NextTagId; // edi
  unsigned int v7; // ebx

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
    {
      NextTagId = SdbpGetNextTagId(a1, v4);
      if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
        || NextTagId <= *(_DWORD *)(a1 + 20) )
      {
        goto LABEL_5;
      }
      AslLogCallPrintf(
        2,
        (unsigned int)"SdbGetNextChild",
        2978,
        (unsigned int)"SdbpGetNextTagId returned value larger than the SDB (for tiParent=0x%X; tiPrev=0x%X; pdb->dwSize=0x%X)");
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetNextChild",
        2964,
        (unsigned int)"Trying to operate on non-list, non-root tag");
    }
    return 0LL;
  }
  NextTagId = *(_DWORD *)(a1 + 20);
LABEL_5:
  v7 = SdbpGetNextTagId(a1, a3);
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v7 >= NextTagId || v7 <= a3 )
      return 0;
  }
  else
  {
    v7 &= -(v7 < NextTagId);
  }
  return v7;
}
