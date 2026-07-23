/*
 * XREFs of SdbpMergeAreTagValuesEqual @ 0x14088DFAC
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     toupper @ 0x14053A1E0 (toupper.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpMergeAreTagValuesEqual(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v7; // esi
  __int16 TagFromTagID; // bp
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // ax
  int v13; // ecx
  SIZE_T TagDataSize; // rbp
  const void *MappedTagData; // rsi
  const void *v16; // rax
  bool v18; // zf
  __int16 v19; // ax
  _WORD *StringTagPtr; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r14
  int v25; // ebp
  int v26; // ebx

  v4 = 0;
  v5 = a4;
  v7 = a2;
  if ( (_DWORD)a2 && (_DWORD)a4 )
  {
    TagFromTagID = SdbGetTagFromTagID(a1, a2, a3, a4);
    v12 = SdbGetTagFromTagID(a3, v5, v10, v11);
    if ( TagFromTagID != v12 )
      return 0LL;
    v13 = TagFromTagID & 0xF000;
    if ( v13 == 4096 )
    {
      v18 = (v12 & 0xF000) == 4096;
    }
    else if ( v13 == 24576 || v13 == 0x8000 )
    {
      v19 = v12 & 0xF000;
      if ( v19 != (__int16)0x8000 && v19 != 24576 )
        return 0LL;
      StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, v7, 24576LL, 0x8000LL);
      v23 = SdbGetStringTagPtr(a3, v5, v21, v22);
      if ( StringTagPtr && v23 )
      {
        v24 = v23 - (_QWORD)StringTagPtr;
        while ( 1 )
        {
          v25 = *(unsigned __int16 *)((char *)StringTagPtr + v24);
          if ( !*StringTagPtr )
            break;
          v26 = toupper((unsigned __int16)*StringTagPtr);
          if ( v26 != toupper(v25) )
            return 0LL;
          ++StringTagPtr;
        }
        v18 = (_WORD)v25 == 0;
      }
      else
      {
        v18 = StringTagPtr == (_WORD *)v23;
      }
    }
    else
    {
      TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v7);
      if ( TagDataSize != (unsigned int)SdbGetTagDataSize(a3, v5) || TagDataSize == 0x20000000 )
        return 0LL;
      MappedTagData = (const void *)SdbpGetMappedTagData(a1, v7);
      v16 = (const void *)SdbpGetMappedTagData(a3, v5);
      if ( TagDataSize && (!MappedTagData || !v16) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpMergeAreTagValuesEqual",
          896,
          (unsigned int)"SdbpGetMappedTagData returned null data pointer for data with size > 0. Null returned for %s");
        return 0LL;
      }
      v18 = TagDataSize == RtlCompareMemory(MappedTagData, v16, TagDataSize);
    }
  }
  else
  {
    v18 = (_DWORD)a2 == (_DWORD)a4;
  }
  LOBYTE(v4) = v18;
  return v4;
}
