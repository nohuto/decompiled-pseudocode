/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x1409E5EDC
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x1408877E4 (SdbMergeIsEntryUpdated.c)
 *     SdbFindFirstStringIndexedTag @ 0x1409E6084 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     SdbpGetMappedTagData @ 0x1409E7A4C (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1409E81F0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbpBinarySearchFirst @ 0x140B18DD0 (SdbpBinarySearchFirst.c)
 *     SdbpBinarySearchUnique @ 0x140B53FD4 (SdbpBinarySearchUnique.c)
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
  const char *v21; // r9
  int v22; // r8d
  __int64 v23; // rax
  int ULongFromUser; // eax

  IsUserAddress = MmIsUserAddress(*(_QWORD *)(a1 + 8));
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2, v9, v10) != 0x9801 )
  {
    v21 = "The tag 0x%lx is not an index tag";
    v22 = 730;
LABEL_11:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetFirstIndexedRecord", v22, (_DWORD)v21);
    return 0LL;
  }
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize == 0x20000000 )
  {
    v21 = "The tag 0x%lx has an invalid size";
    v22 = 737;
    goto LABEL_11;
  }
  v12 = TagDataSize / 0xC;
  MappedTagData = SdbpGetMappedTagData(a1, a2);
  v14 = 0;
  v15 = MappedTagData;
  if ( !MappedTagData )
  {
    v21 = "Failed to get the pointer to index data, index tagid 0x%lx";
    v22 = 746;
    goto LABEL_11;
  }
  v16 = a4 + 4;
  v17 = a4 + 4;
  if ( (a4[5] & 1) != 0 )
  {
    v18 = SdbpBinarySearchUnique(MappedTagData, v12, a3, v17);
    if ( v18 && (v23 = *v16, (unsigned int)v23 < v12 - 1) )
    {
      if ( IsUserAddress )
        ULongFromUser = RtlReadULongFromUser((unsigned int *)(v15 + 4 * (v23 + 2 * v23 + 5)));
      else
        ULongFromUser = *(_DWORD *)(v15 + 12LL * (unsigned int)(v23 + 1) + 8);
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
