/*
 * XREFs of AslPathWildcardFindFirst @ 0x14088FD1C
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     ULongLongMult @ 0x140469310 (ULongLongMult.c)
 *     RtlUShortAdd @ 0x14047AFC0 (RtlUShortAdd.c)
 *     RtlStringCbCopyNW @ 0x14047FFEC (RtlStringCbCopyNW.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslDoesFileExistNtPath @ 0x14088E564 (AslDoesFileExistNtPath.c)
 *     AslPathCleanUstr @ 0x14088F614 (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x1408902E4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140890DFC (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x140891020 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1408910F8 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x140891148 (AslpPathWildcardMakeLeaves.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(NTSTRSAFE_PWSTR pszDest, ULONGLONG a2, const wchar_t *a3, _QWORD *a4)
{
  _QWORD *v4; // r12
  const WCHAR *v8; // r15
  int matched; // ebx
  const char *v10; // r9
  int v11; // r8d
  const char *v12; // r9
  int v13; // r8d
  __int64 v14; // rcx
  size_t v15; // rbx
  wchar_t *v16; // rax
  int Leaves; // eax
  __int64 v18; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v20; // rdi
  HRESULT v21; // eax
  ULONGLONG v22; // r10
  int v23; // r9d
  void *v24; // r13
  PVOID v25; // rax
  void *v26; // rbx
  size_t v27; // r14
  PVOID PoolWithTag; // rax
  void *v29; // rcx
  ULONGLONG v30; // r13
  unsigned __int64 v31; // r9
  ULONGLONG v32; // rcx
  __int64 v33; // r14
  ULONGLONG v34; // rax
  ULONGLONG v35; // rdx
  ULONGLONG v36; // rcx
  ULONGLONG v37; // r14
  __int64 v38; // rcx
  PVOID v39; // rax
  void *v40; // rbx
  size_t v41; // r12
  PVOID v42; // rax
  ULONGLONG v43; // rcx
  ULONGLONG v44; // rcx
  UNICODE_STRING *v45; // rdx
  UNICODE_STRING v46; // xmm0
  ULONGLONG pullResult; // [rsp+30h] [rbp-50h] BYREF
  _DWORD *v48; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING v51; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING v52; // [rsp+70h] [rbp-10h]
  ULONGLONG pusResult; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v55; // [rsp+D8h] [rbp+58h]

  v55 = a4;
  pusResult = a2;
  v4 = a4;
  if ( !pszDest )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *pszDest = 0;
  v48 = 0LL;
  LOWORD(pusResult) = 0;
  *a4 = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  SourceString = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( RtlCreateUnicodeString(&DestinationString, a3) )
  {
    matched = AslPathCleanUstr(&DestinationString.Length);
    if ( matched < 0 )
    {
      v12 = "AslPathCleanUstr failed [%x]";
      v13 = 2257;
      goto LABEL_54;
    }
    matched = RtlUShortAdd(DestinationString.Length, 4u, (USHORT *)&pusResult);
    if ( matched < 0 )
    {
      v12 = "RtlUShortAdd failed [%x]";
      v13 = 2263;
      goto LABEL_54;
    }
    v15 = (unsigned __int16)pusResult;
    v16 = (wchar_t *)AslAlloc(v14, (unsigned __int16)pusResult);
    v8 = v16;
    if ( !v16 )
      goto LABEL_15;
    matched = RtlStringCbCopyNW(v16, v15, DestinationString.Buffer, DestinationString.Length);
    if ( matched < 0 )
    {
      v12 = "RtlStringCbCopyNW failed [%x]";
      v13 = 2275;
      goto LABEL_54;
    }
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      matched = -1073741767;
      v10 = "Failed to split the wildcard path";
      v11 = 2293;
      goto LABEL_9;
    }
    if ( Leaves == 1 )
    {
      Buffer = DestinationString.Buffer;
      *v4 = -1LL;
      if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        matched = -2147483642;
        goto LABEL_55;
      }
      matched = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
      if ( matched >= 0 )
      {
        matched = 0;
        goto LABEL_55;
      }
      v12 = "RtlStringCbCopyNW failed [%x]";
      v13 = 2311;
LABEL_54:
      AslLogCallPrintf(1, (unsigned int)"AslPathWildcardFindFirst", v13, (_DWORD)v12);
      goto LABEL_55;
    }
    v48 = (_DWORD *)AslAlloc(v18, 64LL);
    v20 = v48;
    if ( !v48 )
    {
LABEL_15:
      matched = -1073741801;
      goto LABEL_55;
    }
    *v48 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v20 + 1) = v8;
    *((_QWORD *)v20 + 2) = 0LL;
    v8 = 0LL;
    *((_QWORD *)v20 + 6) = 16LL;
    *((_QWORD *)v20 + 4) = 0LL;
    *((_QWORD *)v20 + 5) = 0LL;
    *((_QWORD *)v20 + 7) = 0LL;
    *((_QWORD *)v20 + 3) = 32LL;
    pullResult = 0LL;
    pusResult = 0LL;
    v21 = ULongLongMult(0LL, 0x20uLL, &pullResult);
    v23 = -1073741675;
    if ( v21 < 0 || ULongLongMult(v22, *((_QWORD *)v20 + 3), &pusResult) < 0 )
    {
      matched = v23;
      goto LABEL_43;
    }
    v24 = (void *)*((_QWORD *)v20 + 7);
    if ( v24 )
    {
      v27 = pusResult;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
      v26 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_42:
        matched = -1073741801;
LABEL_43:
        v29 = (void *)*((_QWORD *)v20 + 7);
        if ( v29 )
          ExFreePoolWithTag(v29, 0x72615452u);
        *((_OWORD *)v20 + 1) = 0LL;
        *((_OWORD *)v20 + 2) = 0LL;
        *((_OWORD *)v20 + 3) = 0LL;
        if ( matched < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslpPathWildcardInitStack",
            2148,
            (unsigned int)"RtlArrayInitialize failed [%x]");
          v12 = "AslpPathWildcardInitStack failed [%x]";
          v13 = 2349;
          goto LABEL_54;
        }
LABEL_40:
        RtlInitUnicodeString(&SourceString, *((PCWSTR *)v20 + 1));
        matched = AslpPathWildcardAllocMatchNode(&v51, &SourceString, 0LL, 0);
        if ( matched < 0 )
        {
          v12 = "AslpPathWildcardAllocMatchNode failed to create root of path [%x]";
          v13 = 2362;
          goto LABEL_54;
        }
        v30 = *((_QWORD *)v20 + 4);
        v31 = *((_QWORD *)v20 + 5);
        if ( v30 < v31 )
          goto LABEL_69;
        v32 = v30 + 1;
        if ( v30 + 1 <= v31 )
        {
          matched = -1073741811;
LABEL_53:
          v12 = "AslpPathWildcardPushNode failed [%x]";
          v13 = 2368;
          goto LABEL_54;
        }
        v33 = *((_QWORD *)v20 + 6) - 1LL;
        v34 = v33 + v32;
        if ( v33 + v32 < v32
          || (v35 = *((_QWORD *)v20 + 3),
              v36 = *((_QWORD *)v20 + 5),
              pullResult = 0LL,
              v37 = v34 & ~v33,
              pusResult = 0LL,
              ULongLongMult(v36, v35, &pullResult) < 0)
          || ULongLongMult(v37, *((_QWORD *)v20 + 3), &pusResult) < 0 )
        {
LABEL_52:
          matched = -1073741675;
          goto LABEL_53;
        }
        *(_QWORD *)&SourceString.Length = *((_QWORD *)v20 + 7);
        if ( *(_QWORD *)&SourceString.Length )
        {
          v41 = pusResult;
          v42 = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
          v40 = v42;
          if ( v42 )
          {
            memset_0(v42, 0, v41);
            if ( pullResult < v41 )
              v41 = pullResult;
            memmove(v40, *(const void **)&SourceString.Length, v41);
            ExFreePoolWithTag(*(PVOID *)&SourceString.Length, 0x72615452u);
            v4 = v55;
            goto LABEL_68;
          }
          v4 = v55;
        }
        else
        {
          v39 = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
          v40 = v39;
          if ( v39 )
          {
            memset_0(v39, 0, pusResult);
LABEL_68:
            *((_QWORD *)v20 + 5) = v37;
            *((_QWORD *)v20 + 7) = v40;
LABEL_69:
            v43 = *((_QWORD *)v20 + 3);
            pusResult = 0LL;
            if ( ULongLongMult(v43, v30, &pusResult) >= 0 )
            {
              v44 = *((_QWORD *)v20 + 7);
              v45 = (UNICODE_STRING *)(v44 + pusResult);
              if ( v44 + pusResult >= v44 )
              {
                v46 = v51;
                *v4 = v20;
                *v45 = v46;
                v45[1] = v52;
                ++*((_QWORD *)v20 + 4);
                v51 = 0LL;
                v52 = 0LL;
                matched = AslPathWildcardFindNext(pszDest, v45, v20);
                goto LABEL_55;
              }
            }
            goto LABEL_52;
          }
        }
        matched = -1073741801;
        goto LABEL_53;
      }
      memset_0(PoolWithTag, 0, v27);
      if ( pullResult < v27 )
        v27 = pullResult;
      memmove(v26, v24, v27);
      ExFreePoolWithTag(v24, 0x72615452u);
    }
    else
    {
      v25 = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
      v26 = v25;
      if ( v25 )
        memset_0(v25, 0, pusResult);
      if ( !v26 )
        goto LABEL_42;
    }
    *((_QWORD *)v20 + 7) = v26;
    *((_QWORD *)v20 + 5) = 16LL;
    goto LABEL_40;
  }
  matched = -1073741801;
  v10 = "RtlCreateUnicodeString failed";
  v11 = 2236;
LABEL_9:
  AslLogCallPrintf(1, (unsigned int)"AslPathWildcardFindFirst", v11, (_DWORD)v10);
LABEL_55:
  RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    AslFree(v38, v8);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v48);
    AslpPathWildcardFreeMatchNode(&v51);
    *v4 = 0LL;
  }
  return (unsigned int)matched;
}
