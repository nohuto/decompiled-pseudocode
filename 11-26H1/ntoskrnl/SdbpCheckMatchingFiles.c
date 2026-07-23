/*
 * XREFs of SdbpCheckMatchingFiles @ 0x140888DB0
 * Callers:
 *     <none>
 * Callees:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     AslFileNotFound @ 0x14077E56C (AslFileNotFound.c)
 *     SdbpInitializeSearchDBContext @ 0x14088AFA8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x14088B888 (SdbpResolveMatchingFile.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslFileMappingDelete @ 0x1409D772C (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v7; // r15d
  int *v8; // rsi
  unsigned int v9; // r12d
  __int64 v10; // r14
  unsigned int FirstTag; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 (*StringTagPtr)(void); // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int16 *v17; // rdi
  const char *v18; // r9
  int v19; // r8d
  __int64 v20; // rsi
  int v21; // eax
  int v22; // ecx
  __int64 v23; // r13
  int v24; // r15d
  int *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 result; // rax
  int v33; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+38h] [rbp-28h]
  __int64 v35; // [rsp+40h] [rbp-20h] BYREF
  int *v36; // [rsp+48h] [rbp-18h]
  __int128 v37; // [rsp+50h] [rbp-10h] BYREF
  int v40; // [rsp+B0h] [rbp+50h]

  v40 = a3;
  v7 = a2;
  v33 = 0;
  v8 = a1;
  v35 = 0LL;
  v34 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v37 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( !FirstTag )
  {
    v17 = (unsigned __int16 *)v37;
    goto LABEL_37;
  }
  StringTagPtr = (__int64 (*)(void))SdbGetStringTagPtr(a3, FirstTag, v12, v13);
  SdbpUmaInit_PCWSTR(StringTagPtr, (__int64 (**)(void))&v37);
  v17 = (unsigned __int16 *)v37;
  if ( !(_QWORD)v37 )
  {
    if ( *((_QWORD *)&v37 + 1) )
    {
      v18 = "Out of memory";
      v19 = 3556;
    }
    else
    {
      v18 = "Failed to get the string from the database";
      v19 = 3562;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingFiles", v19, (_DWORD)v18);
    goto LABEL_37;
  }
  v20 = a6;
  if ( *(_QWORD *)(a6 + 8) )
  {
    if ( *(_WORD *)v37 == 42 )
    {
      v21 = SdbpCheckAllAttributes((unsigned int)&v33, v7, a3, a5, *(_QWORD *)(a6 + 8));
      if ( AslFileNotFound(v21) || v22 >= 0 )
        v9 = 1;
      else
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          3587,
          (unsigned int)"Failed to check file attributes [%x]");
      goto LABEL_11;
    }
  }
  else if ( *(_WORD *)v37 == 42 )
  {
    v33 = 1;
    goto LABEL_16;
  }
  v23 = -1LL;
  v24 = 0;
  do
    ++v23;
  while ( *(_WORD *)(v37 + 2 * v23) );
  if ( (*(_DWORD *)a6 & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(a6, v15, v16) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingFiles",
      3621,
      (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
    goto LABEL_11;
  }
  v25 = *(int **)(v20 + 72);
  v36 = v25;
  while ( v24 < *v25 )
  {
    if ( !(unsigned int)SdbpResolveMatchingFile(a2, v20, v17, (unsigned int)v23, &v25[12 * v24 + 2], &v35) )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingFiles", 3645, (unsigned int)"Failed to resolve matching file");
      v10 = v35;
      goto LABEL_11;
    }
    v10 = v35;
    a6 = 0LL;
    if ( (int)AslFileMappingCreate((unsigned int)&a6, v35, 0, 0, 0LL) >= 0 )
    {
      v34 = a6;
      if ( (int)SdbpCheckAllAttributes((unsigned int)&v33, a2, v40, a5, a6) >= 0 )
      {
        if ( v24 > 0 )
          *(_DWORD *)(v20 + 80) = 1;
        break;
      }
      AslFileMappingDelete(v34);
      v34 = 0LL;
      AslFree(v27, v10);
    }
    else
    {
      AslFree(v26, v10);
      v34 = a6;
    }
    v25 = v36;
    v10 = 0LL;
    v35 = 0LL;
    ++v24;
  }
  v28 = *v17;
  LOWORD(v28) = v28 - 37;
  if ( (unsigned __int16)v28 <= 0x37u )
  {
    v29 = 0x80000000000201LL;
    if ( _bittest64(&v29, v28) )
      *(_DWORD *)(v20 + 80) = 1;
  }
LABEL_16:
  v9 = 1;
LABEL_11:
  v8 = a1;
LABEL_37:
  AslFileMappingDelete(v34);
  AslFree(v30, v10);
  if ( v17 && v17 != *((unsigned __int16 **)&v37 + 1) )
    AslFree(v31, v17);
  result = v9;
  *v8 = v33;
  return result;
}
