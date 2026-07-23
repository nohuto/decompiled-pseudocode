/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x1409D6DD4
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     SdbFindFirstStringIndexedTag @ 0x1409D6D00 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpBinarySearchFirst @ 0x140B1B218 (SdbpBinarySearchFirst.c)
 *     SdbpBinarySearchUnique @ 0x140B56874 (SdbpBinarySearchUnique.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  bool IsUserAddress; // r12
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int TagDataSize; // eax
  unsigned int v12; // r15d
  __int64 MappedTagData; // rax
  unsigned int v14; // ebx
  __int64 v15; // rsi
  unsigned int *v16; // rdi
  _DWORD *v17; // r9
  int v18; // r14d
  unsigned int *v19; // rbp
  __int64 v21; // rax
  int ULongFromUser; // eax

  IsUserAddress = MmIsUserAddress(*(_QWORD *)(a1 + 8));
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801
    && (TagDataSize = SdbGetTagDataSize(a1, a2, v9, v10), TagDataSize != 0x20000000)
    && (v12 = TagDataSize / 0xC, MappedTagData = SdbpGetMappedTagData(a1, a2), v14 = 0, (v15 = MappedTagData) != 0) )
  {
    v16 = a4 + 4;
    v17 = a4 + 4;
    if ( (a4[5] & 1) != 0 )
    {
      v18 = SdbpBinarySearchUnique(MappedTagData, v12, a3, v17);
      if ( v18 && (v21 = *v16, (unsigned int)v21 < v12 - 1) )
      {
        if ( IsUserAddress )
          ULongFromUser = RtlReadULongFromUser((unsigned int *)(v15 + 4 * (v21 + 2 * v21 + 5)));
        else
          ULongFromUser = *(_DWORD *)(v15 + 12LL * (unsigned int)(v21 + 1) + 8);
      }
      else
      {
        ULongFromUser = 0;
      }
      a4[2] = ULongFromUser;
      a4[1] = 0;
      v19 = a4 + 4;
    }
    else
    {
      v18 = SdbpBinarySearchFirst(MappedTagData, v12, a3, v17);
      v19 = a4 + 4;
    }
    if ( IsUserAddress )
    {
      if ( v18 )
        return (unsigned int)RtlReadULongFromUser((unsigned int *)(v15 + 4 * (*v16 + 2 * (*v16 + 1LL))));
    }
    else if ( v18 )
    {
      return *(unsigned int *)(v15 + 12LL * *v19 + 8);
    }
    return v14;
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpGetFirstIndexedRecord");
    return 0LL;
  }
}
