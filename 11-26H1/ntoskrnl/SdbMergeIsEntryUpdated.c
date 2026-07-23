/*
 * XREFs of SdbMergeIsEntryUpdated @ 0x14088DBE0
 * Callers:
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x14088C2C8 (SdbpIsEntryIdAvailableInOtherDb.c)
 * Callees:
 *     SdbFindParentTagFromAncestors @ 0x14088BC74 (SdbFindParentTagFromAncestors.c)
 *     __SdbpFindTagFromAncestors @ 0x14088BDFC (__SdbpFindTagFromAncestors.c)
 *     SdbMakeIndexKeyFromGUID @ 0x14088DB94 (SdbMakeIndexKeyFromGUID.c)
 *     SdbpMergeAreTagValuesEqual @ 0x14088DFAC (SdbpMergeAreTagValuesEqual.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409D40B8 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbFindNextTag @ 0x1409D4254 (SdbFindNextTag.c)
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadWORDTag @ 0x1409D53C0 (SdbReadWORDTag.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     SdbpGetFirstIndexedRecord @ 0x1409D6DD4 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x140B29A58 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbMergeIsEntryUpdated(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v6; // edi
  int TagFromTagID; // r12d
  __int64 v9; // rdx
  unsigned __int64 i; // rcx
  unsigned __int16 *v11; // rsi
  unsigned __int16 v12; // r15
  unsigned int FirstTag; // r13d
  const char *v14; // r9
  int v15; // r8d
  unsigned int TagFromAncestors; // eax
  unsigned int ParentTagFromAncestors; // eax
  unsigned int v18; // r12d
  unsigned int m; // eax
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int j; // eax
  unsigned int v23; // esi
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r12d
  int v31; // eax
  __int64 IndexKeyFromString; // rax
  unsigned int k; // eax
  unsigned int v34; // eax
  int v35; // [rsp+20h] [rbp-40h]
  __int128 v36; // [rsp+30h] [rbp-30h] BYREF
  __int128 v37; // [rsp+40h] [rbp-20h]
  WCHAR *StringTagPtr; // [rsp+50h] [rbp-10h]
  unsigned int v39; // [rsp+A0h] [rbp+40h]

  StringTagPtr = 0LL;
  v6 = a2;
  v36 = 0LL;
  v37 = 0LL;
  if ( !a1 || !a3 )
    return a3 != 0 ? -1073741585 : -1073741583;
  if ( !(_DWORD)a2 )
    return 3221225712LL;
  if ( !a4 )
    return 3221225714LL;
  *a4 = 0;
  TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2, a3, a4);
  v9 = 0LL;
  for ( i = 0LL; i < 0x168; i += 10LL )
  {
    if ( *(_WORD *)((char *)qword_14003ED90 + i) == (_WORD)TagFromTagID )
    {
      v11 = (unsigned __int16 *)qword_14003ED90 + 5 * v9;
      if ( v11 )
      {
        v12 = v11[1];
        if ( v12 )
        {
          if ( (TagFromTagID & 0xF000) == 0x7000 )
          {
            FirstTag = SdbFindFirstTag(a1, v6, v12);
            if ( FirstTag )
            {
              TagFromAncestors = _SdbpFindTagFromAncestors(a3, 2LL, 28751LL, 30724LL);
              v39 = TagFromAncestors;
              if ( TagFromAncestors )
              {
                for ( j = SdbFindFirstTag(a3, TagFromAncestors, 30723LL); ; j = SdbFindNextTag(a3, v39, v23) )
                {
                  v23 = j;
                  if ( !j )
                    break;
                  v24 = SdbFindFirstTag(a3, j, 14338LL);
                  if ( !v24 )
                    return 3221225816LL;
                  if ( (_WORD)TagFromTagID == (unsigned __int16)SdbReadWORDTag(a3, v24, 0LL) )
                  {
                    v25 = SdbFindFirstTag(a3, v23, 14339LL);
                    if ( !v25 )
                      return 3221225816LL;
                    if ( v12 == (unsigned __int16)SdbReadWORDTag(a3, v25, 0LL) )
                    {
                      WORD6(v36) = v12;
                      v26 = SdbFindFirstTag(a3, v23, 16406LL);
                      DWORD1(v37) = SdbReadDWORDTag(a3, v26, 0LL, v27);
                      v30 = SdbFindFirstTag(a3, v23, 38913LL);
                      if ( !v30 )
                      {
                        AslLogCallPrintf(
                          1,
                          (unsigned int)"SdbMergeIsEntryUpdated",
                          3127,
                          (unsigned int)"Encountered an index without a TAG_INDEX_BITS entry 0x%08X");
                        return 3221225816LL;
                      }
                      LODWORD(v36) = v30;
                      v31 = v12 & 0xF000;
                      if ( v31 == 24576 || v31 == 0x8000 )
                      {
                        StringTagPtr = (WCHAR *)SdbGetStringTagPtr(a1, FirstTag, v28, v29);
                        IndexKeyFromString = SdbMakeIndexKeyFromStringEx(StringTagPtr);
                      }
                      else
                      {
                        if ( v31 != 36864 )
                        {
                          AslLogCallPrintf(
                            1,
                            (unsigned int)"SdbMergeIsEntryUpdated",
                            3154,
                            (unsigned int)"Encountered a merge entry key not a string or guid %x");
                          return 3221225701LL;
                        }
                        if ( (unsigned int)SdbGetTagDataSize(a1, FirstTag) != 16 )
                        {
                          v14 = "Original entry 0x%08X has bad GUID size";
                          v15 = 3135;
                          goto LABEL_16;
                        }
                        StringTagPtr = (WCHAR *)SdbpGetMappedTagData(a1, FirstTag);
                        IndexKeyFromString = SdbMakeIndexKeyFromGUID(StringTagPtr);
                      }
                      *((_QWORD *)&v37 + 1) = IndexKeyFromString;
                      for ( k = SdbpGetFirstIndexedRecord(a3, v30, IndexKeyFromString, &v36, v35);
                            ;
                            k = SdbpGetNextIndexedRecord(a3, (unsigned int)v36, &v36) )
                      {
                        v20 = k;
                        if ( !k )
                          break;
                        v34 = SdbFindFirstTag(a3, k, v12);
                        if ( v34 && (unsigned int)SdbpMergeAreTagValuesEqual(a1, FirstTag, a3, v34) )
                        {
LABEL_48:
                          *a4 = v20;
                          return 0LL;
                        }
                      }
                      return 3221226021LL;
                    }
                    v35 = TagFromTagID;
                    AslLogCallPrintf(
                      1,
                      (unsigned int)"SdbMergeIsEntryUpdated",
                      3116,
                      (unsigned int)"Encountered an index with an unexpected key for tag %x");
                  }
                }
              }
              else
              {
                ParentTagFromAncestors = SdbFindParentTagFromAncestors(a3, (__int64)(v11 + 2));
                v18 = ParentTagFromAncestors;
                if ( ParentTagFromAncestors )
                {
                  for ( m = SdbFindFirstTag(a3, ParentTagFromAncestors, *v11); ; m = SdbFindNextTag(a3, v18, v20) )
                  {
                    v20 = m;
                    if ( !m )
                      break;
                    v21 = SdbFindFirstTag(a3, m, v12);
                    if ( (unsigned int)SdbpMergeAreTagValuesEqual(a1, FirstTag, a3, v21) )
                      goto LABEL_48;
                  }
                }
              }
            }
            else
            {
              v14 = "Original entry 0x%08X missing merge id key";
              v15 = 3082;
LABEL_16:
              AslLogCallPrintf(3, (unsigned int)"SdbMergeIsEntryUpdated", v15, (_DWORD)v14);
            }
          }
        }
      }
      return 3221226021LL;
    }
    ++v9;
  }
  return 3221226021LL;
}
