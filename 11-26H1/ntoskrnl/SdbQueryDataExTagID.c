/*
 * XREFs of SdbQueryDataExTagID @ 0x1408882D8
 * Callers:
 *     SdbQueryDataEx @ 0x140888228 (SdbQueryDataEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140484B50 (RtlStringCchCopyNW.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SdbReadQWORDTag @ 0x14088BF50 (SdbReadQWORDTag.c)
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A973CC (SdbpFindFirstNamedTagHelper.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned int *v7; // r13
  const wchar_t *v8; // rbx
  __int64 *StringTagPtr; // r14
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // rax
  size_t v15; // rsi
  __int64 v16; // rax
  wchar_t *Str1; // rdi
  wchar_t *v18; // rax
  void *v19; // rcx
  size_t v20; // rdi
  __int64 v21; // r11
  unsigned int FirstNamedTagHelper; // eax
  int DWORDTag; // edi
  unsigned int FirstTag; // eax
  __int64 v25; // r9
  unsigned int TagDataSize; // esi
  __int64 v27; // r8
  unsigned int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // r9
  const char *v31; // r9
  int v32; // r8d
  wchar_t *pszDest; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  int v36; // [rsp+90h] [rbp+18h] BYREF
  int v37; // [rsp+94h] [rbp+1Ch]
  _DWORD *v38; // [rsp+98h] [rbp+20h]

  v38 = a4;
  v37 = HIDWORD(a3);
  v7 = a6;
  v8 = L"Policy";
  StringTagPtr = 0LL;
  v36 = 0;
  QWORDTag = 0LL;
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      7353,
      (unsigned int)"One of lpBuffer or lpcbBufferSize should not be null");
    return 87;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( aPolicy[v14] );
  v15 = (int)v14 + 1;
  v16 = AslAlloc(a1, 2 * v15);
  pszDest = (wchar_t *)v16;
  if ( !v16 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      7365,
      (unsigned int)"Cannot allocate temporary buffer for parsing the name \"%ws\"");
    return 8;
  }
  Str1 = (wchar_t *)v16;
  while ( 1 )
  {
    v18 = wcschr(v8, 0x5Cu);
    if ( v18 )
    {
      v20 = v18 - v8;
      if ( RtlStringCchCopyNW(pszDest, v15, v8, v20) < 0 )
      {
LABEL_63:
        v12 = 122;
        goto LABEL_64;
      }
      pszDest[v20] = 0;
      v8 = (const wchar_t *)(v21 + 2);
      Str1 = pszDest;
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v15, v8) < 0 )
        goto LABEL_63;
      v8 = 0LL;
    }
    FirstNamedTagHelper = SdbpFindFirstNamedTagHelper(a1, a2, 28687, 24577, Str1, 0);
    a2 = FirstNamedTagHelper;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTagHelper )
      goto LABEL_19;
  }
  if ( !FirstNamedTagHelper )
  {
LABEL_19:
    v12 = 1168;
    goto LABEL_64;
  }
  DWORDTag = 0;
  FirstTag = SdbFindFirstTag(a1, FirstNamedTagHelper, 16408LL);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      7414,
      (unsigned int)"The entry 0x%x does not have valuetype information");
    TagDataSize = 0;
    v12 = 0;
    goto LABEL_57;
  }
  DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0LL, v25);
  TagDataSize = 0;
  switch ( DWORDTag )
  {
    case 0:
      goto LABEL_37;
    case 1:
      v27 = 24606LL;
      break;
    case 3:
      v27 = 36869LL;
      break;
    case 4:
      v27 = 16409LL;
      break;
    case 11:
      v27 = 20487LL;
      break;
    default:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbQueryDataExTagID",
        7451,
        (unsigned int)"The entry 0x%x contains bad valuetype information 0x%x");
      v12 = 1358;
      goto LABEL_64;
  }
  v28 = SdbFindFirstTag(a1, a2, v27);
  if ( !v28 )
  {
    if ( DWORDTag != 1 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbQueryDataExTagID", 7521, (unsigned int)"The entry 0x%x contains no value");
      goto LABEL_19;
    }
    TagDataSize = 2;
    StringTagPtr = (__int64 *)&cchOriginalDestLength;
    goto LABEL_43;
  }
  if ( DWORDTag == 1 )
  {
    StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v28, v29, v30);
    if ( !StringTagPtr )
    {
      v31 = "The entry 0x%x contains bad string value 0x%x";
      v32 = 7473;
      goto LABEL_50;
    }
    do
      ++v13;
    while ( *((_WORD *)StringTagPtr + v13) );
    TagDataSize = 2 * v13 + 2;
    goto LABEL_37;
  }
  if ( DWORDTag == 3 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v28);
    if ( TagDataSize == 0x20000000 )
    {
      v31 = "The entry 0x%x contains badly-sized binary value 0x%x";
      v32 = 7486;
LABEL_50:
      AslLogCallPrintf(1, (unsigned int)"SdbQueryDataExTagID", v32, (_DWORD)v31);
      goto LABEL_19;
    }
    StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v28);
    if ( !StringTagPtr )
    {
      v31 = "The entry 0x%x contains bad binary value 0x%x";
      v32 = 7494;
      goto LABEL_50;
    }
LABEL_37:
    v12 = 0;
    if ( TagDataSize )
      goto LABEL_38;
    goto LABEL_57;
  }
  if ( DWORDTag != 4 )
  {
    QWORDTag = SdbReadQWORDTag(a1, v28, 0LL, v30);
    StringTagPtr = &QWORDTag;
    TagDataSize = 8;
    goto LABEL_37;
  }
  v36 = SdbReadDWORDTag(a1, v28, 0LL, v30);
  StringTagPtr = (__int64 *)&v36;
  TagDataSize = 4;
LABEL_43:
  v12 = 0;
LABEL_38:
  v19 = a5;
  if ( a5 && v7 && *v7 >= TagDataSize )
  {
    memmove(a5, StringTagPtr, *v7);
    goto LABEL_58;
  }
  v12 = 122;
LABEL_57:
  if ( v7 )
LABEL_58:
    *v7 = TagDataSize;
  if ( v38 )
    *v38 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_64:
  AslFree(v19, pszDest);
  return v12;
}
