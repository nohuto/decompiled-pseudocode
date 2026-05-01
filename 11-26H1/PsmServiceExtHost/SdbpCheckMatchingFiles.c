/*
 * XREFs of SdbpCheckMatchingFiles @ 0x180094C30
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpCheckAllAttributes @ 0x180092108 (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x180096C14 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
 *     AslFileNotFound @ 0x180098D08 (AslFileNotFound.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslFileMappingCreate @ 0x18009A09C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009A30C (AslFileMappingDelete.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // edi
  __int64 v9; // r14
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r12
  __int64 v12; // rsi
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // r13
  int *v16; // rdx
  int v17; // r15d
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  int v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  int *v24; // [rsp+48h] [rbp-8h]

  v6 = 0;
  v21 = 0;
  v23 = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
    goto LABEL_31;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
    AslLogCallPrintf(1LL, "SdbpCheckMatchingFiles", 3562LL, "Failed to get the string from the database");
    goto LABEL_31;
  }
  v12 = a6;
  if ( *StringTagPtr != 42 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( StringTagPtr[v15] );
    if ( (*(_BYTE *)a6 & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(a6) )
    {
      AslLogCallPrintf(1LL, "SdbpCheckMatchingFiles", 3621LL, "Failed to initialize SEARCHDBCONTEXT");
      goto LABEL_31;
    }
    v16 = *(int **)(v12 + 72);
    v17 = 0;
    v24 = v16;
    while ( v17 < *v16 )
    {
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v12, StringTagPtr, (unsigned int)v15, &v16[12 * v17 + 2], &v23) )
      {
        AslLogCallPrintf(1LL, "SdbpCheckMatchingFiles", 3645LL, "Failed to resolve matching file");
        v9 = v23;
        goto LABEL_31;
      }
      v9 = v23;
      a6 = 0LL;
      if ( (int)AslFileMappingCreate(&a6, v23) >= 0 )
      {
        v22 = a6;
        if ( (int)SdbpCheckAllAttributes(&v21, a2, a3, a5, a6) >= 0 )
        {
          if ( v17 > 0 )
            *(_DWORD *)(v12 + 80) = 1;
          break;
        }
        AslFileMappingDelete(v22);
        v22 = 0LL;
        AslFree(NtCurrentPeb()->ProcessHeap, v9);
      }
      else
      {
        AslFree(NtCurrentPeb()->ProcessHeap, v9);
        v22 = a6;
      }
      v16 = v24;
      v9 = 0LL;
      v23 = 0LL;
      ++v17;
    }
    v18 = (unsigned __int16)*StringTagPtr;
    LOWORD(v18) = v18 - 37;
    if ( (unsigned __int16)v18 <= 0x37u )
    {
      v19 = 0x80000000000201LL;
      if ( _bittest64(&v19, v18) )
        *(_DWORD *)(v12 + 80) = 1;
    }
LABEL_30:
    v6 = 1;
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(a6 + 8) )
  {
    v21 = 1;
    goto LABEL_30;
  }
  v13 = SdbpCheckAllAttributes(&v21, a2, a3, a5, *(_QWORD *)(a6 + 8));
  if ( (unsigned int)AslFileNotFound(v13) || v14 >= 0 )
    v6 = 1;
  else
    AslLogCallPrintf(1LL, "SdbpCheckMatchingFiles", 3587LL, "Failed to check file attributes [%x]", v14);
LABEL_31:
  AslFileMappingDelete(v22);
  AslFree(NtCurrentPeb()->ProcessHeap, v9);
  *a1 = v21;
  return v6;
}
