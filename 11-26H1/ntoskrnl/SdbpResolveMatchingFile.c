/*
 * XREFs of SdbpResolveMatchingFile @ 0x14088B888
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckMatchingDir @ 0x140888B80 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x140888DB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140889950 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     AslImageFileToArchitecture @ 0x140781CAC (AslImageFileToArchitecture.c)
 *     AslPathClean @ 0x14088F3AC (AslPathClean.c)
 *     AslPathToNetworkPathNt @ 0x14088FAD0 (AslPathToNetworkPathNt.c)
 *     AslEnvExpandStrings2 @ 0x1408917B4 (AslEnvExpandStrings2.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     AslEnvGetProcessWowInfo @ 0x140B70F50 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(
        __int64 a1,
        __int64 a2,
        __int64 (*a3)(void),
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // r15
  unsigned int v9; // r13d
  __int64 v10; // rcx
  __int64 (*v11)(void); // r12
  __int64 (*v12)(void); // rdi
  __int64 v13; // r14
  const char *v14; // r9
  int v15; // r8d
  __int16 v16; // ax
  int v17; // ecx
  ULONGLONG v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  ULONGLONG v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  const char *v25; // r9
  int v26; // r8d
  __int16 v27; // ax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // [rsp+28h] [rbp-48h]
  int v33; // [rsp+30h] [rbp-40h]
  __int16 v34; // [rsp+40h] [rbp-30h] BYREF
  ULONGLONG pullResult; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-20h] BYREF
  __int64 (*Src[3])(void); // [rsp+58h] [rbp-18h] BYREF
  __int16 v40; // [rsp+C8h] [rbp+58h] BYREF

  v7 = a4;
  pullResult = 0LL;
  v36 = 0LL;
  *a6 = 0LL;
  v40 = -1;
  v9 = 0;
  v34 = -1;
  *(_OWORD *)Src = 0LL;
  if ( a4 )
  {
    SdbpUmaInit_PCWSTR(a3, Src);
    v12 = Src[0];
    v11 = Src[1];
    if ( !Src[0] && Src[1] )
    {
      AslLogCallPrintf(LODWORD(Src[0]) + 1, (unsigned int)"SdbpResolveMatchingFile", 807, (unsigned int)"Out of memory");
      return v9;
    }
    v13 = a5;
    if ( *(_WORD *)Src[0] == 37 )
    {
      if ( (int)AslEnvGetProcessWowInfo(&v34, &v40) < 0 )
      {
        v14 = "AslEnvGetProcessWowInfo failed [%x]";
        v15 = 830;
LABEL_47:
        AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v15, (_DWORD)v14);
        goto LABEL_48;
      }
      v16 = AslImageFileToArchitecture(*(_WORD *)(a1 + 584));
      if ( v16 == -1 )
        v16 = v40;
      v17 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), v12, 0LL, 0LL, &pullResult, v34, v16);
      if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741789 )
      {
        v14 = "AslEnvExpandStrings2 failed [%x]";
        v15 = 847;
        goto LABEL_47;
      }
      v18 = 2 * pullResult;
    }
    else
    {
      v19 = *(unsigned int *)(a5 + 8);
      v20 = v19 + v7;
      if ( v19 + v7 < v19 )
      {
        v15 = 860;
        goto LABEL_46;
      }
      v18 = v20 + 1;
      if ( v20 + 1 < v20 )
      {
        v15 = 865;
        goto LABEL_46;
      }
    }
    if ( v18 + 20 >= v18 )
    {
      pullResult = v18 + 20;
      if ( RtlULongLongMult(v18 + 20, 2uLL, &pullResult) < 0 )
      {
        v14 = "Invalid buffer size";
        v15 = 876;
        goto LABEL_47;
      }
      v22 = pullResult;
      if ( pullResult < 0x208 )
        v22 = 520LL;
      v23 = (_QWORD *)AslAlloc(v21, v22);
      v24 = v23;
      if ( !v23 )
      {
        v14 = "Out of memory";
        v15 = 884;
        goto LABEL_47;
      }
      if ( *(_WORD *)v12 == 37 )
      {
        if ( (int)AslEnvGetProcessWowInfo(&v34, &v40) < 0 )
        {
          v25 = "AslEnvGetProcessWowInfo failed [%x]";
          v26 = 896;
LABEL_34:
          AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v26, (_DWORD)v25);
          goto LABEL_35;
        }
        v27 = AslImageFileToArchitecture(*(_WORD *)(a1 + 584));
        if ( v27 == -1 )
          v27 = v40;
        LOWORD(v33) = v27;
        LOWORD(v32) = v34;
        if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), v12, v24, v22 >> 1, &pullResult, v32, v33) < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpResolveMatchingFile",
            913,
            (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]");
LABEL_35:
          AslFree(v28, v24);
          goto LABEL_48;
        }
      }
      else
      {
        memmove(v23, *(const void **)v13, 2LL * *(unsigned int *)(v13 + 8));
        memmove((char *)v24 + 2 * *(unsigned int *)(v13 + 8), v12, 2LL * (unsigned int)(v7 + 1));
      }
      if ( (int)AslPathClean(v24, v24) >= 0 )
      {
        if ( (int)AslPathToNetworkPathNt(&v36, v24) < 0 )
        {
          if ( wcsnicmp((const wchar_t *)v24, L"\\??\\", 4uLL) )
          {
            v30 = -1LL;
            do
              ++v30;
            while ( *((_WORD *)v24 + v30) );
            memmove(v24 + 1, v24, 2 * v30 + 2);
            *v24 = *(_QWORD *)L"\\??\\";
          }
        }
        else
        {
          AslFree(v29, v24);
          v24 = v36;
        }
        v9 = 1;
        *a6 = v24;
        goto LABEL_48;
      }
      v25 = "AslPathClean failed [%x]";
      v26 = 938;
      goto LABEL_34;
    }
    v15 = 871;
LABEL_46:
    v14 = "Invalid path size";
    goto LABEL_47;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 801, (unsigned int)"Invalid match file length");
  v11 = Src[1];
  v12 = Src[0];
LABEL_48:
  if ( v12 && v12 != v11 )
    AslFree(v10, v12);
  return v9;
}
