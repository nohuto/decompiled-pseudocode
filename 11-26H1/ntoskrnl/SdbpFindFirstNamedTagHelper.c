/*
 * XREFs of SdbpFindFirstNamedTagHelper @ 0x140A9287C
 * Callers:
 *     SdbQueryDataExTagID @ 0x140881ED8 (SdbQueryDataExTagID.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140883F24 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140883FE0 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpSearchDB @ 0x140A92348 (SdbpSearchDB.c)
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     AslStringPatternMatchExW @ 0x1409E7030 (AslStringPatternMatchExW.c)
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x1409E86F4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409E87E4 (SdbGetFirstChild.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
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
