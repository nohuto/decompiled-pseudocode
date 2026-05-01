/*
 * XREFs of SdbpResolveMatchingFile @ 0x1800971F8
 * Callers:
 *     SdbpCheckMatchingDir @ 0x180094A80 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094C30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800956FC (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095C10 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlULongLongMult @ 0x18009455C (RtlULongLongMult.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslPathClean @ 0x18009EA2C (AslPathClean.c)
 *     AslEnvExpandStrings2 @ 0x1800A13C0 (AslEnvExpandStrings2.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A15D0 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A1B10 (AslImageFileToArchitecture.c)
 *     memmove_0 @ 0x1800A28CE (memmove_0.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  __int64 v12; // r15
  int ProcessWowInfo; // eax
  __int16 v14; // ax
  int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  SIZE_T v19; // rsi
  struct _PEB *v20; // rcx
  char *Heap; // rax
  char *v22; // rdi
  int v23; // eax
  const char *v24; // r9
  __int64 v25; // r8
  __int16 v26; // ax
  int v27; // eax
  __int64 v28; // r8
  __int64 v30; // [rsp+20h] [rbp-30h]
  __int64 v31; // [rsp+28h] [rbp-28h]
  __int64 v32[2]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v35; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a6;
  v7 = 0;
  v32[0] = 0LL;
  v35 = -1;
  *a6 = 0LL;
  LOWORD(a6) = -1;
  if ( a4 )
  {
    v12 = a5;
    if ( *a3 == 37 )
    {
      ProcessWowInfo = AslEnvGetProcessWowInfo(&a6, &v35);
      if ( ProcessWowInfo < 0 )
      {
        AslLogCallPrintf(1LL, "SdbpResolveMatchingFile", 830LL, "AslEnvGetProcessWowInfo failed [%x]", ProcessWowInfo);
        return v7;
      }
      v14 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
      if ( v14 == -1 )
        v14 = v35;
      v15 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), (_DWORD)a3, 0, 0, (__int64)v32, (__int16)a6, v14);
      if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741789 )
      {
        LODWORD(v30) = v15;
        AslLogCallPrintf(1LL, "SdbpResolveMatchingFile", 847LL, "AslEnvExpandStrings2 failed [%x]", v30);
        return v7;
      }
      v16 = 2 * v32[0];
    }
    else
    {
      v17 = *(unsigned int *)(a5 + 8);
      v18 = v17 + a4;
      if ( v18 < v17 )
      {
        v28 = 860LL;
        goto LABEL_38;
      }
      v16 = v18 + 1;
      if ( v18 + 1 < v18 )
      {
        v28 = 865LL;
        goto LABEL_38;
      }
    }
    if ( v16 + 20 >= v16 )
    {
      v32[0] = v16 + 20;
      if ( (int)RtlULongLongMult(v16 + 20, 2uLL, v32) < 0 )
      {
        AslLogCallPrintf(1LL, "SdbpResolveMatchingFile", 876LL, "Invalid buffer size");
        return v7;
      }
      v19 = v32[0];
      v20 = NtCurrentPeb();
      if ( v32[0] < 0x208uLL )
        v19 = 520LL;
      Heap = (char *)RtlAllocateHeap(v20->ProcessHeap, 8u, v19);
      v22 = Heap;
      if ( !Heap )
      {
        AslLogCallPrintf(1LL, "SdbpResolveMatchingFile", 884LL, "Out of memory");
        return v7;
      }
      if ( *a3 == 37 )
      {
        v23 = AslEnvGetProcessWowInfo(&a6, &v35);
        if ( v23 < 0 )
        {
          v24 = "AslEnvGetProcessWowInfo failed [%x]";
          v25 = 896LL;
LABEL_32:
          LODWORD(v30) = v23;
          AslLogCallPrintf(1LL, "SdbpResolveMatchingFile", v25, v24, v30);
          goto LABEL_33;
        }
        v26 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
        if ( v26 == -1 )
          v26 = v35;
        v27 = AslEnvExpandStrings2(
                *(_QWORD *)(a2 + 56),
                (_DWORD)a3,
                (_DWORD)v22,
                v19 >> 1,
                (__int64)v32,
                (__int16)a6,
                v26);
        if ( v27 < 0 )
        {
          LODWORD(v31) = v27;
          AslLogCallPrintf(
            1LL,
            "SdbpResolveMatchingFile",
            913LL,
            "AslEnvExpandStrings2 failed to expand strings for %ws [%x]",
            a3,
            v31);
LABEL_33:
          AslFree(NtCurrentPeb()->ProcessHeap, v22);
          return v7;
        }
      }
      else
      {
        memmove_0(Heap, *(const void **)v12, 2LL * *(unsigned int *)(v12 + 8));
        memmove_0(&v22[2 * *(unsigned int *)(v12 + 8)], a3, 2LL * (a4 + 1));
      }
      v23 = AslPathClean(v22, v22);
      if ( v23 >= 0 )
      {
        *v6 = v22;
        return 1;
      }
      v24 = "AslPathClean failed [%x]";
      v25 = 938LL;
      goto LABEL_32;
    }
    v28 = 871LL;
LABEL_38:
    AslLogCallPrintf(1LL, "SdbpResolveMatchingFile", v28, "Invalid path size");
    return v7;
  }
  AslLogCallPrintf(1LL, "SdbpResolveMatchingFile", 801LL, "Invalid match file length");
  return v7;
}
