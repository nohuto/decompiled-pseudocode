/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x180092DD8
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180092BA8 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpBinarySearchFirst @ 0x180092D38 (SdbpBinarySearchFirst.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbpGetMappedTagData @ 0x1800939AC (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  const char *v8; // r9
  __int64 v9; // r8
  unsigned int TagDataSize; // eax
  unsigned int v12; // ebp
  __int64 MappedTagData; // rax
  unsigned int v14; // ebx
  __int64 v15; // r14
  int v16; // r10d
  int *v17; // r9
  int v18; // eax
  int v19; // r8d
  int v20; // r11d
  int v21; // ecx

  v6 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 )
  {
    v8 = "The tag 0x%lx is not an index tag";
    v9 = 730LL;
LABEL_3:
    AslLogCallPrintf(1LL, "SdbpGetFirstIndexedRecord", v9, v8, v6);
    return 0LL;
  }
  TagDataSize = SdbGetTagDataSize(a1, v6);
  if ( TagDataSize == 0x20000000 )
  {
    v8 = "The tag 0x%lx has an invalid size";
    v9 = 737LL;
    goto LABEL_3;
  }
  v12 = TagDataSize / 0xC;
  MappedTagData = SdbpGetMappedTagData(a1, v6);
  v14 = 0;
  v15 = MappedTagData;
  if ( !MappedTagData )
  {
    v8 = "Failed to get the pointer to index data, index tagid 0x%lx";
    v9 = 746LL;
    goto LABEL_3;
  }
  v16 = 1;
  v17 = (int *)(a4 + 16);
  if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
  {
    v16 = SdbpBinarySearchFirst(MappedTagData, v12, a3, v17);
    goto LABEL_23;
  }
  *v17 = -1;
  v18 = -1;
  v19 = 0;
  v20 = v12 - 1;
  while ( v20 >= v19 )
  {
    v18 = (v20 + v19) / 2;
    if ( v18 < 0 || v18 >= v12 )
      goto LABEL_19;
    if ( a3 <= *(_QWORD *)(v15 + 12LL * v18) )
    {
      v20 = v18 - 1;
      if ( a3 < *(_QWORD *)(v15 + 12LL * v18) )
        continue;
    }
    v19 = v18 + 1;
  }
  if ( v19 - v20 <= 1 )
  {
LABEL_19:
    v16 = 0;
    goto LABEL_20;
  }
  *v17 = v18;
  if ( v18 >= v12 - 1 )
  {
LABEL_20:
    v21 = 0;
    goto LABEL_21;
  }
  v21 = *(_DWORD *)(v15 + 12LL * (unsigned int)(v18 + 1) + 8);
LABEL_21:
  *(_DWORD *)(a4 + 8) = v21;
  *(_DWORD *)(a4 + 4) = 0;
LABEL_23:
  if ( v16 )
    return *(unsigned int *)(v15 + 12LL * (unsigned int)*v17 + 8);
  return v14;
}
