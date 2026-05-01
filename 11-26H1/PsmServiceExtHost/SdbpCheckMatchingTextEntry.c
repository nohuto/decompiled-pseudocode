/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x1800956FC
 * Callers:
 *     SdbpCheckMatchingText @ 0x1800955D0 (SdbpCheckMatchingText.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpInitializeSearchDBContext @ 0x180096C14 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
 *     AslFileNotFound @ 0x180098D08 (AslFileNotFound.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslFileMappingCreate @ 0x18009A09C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009A30C (AslFileMappingDelete.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009A458 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x18009A934 (AslFileMappingGetViewBase.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int *a8,
        int *a9)
{
  unsigned __int64 v10; // rbp
  unsigned int v11; // ebx
  int v12; // r13d
  __int64 v13; // r15
  _BYTE *v14; // rdi
  int *v16; // r14
  int v17; // edx
  int *v18; // r14
  int i; // ebx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ecx
  unsigned int v25; // r8d
  __int64 ViewBase; // rax
  unsigned int v27; // ecx
  unsigned int v28; // r14d
  unsigned int v29; // r12d
  unsigned int v30; // r12d
  __int64 v31; // rbx
  PVOID ProcessHeap; // rcx
  _BYTE *Heap; // rax
  const void *v34; // rdx
  unsigned int v35; // r8d
  unsigned int v36; // r9d
  unsigned int v37; // r11d
  unsigned int v38; // r10d
  unsigned int v39; // edx
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  unsigned int v42; // edx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v46; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v47[9]; // [rsp+40h] [rbp-48h] BYREF
  int v48; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v49; // [rsp+A0h] [rbp+18h]
  unsigned int v51; // [rsp+C0h] [rbp+38h]

  v49 = a3;
  v46 = 0LL;
  v10 = 0LL;
  v47[0] = 0LL;
  v11 = 0;
  v12 = 0;
  v48 = 0;
  v13 = 0LL;
  v14 = 0LL;
  *a8 = 0;
  v16 = a9;
  *a9 = 0;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    if ( !(unsigned int)SdbpInitializeSearchDBContext(a2) )
    {
      AslLogCallPrintf(1LL, "SdbpCheckMatchingTextEntry", 1990LL, "Failed to initialize SEARCHDBCONTEXT");
      v17 = 1;
      goto LABEL_78;
    }
    a3 = v49;
  }
  v18 = *(int **)(a2 + 72);
  for ( i = 0; ; ++i )
  {
    if ( i >= *v18 )
    {
      v25 = 0;
      v17 = 1;
      goto LABEL_75;
    }
    v20 = -1LL;
    do
      ++v20;
    while ( a3[v20] );
    if ( !(unsigned int)SdbpResolveMatchingFile(a1, a2, a3, v20, &v18[12 * i + 2], &v46) )
    {
      AslLogCallPrintf(1LL, "SdbpCheckMatchingTextEntry", 2034LL, "Failed to resolve matching text file");
      v13 = v46;
      goto LABEL_16;
    }
    v13 = v46;
    v21 = AslFileMappingCreate(v47, v46);
    v10 = v47[0];
    v23 = (unsigned int)v21;
    if ( v21 >= 0 )
      v23 = (unsigned int)AslFileMappingEnsureMappedAs(v47[0], v22, 0LL);
    if ( !(unsigned int)AslFileNotFound(v23) )
      break;
    AslFileMappingDelete(v10);
    v10 = 0LL;
    v47[0] = 0LL;
    AslFree(NtCurrentPeb()->ProcessHeap, v13);
    a3 = v49;
    v13 = 0LL;
    v46 = 0LL;
  }
  if ( v24 >= 0 )
  {
    v17 = 1;
    if ( i > 0 )
      *a9 = 1;
    if ( v10 )
    {
      ViewBase = AslFileMappingGetViewBase(v10);
      v27 = a7;
      v28 = v25;
      if ( (unsigned __int64)a7 >= *(_QWORD *)(v10 + 24) )
        v27 = *(_DWORD *)(v10 + 24);
      v47[0] = ViewBase;
      v51 = v27;
      if ( a5 <= v27 )
      {
        v29 = v25;
        LOBYTE(v29) = a6 == 3;
        v30 = v17 + v29;
        while ( 1 )
        {
          if ( v28 >= v27 )
          {
            v17 = 1;
            v14 = 0LL;
            *a8 = v12;
            goto LABEL_76;
          }
          if ( v28 > a5 )
            v28 += v30 - a5;
          v31 = v27 - v28;
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( (unsigned int)v31 > 0x1000 )
            v31 = 4096LL;
          Heap = RtlAllocateHeap(ProcessHeap, 8u, v31 + 2);
          v14 = Heap;
          if ( !Heap )
          {
            AslLogCallPrintf(1LL, "SdbpCheckMatchingTextEntry", 2137LL, "Failed to allocate temp buffer");
            goto LABEL_69;
          }
          v34 = (const void *)(v47[0] + v28);
          if ( (unsigned __int64)v34 < v47[0] )
          {
            AslLogCallPrintf(1LL, "SdbpCheckMatchingTextEntry", 2144LL, "Overflow doing pointer addition");
            goto LABEL_69;
          }
          memcpy_0(Heap, v34, (unsigned int)v31);
          if ( a6 == 1 || a6 == 2 )
          {
            if ( !(_DWORD)v31 || a5 > (unsigned int)v31 )
              goto LABEL_66;
            v40 = 0;
            while ( 2 )
            {
              if ( v40 + a5 > (unsigned int)v31 )
                goto LABEL_66;
              v41 = 0;
              v42 = v40;
              while ( v41 < a5 )
              {
                if ( v42 >= (unsigned int)v31 )
                  goto LABEL_65;
                if ( !v14[v42] && ++v42 >= (unsigned int)v31 )
                  goto LABEL_66;
                if ( v14[v42] != *(_BYTE *)(v41 + a4) )
                  goto LABEL_65;
                ++v41;
                ++v42;
              }
              if ( v41 != a5 )
              {
LABEL_65:
                ++v40;
                continue;
              }
              break;
            }
            v12 = v48;
            if ( &v14[v40] )
              v12 = 1;
            v48 = v12;
          }
          else
          {
            if ( a6 != 3 )
            {
              AslLogCallPrintf(1LL, "SdbpCheckMatchingTextEntry", 2186LL, "Unknown file encoding");
LABEL_69:
              v11 = 0;
              goto LABEL_17;
            }
            v35 = a5 >> 1;
            v36 = (unsigned int)v31 >> 1;
            if ( !((unsigned int)v31 >> 1) || v35 > v36 )
              goto LABEL_66;
            v37 = 0;
            while ( 2 )
            {
              if ( v37 + v35 > v36 )
              {
LABEL_66:
                v12 = v48;
                goto LABEL_67;
              }
              v38 = 0;
              v39 = v37;
              while ( v38 < v35 )
              {
                if ( v39 >= v36 )
                  goto LABEL_49;
                if ( !*(_WORD *)&v14[2 * v39] && ++v39 >= v36 )
                  goto LABEL_66;
                if ( *(_WORD *)&v14[2 * v39] != *(_WORD *)(a4 + 2LL * v38) )
                  goto LABEL_49;
                ++v38;
                ++v39;
              }
              if ( v38 != v35 )
              {
LABEL_49:
                ++v37;
                continue;
              }
              break;
            }
            if ( !&v14[2 * v37] )
              goto LABEL_66;
            v12 = 1;
            v48 = 1;
          }
LABEL_67:
          v28 += v31;
          AslFree(NtCurrentPeb()->ProcessHeap, v14);
          v27 = v51;
        }
      }
    }
LABEL_75:
    *a8 = v25;
LABEL_76:
    v11 = v17;
    goto LABEL_77;
  }
  AslLogCallPrintf(1LL, "SdbpCheckMatchingTextEntry", 2066LL, "Failed to map file [%x]", v24);
LABEL_16:
  v11 = 0;
LABEL_17:
  v17 = 1;
LABEL_77:
  v16 = a9;
LABEL_78:
  if ( v49 )
  {
    v43 = *v49;
    LOWORD(v43) = v43 - 37;
    if ( (unsigned __int16)v43 <= 0x37u )
    {
      v44 = 0x80000000000201LL;
      if ( _bittest64(&v44, v43) )
        *v16 = v17;
    }
  }
  if ( v14 )
    AslFree(NtCurrentPeb()->ProcessHeap, v14);
  if ( v13 )
    AslFree(NtCurrentPeb()->ProcessHeap, v13);
  if ( v10 )
    AslFileMappingDelete(v10);
  return v11;
}
