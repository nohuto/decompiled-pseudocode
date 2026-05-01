/*
 * XREFs of SdbGetNextChild @ 0x18008D95C
 * Callers:
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180093130 (SdbFindNextTag.c)
 *     SdbpMatchList @ 0x180096F88 (SdbpMatchList.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x18008F22C (SdbpGetNextTagId.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int NextTagId; // edi
  unsigned int v8; // ebx

  if ( a2 )
  {
    if ( (SdbGetTagFromTagID() & 0xF000) != 0x7000 )
    {
      AslLogCallPrintf(1LL, "SdbGetNextChild", 2964LL, "Trying to operate on non-list, non-root tag");
      return 0LL;
    }
    NextTagId = SdbpGetNextTagId(a1, a2);
    if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
      && NextTagId > *(_DWORD *)(a1 + 20) )
    {
      AslLogCallPrintf(
        2LL,
        "SdbGetNextChild",
        2978LL,
        "SdbpGetNextTagId returned value larger than the SDB (for tiParent=0x%X; tiPrev=0x%X; pdb->dwSize=0x%X)",
        a2,
        a3,
        *(_DWORD *)(a1 + 20));
      return 0LL;
    }
  }
  else
  {
    NextTagId = *(_DWORD *)(a1 + 20);
  }
  v8 = SdbpGetNextTagId(a1, a3);
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v8 >= NextTagId || v8 <= a3 )
      return 0;
  }
  else
  {
    v8 &= -(v8 < NextTagId);
  }
  return v8;
}
