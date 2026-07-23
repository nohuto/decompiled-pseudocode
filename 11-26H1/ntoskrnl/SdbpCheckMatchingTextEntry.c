/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x140889950
 * Callers:
 *     SdbpCheckMatchingText @ 0x1408897A0 (SdbpCheckMatchingText.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     AslFileNotFound @ 0x14077E56C (AslFileNotFound.c)
 *     SdbpInitializeSearchDBContext @ 0x14088AFA8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x14088B888 (SdbpResolveMatchingFile.c)
 *     AslFileMappingEnsureMappedAs @ 0x14088EEB8 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x14088F394 (AslFileMappingGetViewBase.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslFileMappingDelete @ 0x1409D772C (AslFileMappingDelete.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        __int64 a2,
        __int64 (*a3)(void),
        _BYTE *a4,
        unsigned int Size,
        int a6,
        unsigned int a7,
        int *a8,
        int *a9)
{
  __int64 v11; // rbx
  char *v12; // r14
  __int64 v13; // r13
  _BYTE *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  int *v17; // rsi
  int v18; // r8d
  unsigned int v19; // edi
  int *v20; // rsi
  __int64 v21; // rcx
  _BYTE *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int i; // ebx
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 ViewBase; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r15d
  unsigned int v36; // ebx
  int v37; // eax
  __int64 v38; // rsi
  void *v39; // rbx
  char *v40; // rcx
  unsigned int v41; // r9d
  unsigned int v42; // r10d
  unsigned int v43; // r11d
  unsigned int v44; // r8d
  unsigned int v45; // edx
  unsigned int v46; // r9d
  unsigned int v47; // r8d
  unsigned int v48; // edx
  int v49; // edi
  const char *v50; // r9
  int v51; // r8d
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  int v55; // [rsp+30h] [rbp-30h]
  __int64 v56; // [rsp+38h] [rbp-28h] BYREF
  __int64 v57; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v58; // [rsp+48h] [rbp-18h]
  __int128 v59; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v61; // [rsp+D0h] [rbp+70h]

  v55 = 0;
  v11 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v59 = 0LL;
  SdbpUmaInit_PCWSTR(a3, (__int64 (**)(void))&v59);
  *a8 = 0;
  v17 = a9;
  *a9 = 0;
  if ( (*(_DWORD *)a2 & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(a2, v15, v16) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingTextEntry",
      1990,
      (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
    v18 = 1;
    v19 = 0;
    goto LABEL_87;
  }
  v14 = a4;
  v20 = *(int **)(a2 + 72);
  if ( MmIsUserAddress((unsigned __int64)a4) )
  {
    v22 = (_BYTE *)AslAlloc(v21, Size);
    v14 = v22;
    if ( !v22 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", 2002, (unsigned int)"Out of memory");
      v19 = 0;
LABEL_7:
      v18 = 1;
      goto LABEL_85;
    }
    RtlCopyFromUser(v22, a4, Size);
    v11 = v57;
  }
  v23 = v59;
  if ( !(_QWORD)v59 && *((_QWORD *)&v59 + 1) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", 2014, (unsigned int)"Out of memory");
    v19 = 0;
    goto LABEL_93;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *v20 )
    {
      v18 = 1;
LABEL_83:
      *a8 = 0;
      goto LABEL_84;
    }
    v26 = -1LL;
    do
      ++v26;
    while ( *(_WORD *)(v23 + 2 * v26) );
    if ( !(unsigned int)SdbpResolveMatchingFile(a1, a2, v23, v26, &v20[12 * i + 2], &v57) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        2034,
        (unsigned int)"Failed to resolve matching text file");
      v19 = 0;
      goto LABEL_7;
    }
    v27 = AslFileMappingCreate((unsigned int)&v56, v57, 0, 0, 0LL);
    v13 = v56;
    v29 = v27;
    if ( v27 >= 0 )
      v29 = AslFileMappingEnsureMappedAs(v56, v28);
    if ( !AslFileNotFound(v29) )
      break;
    AslFileMappingDelete(v13);
    v13 = 0LL;
    v56 = 0LL;
    AslFree(v31, v57);
    v23 = v59;
    v57 = 0LL;
  }
  v19 = 0;
  if ( v30 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", 2066, (unsigned int)"Failed to map file [%x]");
    goto LABEL_7;
  }
  v17 = a9;
  v18 = 1;
  if ( i > 0 )
    *a9 = 1;
  if ( !v13 )
    goto LABEL_83;
  ViewBase = AslFileMappingGetViewBase(v13);
  v34 = a7;
  v35 = 0;
  v36 = Size;
  v58 = ViewBase;
  if ( a7 >= v33 )
    v34 = (unsigned int)v33;
  v61 = v34;
  if ( Size > (unsigned int)v34 )
  {
    *a8 = 0;
    v19 = v18;
    goto LABEL_86;
  }
  v37 = v18 + (a6 == 3);
  LODWORD(v56) = v37;
  while ( v35 < (unsigned int)v34 )
  {
    if ( v35 > v36 )
      v35 += v37 - v36;
    v38 = (unsigned int)v34 - v35;
    if ( (unsigned int)v38 > 0x1000 )
      v38 = 4096LL;
    v12 = (char *)AslAlloc(v34, v38 + 2);
    if ( !v12 )
    {
      v50 = "Failed to allocate temp buffer";
      v51 = 2137;
      goto LABEL_77;
    }
    v39 = (void *)(v58 + v35);
    if ( (unsigned __int64)v39 < v58 )
    {
      v50 = "Overflow doing pointer addition";
      v51 = 2144;
      goto LABEL_77;
    }
    if ( MmIsUserAddress(v58 + v35) )
      RtlCopyFromUser(v12, v39, (unsigned int)v38);
    else
      memmove(v12, v39, (unsigned int)v38);
    if ( a6 == 1 || a6 == 2 )
    {
      v36 = Size;
      if ( (_DWORD)v38 && Size <= (unsigned int)v38 )
      {
        v46 = 0;
        while ( 2 )
        {
          if ( v46 + Size <= (unsigned int)v38 )
          {
            v47 = 0;
            v48 = v46;
            while ( v47 < Size )
            {
              if ( v48 >= (unsigned int)v38 )
                goto LABEL_71;
              if ( !v12[v48] && ++v48 >= (unsigned int)v38 )
                goto LABEL_75;
              v40 = (char *)v48;
              if ( v12[v48] != v14[v47] )
                goto LABEL_71;
              ++v47;
              ++v48;
            }
            if ( v47 != Size )
            {
LABEL_71:
              ++v46;
              continue;
            }
            v49 = v55;
            if ( &v12[v46] )
              v49 = 1;
            v55 = v49;
          }
          break;
        }
      }
    }
    else
    {
      if ( a6 != 3 )
      {
        v50 = "Unknown file encoding";
        v51 = 2186;
LABEL_77:
        AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", v51, (_DWORD)v50);
        v19 = 0;
        goto LABEL_7;
      }
      v36 = Size;
      v41 = Size >> 1;
      v42 = (unsigned int)v38 >> 1;
      if ( (unsigned int)v38 >> 1 && v41 <= v42 )
      {
        v43 = 0;
        while ( 2 )
        {
          if ( v43 + v41 <= v42 )
          {
            v44 = 0;
            v45 = v43;
            while ( v44 < v41 )
            {
              if ( v45 >= v42 )
                goto LABEL_56;
              if ( !*(_WORD *)&v12[2 * v45] && ++v45 >= v42 )
                goto LABEL_75;
              v40 = (char *)v45;
              if ( *(_WORD *)&v12[2 * v45] != *(_WORD *)&v14[2 * v44] )
                goto LABEL_56;
              ++v44;
              ++v45;
            }
            if ( v44 != v41 )
            {
LABEL_56:
              ++v43;
              continue;
            }
            v40 = &v12[2 * v43];
            if ( v40 )
              v55 = 1;
          }
          break;
        }
      }
    }
LABEL_75:
    v35 += v38;
    AslFree(v40, v12);
    v37 = v56;
    v34 = v61;
  }
  v18 = 1;
  *a8 = v55;
  v12 = 0LL;
LABEL_84:
  v19 = 1;
LABEL_85:
  v17 = a9;
LABEL_86:
  v11 = v57;
LABEL_87:
  v24 = v59;
  if ( (_QWORD)v59 )
  {
    v52 = *(unsigned __int16 *)v59;
    LOWORD(v52) = v52 - 37;
    if ( (unsigned __int16)v52 <= 0x37u )
    {
      v53 = 0x80000000000201LL;
      if ( _bittest64(&v53, v52) )
        *v17 = v18;
    }
    if ( v24 != *((_QWORD *)&v59 + 1) )
      AslFree(v24, v24);
  }
LABEL_93:
  if ( v14 != a4 && v14 )
    AslFree(v24, v14);
  if ( v12 )
    AslFree(v24, v12);
  if ( v11 )
    AslFree(v24, v11);
  if ( v13 )
    AslFileMappingDelete(v13);
  return v19;
}
