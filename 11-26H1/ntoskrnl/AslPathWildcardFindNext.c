/*
 * XREFs of AslPathWildcardFindNext @ 0x1408902E4
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ULongLongMult @ 0x140469310 (ULongLongMult.c)
 *     RtlStringCbCopyNW @ 0x14047FFEC (RtlStringCbCopyNW.c)
 *     RtlStringCbCatNW @ 0x1407199AC (RtlStringCbCatNW.c)
 *     ZwQueryDirectoryFile @ 0x140728660 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140890DFC (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1408910F8 (AslpPathWildcardFreeMatchNode.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindNext(wchar_t *a1, __int64 a2, ULONGLONG *a3)
{
  ULONGLONG v5; // rcx
  __int64 FileInformation; // r15
  NTSTATUS v7; // ebx
  ULONGLONG v8; // rax
  ULONGLONG v9; // rcx
  ULONGLONG v10; // rcx
  unsigned __int16 *v11; // rsi
  ULONGLONG v12; // r10
  ULONGLONG v13; // rcx
  __int64 v14; // r9
  char *v15; // r14
  ULONGLONG v16; // rsi
  __int64 v17; // r9
  ULONGLONG v18; // rsi
  ULONGLONG v19; // r10
  ULONGLONG v20; // rcx
  unsigned __int64 v21; // r8
  ULONGLONG v22; // rdx
  ULONGLONG v23; // r15
  void *v24; // r12
  PVOID v25; // rax
  void *v26; // rsi
  size_t v27; // r14
  PVOID v28; // rax
  const char *v29; // r9
  int v30; // r8d
  const char *v31; // rdx
  NTSTATUS v32; // eax
  ULONGLONG v33; // rax
  ULONGLONG v34; // rcx
  ULONGLONG v35; // rdx
  ULONGLONG v36; // rcx
  int v37; // eax
  bool v38; // zf
  int matched; // eax
  ULONGLONG v40; // r13
  ULONGLONG v41; // r9
  ULONGLONG v42; // rcx
  __int64 v43; // r14
  ULONGLONG v44; // rdx
  ULONGLONG v45; // r14
  void *v46; // r12
  PVOID v47; // rax
  void *v48; // rsi
  size_t v49; // r15
  PVOID PoolWithTag; // rax
  ULONGLONG v51; // rcx
  ULONGLONG v52; // rdx
  const char *v53; // r9
  int v54; // r8d
  size_t v55; // rdx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  UNICODE_STRING v58; // [rsp+80h] [rbp-9h] BYREF
  __int128 v59; // [rsp+90h] [rbp+7h]
  __int64 v61; // [rsp+F8h] [rbp+6Fh]
  ULONGLONG pullResult; // [rsp+100h] [rbp+77h] BYREF
  ULONGLONG Size; // [rsp+108h] [rbp+7Fh] BYREF

  if ( a3 == (ULONGLONG *)-1LL )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v61 = AslAlloc(a1, 616LL);
  FileInformation = v61;
  if ( !v61 )
    return (unsigned int)-1073741801;
  v7 = -1073741595;
  while ( 1 )
  {
    v8 = a3[4];
    if ( !v8 )
      break;
    v9 = a3[3];
    pullResult = 0LL;
    if ( ULongLongMult(v9, v8 - 1, &pullResult) < 0
      || (v10 = a3[7], v11 = (unsigned __int16 *)(v10 + pullResult), v10 + pullResult < v10)
      || !v11 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpPathWildcardPeekNode",
        2079,
        (unsigned int)"RtlArrayGet failed to get the next node");
      v53 = "AslpPathWildcardPeekNode failed [%x]";
      v54 = 2498;
      goto LABEL_95;
    }
    if ( *((_QWORD *)v11 + 3) )
    {
      RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v11 + 2));
      v32 = ZwQueryDirectoryFile(
              *((HANDLE *)v11 + 3),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              (PVOID)FileInformation,
              0x268u,
              FileBothDirectoryInformation,
              1u,
              &DestinationString,
              0);
      if ( v32 < 0 )
      {
        if ( v32 != -2147483642 && v32 != -1073741809 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslPathWildcardFindNext",
            2527,
            (unsigned int)"NtQueryDirectoryFile failed to query next file [%x]");
          AslLogCallPrintf(
            2,
            (unsigned int)"AslPathWildcardFindNext",
            2528,
            (unsigned int)"FilePath: '%ws'  Pattern: '%ws'");
        }
        goto LABEL_46;
      }
      v37 = *(_DWORD *)(FileInformation + 60);
      if ( v37 == 4 )
      {
        if ( *(_WORD *)(FileInformation + 94) != 46 )
          goto LABEL_57;
        v38 = *(_WORD *)(FileInformation + 96) == 46;
LABEL_56:
        if ( !v38 )
          goto LABEL_57;
      }
      else
      {
        if ( v37 == 2 )
        {
          v38 = *(_WORD *)(FileInformation + 94) == 46;
          goto LABEL_56;
        }
LABEL_57:
        matched = AslpPathWildcardAllocMatchNode(
                    &v58,
                    (PCUNICODE_STRING)v11,
                    (NTSTRSAFE_PCWSTR)(FileInformation + 94),
                    *(_WORD *)(FileInformation + 60));
        if ( matched == -1073741197 )
        {
          v7 = RtlStringCbCopyNW(a1, 0x208uLL, *((STRSAFE_PCNZWCH *)v11 + 1), *v11);
          if ( v7 >= 0 )
          {
            if ( *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1) - 2) == 92
              || (v7 = RtlStringCbCatNW(a1, v55, L"\\", 2uLL), v7 >= 0) )
            {
              v7 = RtlStringCbCatNW(
                     a1,
                     v55,
                     (STRSAFE_PCNZWCH)(FileInformation + 94),
                     *(unsigned int *)(FileInformation + 60));
              if ( v7 >= 0 )
              {
                v7 = 0;
                goto LABEL_97;
              }
              v53 = "RtlStringCbCatNW failed [%x]";
              v54 = 2615;
            }
            else
            {
              v53 = "RtlStringCbCatNW failed [%x]";
              v54 = 2608;
            }
          }
          else
          {
            v53 = "RtlStringCbCopyNW failed [%x]";
            v54 = 2601;
          }
          goto LABEL_95;
        }
        if ( matched != -1073741565 && matched != -1073741638 )
        {
          if ( matched < 0 )
          {
            v29 = "AslpPathWildcardAllocMatchNode failed [%x]";
            v30 = 2585;
            v31 = "AslPathWildcardFindNext";
LABEL_80:
            AslLogCallPrintf(1, (_DWORD)v31, v30, (_DWORD)v29);
          }
          else
          {
            v40 = a3[4];
            v41 = a3[5];
            if ( v40 >= v41 )
            {
              v42 = v40 + 1;
              if ( v40 + 1 <= v41 )
              {
                v7 = -1073741811;
LABEL_85:
                v53 = "AslpPathWildcardPushNode failed [%x]";
                v54 = 2577;
LABEL_95:
                AslLogCallPrintf(1, (unsigned int)"AslPathWildcardFindNext", v54, (_DWORD)v53);
                goto LABEL_97;
              }
              v43 = a3[6] - 1;
              if ( v42 + v43 < v42
                || (v44 = a3[3],
                    Size = 0LL,
                    pullResult = 0LL,
                    v45 = (v42 + v43) & ~v43,
                    ULongLongMult(v41, v44, &Size) < 0)
                || ULongLongMult(v45, a3[3], &pullResult) < 0 )
              {
LABEL_84:
                v7 = -1073741675;
                goto LABEL_85;
              }
              v46 = (void *)a3[7];
              if ( v46 )
              {
                v49 = pullResult;
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, pullResult, 0x72615452u);
                v48 = PoolWithTag;
                if ( !PoolWithTag )
                {
                  FileInformation = v61;
LABEL_82:
                  v7 = -1073741801;
                  goto LABEL_85;
                }
                memset_0(PoolWithTag, 0, v49);
                if ( Size < v49 )
                  v49 = Size;
                memmove(v48, v46, v49);
                ExFreePoolWithTag(v46, 0x72615452u);
                FileInformation = v61;
              }
              else
              {
                v47 = ExAllocatePoolWithTag(PagedPool, pullResult, 0x72615452u);
                v48 = v47;
                if ( v47 )
                  memset_0(v47, 0, pullResult);
                if ( !v48 )
                  goto LABEL_82;
              }
              a3[7] = (ULONGLONG)v48;
              a3[5] = v45;
            }
            v51 = a3[3];
            pullResult = 0LL;
            if ( ULongLongMult(v51, v40, &pullResult) < 0 )
              goto LABEL_84;
            v5 = a3[7];
            v52 = v5 + pullResult;
            if ( v5 + pullResult < v5 )
              goto LABEL_84;
            *(UNICODE_STRING *)v52 = v58;
            *(_OWORD *)(v52 + 16) = v59;
            ++a3[4];
          }
        }
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslPathWildcardFindNext",
        2503,
        (unsigned int)"Node on the stack with invalid handle.");
LABEL_46:
      v33 = a3[4];
      if ( !v33 )
        goto LABEL_41;
      v34 = a3[3];
      pullResult = 0LL;
      if ( ULongLongMult(v34, v33 - 1, &pullResult) < 0
        || (v35 = a3[7], v36 = v35 + pullResult, v35 + pullResult < v35)
        || !v36 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpPathWildcardPeekNode",
          2079,
          (unsigned int)"RtlArrayGet failed to get the next node");
LABEL_41:
        v29 = "AslpPathWildcardPeekNode failed [%x]";
        v30 = 2106;
        v31 = "AslpPathWildcardPopNode";
        goto LABEL_80;
      }
      AslpPathWildcardFreeMatchNode(v36);
      v12 = a3[4];
      if ( v12 )
      {
        v13 = a3[3];
        pullResult = 0LL;
        if ( ULongLongMult(v13, v12 - 1, &pullResult) >= 0 )
        {
          v5 = a3[7];
          v15 = (char *)(v5 + pullResult);
          if ( v5 + pullResult >= v5 )
          {
            v16 = a3[4];
            v17 = ~v14;
            v38 = v17 + v16 == 0;
            v18 = v17 + v16;
            Size = v18;
            if ( v38 )
              goto LABEL_25;
            if ( ULongLongMult(v18, a3[3], &Size) >= 0 )
            {
              v20 = a3[3];
              pullResult = 0LL;
              if ( ULongLongMult(v20, v19, &pullResult) >= 0 )
              {
                v5 = a3[7];
                if ( v5 + pullResult >= v5 )
                {
                  v18 = Size;
                  memmove(v15, (const void *)(v5 + pullResult), Size);
LABEL_25:
                  memset_0(&v15[v18], 0, a3[3]);
                  v21 = a3[4] - 1;
                  a3[4] = v21;
                  if ( v21 > 0x10 )
                  {
                    v5 = a3[5];
                    v22 = a3[3];
                    if ( v22 * v5 >= 0x400 && v21 < v5 >> 2 )
                    {
                      pullResult = 0LL;
                      v23 = v5 >> 1;
                      Size = 0LL;
                      if ( ULongLongMult(v5, v22, &Size) >= 0 && ULongLongMult(v23, a3[3], &pullResult) >= 0 )
                      {
                        v24 = (void *)a3[7];
                        if ( v24 )
                        {
                          v27 = pullResult;
                          v28 = ExAllocatePoolWithTag(PagedPool, pullResult, 0x72615452u);
                          v26 = v28;
                          if ( !v28 )
                            goto LABEL_10;
                          memset_0(v28, 0, v27);
                          if ( Size < v27 )
                            v27 = Size;
                          memmove(v26, v24, v27);
                          ExFreePoolWithTag(v24, 0x72615452u);
LABEL_39:
                          a3[7] = (ULONGLONG)v26;
                          a3[5] = v23;
                          goto LABEL_10;
                        }
                        v25 = ExAllocatePoolWithTag(PagedPool, pullResult, 0x72615452u);
                        v26 = v25;
                        if ( v25 )
                          memset_0(v25, 0, pullResult);
                        if ( v26 )
                          goto LABEL_39;
                      }
LABEL_10:
                      FileInformation = v61;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v7 = -2147483642;
LABEL_97:
  AslFree(v5, FileInformation);
  return (unsigned int)v7;
}
