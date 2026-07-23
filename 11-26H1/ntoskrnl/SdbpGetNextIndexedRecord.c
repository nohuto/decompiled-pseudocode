/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x140B29A58
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     SdbGetDatabaseMatchEx @ 0x1409D745C (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextStringIndexedTag @ 0x140B29928 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindMatchingName @ 0x140B29968 (SdbpFindMatchingName.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SdbpGetNextTagId @ 0x1409D43D4 (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, unsigned int a2, _DWORD *a3)
{
  bool IsUserAddress; // r14
  __int64 MappedTagData; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int NextTagId; // edi
  __int16 TagFromTagID; // si
  __int16 v14; // ax
  unsigned int TagDataSize; // eax
  __int64 v16; // r8
  __int64 ULong64FromUser; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi

  IsUserAddress = MmIsUserAddress(*(_QWORD *)(a1 + 8));
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 || (MappedTagData = SdbpGetMappedTagData(a1, a2)) == 0 )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpGetNextIndexedRecord");
    return 0LL;
  }
  if ( (a3[5] & 1) == 0 )
  {
    TagDataSize = SdbGetTagDataSize(a1, a2, v9, v10);
    if ( TagDataSize != 0x20000000 )
    {
      v16 = (unsigned int)a3[4];
      if ( (_DWORD)v16 != TagDataSize / 0xC - 1 )
      {
        if ( IsUserAddress )
        {
          ULong64FromUser = RtlReadULong64FromUser((volatile void *)(MappedTagData + 12 * v16));
          v18 = RtlReadULong64FromUser((volatile void *)(MappedTagData + 12 * ((unsigned int)a3[4] + 1LL)));
        }
        else
        {
          ULong64FromUser = *(_QWORD *)(MappedTagData + 12 * v16);
          v18 = *(_QWORD *)(MappedTagData + 12LL * (unsigned int)(v16 + 1));
        }
        if ( ULong64FromUser == v18 )
        {
          v19 = MappedTagData + 12LL * (unsigned int)++a3[4];
          if ( IsUserAddress )
            return (unsigned int)RtlReadULongFromUser((unsigned int *)(v19 + 8));
          else
            return *(unsigned int *)(v19 + 8);
        }
      }
    }
    return 0LL;
  }
  v11 = a3[1];
  if ( !v11 )
    v11 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
  NextTagId = SdbpGetNextTagId(a1, v11);
  TagFromTagID = SdbGetTagFromTagID(a1, v11);
  v14 = SdbGetTagFromTagID(a1, NextTagId);
  if ( !v14 || (v14 & 0xF000) != 0x7000 || v14 != TagFromTagID || NextTagId == a3[2] )
    return 0LL;
  a3[1] = NextTagId;
  return NextTagId;
}
