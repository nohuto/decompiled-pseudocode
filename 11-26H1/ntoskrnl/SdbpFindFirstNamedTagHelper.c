/*
 * XREFs of SdbpFindFirstNamedTagHelper @ 0x140A973CC
 * Callers:
 *     SdbQueryDataExTagID @ 0x1408882D8 (SdbQueryDataExTagID.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x14088A324 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x14088A3E0 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpSearchDB @ 0x140A96E98 (SdbpSearchDB.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x1409D5104 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409D51F4 (SdbGetFirstChild.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpFindFirstNamedTagHelper(void *a1, __int64 a2, __int16 a3, __int16 a4, wchar_t *Str1, int a6)
{
  unsigned int v6; // ebx
  unsigned int v9; // ebp
  unsigned int i; // eax
  unsigned int v12; // edi
  unsigned int FirstTag; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 *StringTagPtr; // rax

  v6 = 0;
  v9 = a2;
  for ( i = SdbGetFirstChild((__int64)a1, a2); ; i = SdbGetNextChild((__int64)a1, v9, v12) )
  {
    v12 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID((__int64)a1, i) == a3 )
    {
      FirstTag = SdbFindFirstTag((__int64)a1, v12, a4);
      if ( FirstTag )
      {
        StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr(a1, FirstTag, v14, v15);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(1LL, (__int64)"SdbpFindFirstNamedTagHelper");
          return v6;
        }
        if ( a6 )
        {
          if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, Str1) )
            return v12;
        }
        else if ( !wcsicmp(Str1, StringTagPtr) )
        {
          return v12;
        }
      }
    }
  }
  return v6;
}
