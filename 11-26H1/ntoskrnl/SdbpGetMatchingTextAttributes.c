/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x14088A7F0
 * Callers:
 *     SdbpCheckMatchingText @ 0x1408897A0 (SdbpCheckMatchingText.c)
 * Callees:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     SdbReadBinaryTag @ 0x1409D78C8 (SdbReadBinaryTag.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  int v7; // r13d
  unsigned int v8; // r12d
  __int64 v10; // rdi
  unsigned int v11; // ebp
  unsigned int FirstTag; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int128 v16; // kr00_16
  __int64 (*StringTagPtr)(void); // rax
  unsigned int v18; // eax
  unsigned int v19; // r15d
  const char *v20; // r9
  int v21; // r8d
  unsigned int TagDataSize; // eax
  __int64 v23; // rcx
  unsigned int v24; // ebp
  const char *v25; // r9
  int v26; // r8d
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r9
  int DWORDTag; // r15d
  unsigned int v31; // eax
  __int64 v32; // r9
  __int64 (*v34[10])(void); // [rsp+28h] [rbp-50h] BYREF

  *a3 = 0LL;
  v7 = 0x2000;
  *a4 = 0LL;
  *a5 = 0;
  v8 = a2;
  v10 = 0LL;
  v11 = 0;
  *(_OWORD *)v34 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1850,
      (unsigned int)"Failed to get MATCHING_TEXT file path");
    v16 = *(_OWORD *)v34;
    goto LABEL_28;
  }
  StringTagPtr = (__int64 (*)(void))SdbGetStringTagPtr(a1, FirstTag, v13, v14);
  SdbpUmaInit_PCWSTR(StringTagPtr, v34);
  v16 = *(_OWORD *)v34;
  if ( !v34[0] )
  {
    if ( v34[1] )
    {
      AslLogCallPrintf(
        LODWORD(v34[0]) + 1,
        (unsigned int)"SdbpGetMatchingTextAttributes",
        1856,
        (unsigned int)"Out of memory");
      return v11;
    }
    goto LABEL_26;
  }
  if ( !*(_WORD *)v34[0] )
  {
LABEL_26:
    v20 = "Failed to read MATCHING_TEXT file path";
    v21 = 1862;
    goto LABEL_27;
  }
  v18 = SdbFindFirstTag(a1, v8, 36883LL);
  v19 = v18;
  if ( !v18 )
  {
    v20 = "Failed to read text to match";
    v21 = 1871;
LABEL_27:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v21, (_DWORD)v20);
    goto LABEL_28;
  }
  TagDataSize = SdbGetTagDataSize(a1, v18);
  v24 = TagDataSize;
  if ( TagDataSize )
  {
    if ( TagDataSize == 0x20000000 )
    {
      v25 = "Failed to get text size to match blob";
      v26 = 1881;
    }
    else
    {
      v27 = AslAlloc(v23, TagDataSize + 2LL);
      v10 = v27;
      if ( v27 )
      {
        if ( (unsigned int)SdbReadBinaryTag(a1, v19, v27, v24) )
        {
          v28 = SdbFindFirstTag(a1, v8, 16467LL);
          if ( v28 )
          {
            DWORDTag = SdbReadDWORDTag(a1, v28, 0LL, v29);
            if ( DWORDTag )
            {
              v31 = SdbFindFirstTag(a1, v8, 16385LL);
              if ( v31 )
                v7 = SdbReadDWORDTag(a1, v31, 0x2000LL, v32);
              *a3 = *((_QWORD *)&v16 + 1);
              *a4 = v10;
              v10 = 0LL;
              *a5 = v24;
              v11 = 1;
              *a6 = DWORDTag;
              *a7 = v7;
              goto LABEL_28;
            }
            v25 = "Failed to read encoding type";
            v26 = 1907;
          }
          else
          {
            v25 = "Failed to read text encoding";
            v26 = 1901;
          }
        }
        else
        {
          v25 = "Failed to read matching text blob";
          v26 = 1892;
        }
      }
      else
      {
        v25 = "Failed to allocate memory for text blob";
        v26 = 1887;
      }
    }
  }
  else
  {
    v25 = "Failed to get text to match blob";
    v26 = 1877;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v26, (_DWORD)v25);
  v11 = 0;
LABEL_28:
  if ( (_QWORD)v16 && (_QWORD)v16 != *((_QWORD *)&v16 + 1) )
    AslFree(v15, v16);
  if ( v10 )
    AslFree(v15, v10);
  return v11;
}
