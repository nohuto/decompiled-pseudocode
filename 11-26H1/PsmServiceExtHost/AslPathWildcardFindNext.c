/*
 * XREFs of AslPathWildcardFindNext @ 0x18009F90C
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x180095C10 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     ULongLongMult @ 0x18008D23C (ULongLongMult.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     RtlStringCbCopyNW @ 0x180099F98 (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x18009A074 (RtlUShortAdd.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A0760 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A0AF4 (AslpPathWildcardFreeMatchNode.c)
 *     memmove_0 @ 0x1800A28CE (memmove_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslPathWildcardFindNext(_WORD *a1, __int64 a2, __int64 a3)
{
  char *FileInformation; // r13
  unsigned int v7; // ebx
  __int64 v8; // rax
  ULONGLONG v9; // rcx
  unsigned __int16 *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  ULONGLONG v13; // rcx
  ULONGLONG v14; // rdx
  __int64 v15; // r11
  ULONGLONG v16; // rcx
  __int64 v17; // r10
  char *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r10
  size_t v21; // rsi
  ULONGLONG v22; // r11
  ULONGLONG v23; // rcx
  const void *v24; // rdx
  unsigned __int64 v25; // r8
  ULONGLONG v26; // rcx
  ULONGLONG v27; // rdx
  ULONGLONG v28; // r14
  void *v29; // r8
  void *v30; // rcx
  PVOID v31; // rax
  PVOID Heap; // rsi
  NTSTATUS v33; // eax
  __int64 v34; // rax
  ULONGLONG v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // r11
  ULONGLONG v38; // rcx
  __int64 v39; // r10
  __int64 v40; // rsi
  __int64 v41; // r10
  ULONGLONG v42; // r11
  ULONGLONG v43; // rcx
  bool v44; // zf
  int matched; // eax
  ULONGLONG v46; // r15
  ULONGLONG v47; // rcx
  __int64 v48; // r14
  ULONGLONG v49; // rax
  ULONGLONG v50; // rdx
  ULONGLONG v51; // rcx
  ULONGLONG v52; // r14
  void *v53; // r8
  void *v54; // rcx
  PVOID v55; // rax
  PVOID v56; // rsi
  ULONGLONG v57; // rcx
  _OWORD *v58; // rdx
  const char *v59; // r9
  __int64 v60; // r8
  int v61; // eax
  const char *v62; // r9
  __int64 v63; // r8
  WCHAR *p_ReservedForAllocatedSize; // rcx
  SIZE_T v65; // r8
  SIZE_T v66; // rdx
  USHORT Length; // r9
  SIZE_T v68; // r8
  USHORT v69; // cx
  unsigned __int64 v70; // r8
  USHORT v71; // ax
  USHORT v72; // r10
  PWSTR Buffer; // r9
  USHORT v74; // dx
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rcx
  PUCHAR StaticBuffer; // rax
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-B9h]
  ULONGLONG pullResult; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int16 v80; // [rsp+68h] [rbp-71h] BYREF
  struct _UNICODE_STRING Size; // [rsp+70h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-59h] BYREF
  __int128 v83; // [rsp+90h] [rbp-49h] BYREF
  __int128 v84; // [rsp+A0h] [rbp-39h]
  struct _IO_STATUS_BLOCK v85; // [rsp+B0h] [rbp-29h] BYREF
  _RTL_UNICODE_STRING_BUFFER Path; // [rsp+C0h] [rbp-19h] BYREF

  if ( a3 == -1 )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  v80 = 0;
  v85 = 0LL;
  DestinationString = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  memset(&Path, 0, 56);
  FileInformation = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x268uLL);
  if ( !FileInformation )
  {
    v7 = -1073741801;
    goto LABEL_130;
  }
  v7 = -1073741675;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(a3 + 32);
            if ( !v8 )
            {
              v7 = -2147483642;
              goto LABEL_129;
            }
            v9 = *(_QWORD *)(a3 + 24);
            pullResult = 0LL;
            if ( ULongLongMult(v9, v8 - 1, &pullResult) < 0
              || (v10 = (unsigned __int16 *)(*(_QWORD *)(a3 + 56) + pullResult),
                  (unsigned __int64)v10 < *(_QWORD *)(a3 + 56))
              || !v10 )
            {
              AslLogCallPrintf(1LL, "AslpPathWildcardPeekNode", 2079LL, "RtlArrayGet failed to get the next node");
              v61 = -1073741595;
              v62 = "AslpPathWildcardPeekNode failed [%x]";
              v7 = -1073741595;
              v63 = 2498LL;
              goto LABEL_127;
            }
            if ( *((_QWORD *)v10 + 3) )
              break;
            AslLogCallPrintf(1LL, "AslPathWildcardFindNext", 2503LL, "Node on the stack with invalid handle.");
            v11 = *(_QWORD *)(a3 + 32);
            if ( !v11 )
              goto LABEL_16;
            v13 = *(_QWORD *)(a3 + 24);
            pullResult = 0LL;
            if ( ULongLongMult(v13, v11 - 1, &pullResult) < 0 )
              goto LABEL_40;
            v14 = *(_QWORD *)(a3 + 56) + pullResult;
            if ( v14 < *(_QWORD *)(a3 + 56) || !v14 )
              goto LABEL_40;
            AslpPathWildcardFreeMatchNode(*(_QWORD *)(a3 + 56) + pullResult);
            v15 = *(_QWORD *)(a3 + 32);
            if ( v15 )
            {
              v16 = *(_QWORD *)(a3 + 24);
              pullResult = 0LL;
              if ( ULongLongMult(v16, v15 - 1, &pullResult) >= 0 )
              {
                v18 = (char *)(*(_QWORD *)(a3 + 56) + pullResult);
                if ( (unsigned __int64)v18 >= *(_QWORD *)(a3 + 56) )
                {
                  v19 = *(_QWORD *)(a3 + 32);
                  v20 = ~v17;
                  v44 = v20 + v19 == 0;
                  v21 = v20 + v19;
                  *(_QWORD *)&Size.Length = v21;
                  if ( v44 )
                    goto LABEL_29;
                  if ( ULongLongMult(v21, *(_QWORD *)(a3 + 24), (ULONGLONG *)&Size.Length) >= 0 )
                  {
                    v23 = *(_QWORD *)(a3 + 24);
                    pullResult = 0LL;
                    if ( ULongLongMult(v23, v22, &pullResult) >= 0 )
                    {
                      v24 = (const void *)(*(_QWORD *)(a3 + 56) + pullResult);
                      if ( (unsigned __int64)v24 >= *(_QWORD *)(a3 + 56) )
                      {
                        v21 = *(_QWORD *)&Size.Length;
LABEL_28:
                        memmove_0(v18, v24, v21);
                        goto LABEL_29;
                      }
                    }
                  }
                }
              }
            }
          }
          RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 2));
          v33 = ZwQueryDirectoryFile(
                  *((HANDLE *)v10 + 3),
                  0LL,
                  0LL,
                  0LL,
                  &v85,
                  FileInformation,
                  0x268u,
                  FileBothDirectoryInformation,
                  1u,
                  &DestinationString,
                  0);
          if ( v33 >= 0 )
            break;
          if ( v33 != -2147483642 && v33 != -1073741809 )
          {
            AslLogCallPrintf(
              1LL,
              "AslPathWildcardFindNext",
              2527LL,
              "NtQueryDirectoryFile failed to query next file [%x]",
              v33);
            AslLogCallPrintf(
              2LL,
              "AslPathWildcardFindNext",
              2528LL,
              "FilePath: '%ws'  Pattern: '%ws'",
              *((_QWORD *)v10 + 1),
              DestinationString.Buffer);
          }
          v34 = *(_QWORD *)(a3 + 32);
          if ( !v34 )
          {
LABEL_16:
            v12 = -2147483622;
            goto LABEL_41;
          }
          v35 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)&Size.Length = 0LL;
          if ( ULongLongMult(v35, v34 - 1, (ULONGLONG *)&Size.Length) >= 0
            && (v36 = *(_QWORD *)(a3 + 56) + *(_QWORD *)&Size.Length, v36 >= *(_QWORD *)(a3 + 56))
            && v36 )
          {
            AslpPathWildcardFreeMatchNode(*(_QWORD *)(a3 + 56) + *(_QWORD *)&Size.Length);
            v37 = *(_QWORD *)(a3 + 32);
            if ( v37 )
            {
              v38 = *(_QWORD *)(a3 + 24);
              *(_QWORD *)&Size.Length = 0LL;
              if ( ULongLongMult(v38, v37 - 1, (ULONGLONG *)&Size.Length) >= 0 )
              {
                v18 = (char *)(*(_QWORD *)(a3 + 56) + *(_QWORD *)&Size.Length);
                if ( (unsigned __int64)v18 >= *(_QWORD *)(a3 + 56) )
                {
                  v40 = *(_QWORD *)(a3 + 32);
                  v41 = ~v39;
                  v44 = v41 + v40 == 0;
                  v21 = v41 + v40;
                  pullResult = v21;
                  if ( v44 )
                  {
LABEL_29:
                    memset_0(&v18[v21], 0, *(_QWORD *)(a3 + 24));
                    v25 = *(_QWORD *)(a3 + 32) - 1LL;
                    *(_QWORD *)(a3 + 32) = v25;
                    if ( v25 > 0x10 )
                    {
                      v26 = *(_QWORD *)(a3 + 40);
                      v27 = *(_QWORD *)(a3 + 24);
                      if ( v27 * v26 >= 0x400 && v25 < v26 >> 2 )
                      {
                        pullResult = 0LL;
                        v28 = v26 >> 1;
                        if ( ULongLongMult(v26, v27, (ULONGLONG *)&Size.Length) >= 0
                          && ULongLongMult(v28, *(_QWORD *)(a3 + 24), &pullResult) >= 0 )
                        {
                          v29 = *(void **)(a3 + 56);
                          v30 = *(void **)(a3 + 16);
                          if ( v29 )
                          {
                            Heap = RtlReAllocateHeap(v30, 0, v29, pullResult);
                          }
                          else
                          {
                            v31 = RtlAllocateHeap(v30, 0, pullResult);
                            Heap = v31;
                            if ( v31 )
                              memset_0(v31, 0, pullResult);
                          }
                          if ( Heap )
                          {
                            *(_QWORD *)(a3 + 56) = Heap;
                            *(_QWORD *)(a3 + 40) = v28;
                          }
                        }
                      }
                    }
                  }
                  else if ( ULongLongMult(v21, *(_QWORD *)(a3 + 24), &pullResult) >= 0 )
                  {
                    v43 = *(_QWORD *)(a3 + 24);
                    *(_QWORD *)&Size.Length = 0LL;
                    if ( ULongLongMult(v43, v42, (ULONGLONG *)&Size.Length) >= 0 )
                    {
                      v24 = (const void *)(*(_QWORD *)(a3 + 56) + *(_QWORD *)&Size.Length);
                      if ( (unsigned __int64)v24 >= *(_QWORD *)(a3 + 56) )
                      {
                        v21 = pullResult;
                        goto LABEL_28;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
LABEL_40:
            v12 = -1073741595;
            AslLogCallPrintf(1LL, "AslpPathWildcardPeekNode", 2079LL, "RtlArrayGet failed to get the next node");
LABEL_41:
            LODWORD(IoStatusBlock) = v12;
            AslLogCallPrintf(
              1LL,
              "AslpPathWildcardPopNode",
              2106LL,
              "AslpPathWildcardPeekNode failed [%x]",
              IoStatusBlock);
          }
        }
        if ( *((_DWORD *)FileInformation + 15) == 4 )
        {
          if ( *((_WORD *)FileInformation + 47) != 46 )
            break;
          v44 = *((_WORD *)FileInformation + 48) == 46;
        }
        else
        {
          if ( *((_DWORD *)FileInformation + 15) != 2 )
            break;
          v44 = *((_WORD *)FileInformation + 47) == 46;
        }
      }
      while ( v44 );
      matched = AslpPathWildcardAllocMatchNode(
                  (unsigned int)&v83,
                  (_DWORD)v10,
                  *((_QWORD *)v10 + 2),
                  (*((_DWORD *)FileInformation + 14) >> 4) & 1,
                  (__int64)(FileInformation + 94),
                  *((_WORD *)FileInformation + 30));
      if ( matched == -1073741197 )
        break;
      if ( matched != -1073741565 && matched != -1073741638 )
      {
        if ( matched < 0 )
        {
          LODWORD(IoStatusBlock) = matched;
          v59 = "AslpPathWildcardAllocMatchNode failed [%x]";
          v60 = 2585LL;
          goto LABEL_86;
        }
        v46 = *(_QWORD *)(a3 + 32);
        if ( v46 >= *(_QWORD *)(a3 + 40) )
        {
          v47 = v46 + 1;
          if ( v46 + 1 <= *(_QWORD *)(a3 + 40) )
          {
            v7 = -1073741811;
LABEL_89:
            v61 = v7;
            v62 = "AslpPathWildcardPushNode failed [%x]";
            v63 = 2577LL;
LABEL_127:
            LODWORD(IoStatusBlock) = v61;
            AslLogCallPrintf(1LL, "AslPathWildcardFindNext", v63, v62, IoStatusBlock);
            goto LABEL_129;
          }
          v48 = *(_QWORD *)(a3 + 48) - 1LL;
          v49 = v48 + v47;
          if ( v48 + v47 < v47 )
            goto LABEL_89;
          v50 = *(_QWORD *)(a3 + 24);
          v51 = *(_QWORD *)(a3 + 40);
          v52 = v49 & ~v48;
          pullResult = 0LL;
          if ( ULongLongMult(v51, v50, (ULONGLONG *)&Size.Length) < 0
            || ULongLongMult(v52, *(_QWORD *)(a3 + 24), &pullResult) < 0 )
          {
            goto LABEL_89;
          }
          v53 = *(void **)(a3 + 56);
          v54 = *(void **)(a3 + 16);
          if ( v53 )
          {
            v56 = RtlReAllocateHeap(v54, 0, v53, pullResult);
          }
          else
          {
            v55 = RtlAllocateHeap(v54, 0, pullResult);
            v56 = v55;
            if ( v55 )
              memset_0(v55, 0, pullResult);
          }
          if ( !v56 )
          {
            v7 = -1073741801;
            goto LABEL_89;
          }
          *(_QWORD *)(a3 + 56) = v56;
          *(_QWORD *)(a3 + 40) = v52;
        }
        v57 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)&Size.Length = 0LL;
        if ( ULongLongMult(v57, v46, (ULONGLONG *)&Size.Length) < 0 )
          goto LABEL_89;
        v58 = (_OWORD *)(*(_QWORD *)(a3 + 56) + *(_QWORD *)&Size.Length);
        if ( (unsigned __int64)v58 < *(_QWORD *)(a3 + 56) )
          goto LABEL_89;
        *v58 = v83;
        v58[1] = v84;
        ++*(_QWORD *)(a3 + 32);
      }
    }
    if ( (int)RtlUShortAdd(*v10, *((_WORD *)FileInformation + 30), (__int16 *)&v80) >= 0
      && (int)RtlUShortAdd(v80, 2, (__int16 *)&v80) >= 0 )
    {
      break;
    }
    LODWORD(IoStatusBlock) = -1073741675;
    v59 = "Failed to compute the path length [%x]";
    v60 = 2629LL;
LABEL_86:
    AslLogCallPrintf(1LL, "AslPathWildcardFindNext", v60, v59, IoStatusBlock);
  }
  Path.ByteBuffer.StaticBuffer = (PUCHAR)&Path.ByteBuffer.ReservedForAllocatedSize;
  p_ReservedForAllocatedSize = (WCHAR *)&Path.ByteBuffer.ReservedForAllocatedSize;
  v65 = v80 + 2LL;
  Path.ByteBuffer.Buffer = (PUCHAR)&Path.ByteBuffer.ReservedForAllocatedSize;
  Path.ByteBuffer.StaticSize = 2LL;
  LOWORD(Path.ByteBuffer.ReservedForAllocatedSize) = 0;
  Path.String.Buffer = (PWSTR)&Path.ByteBuffer.ReservedForAllocatedSize;
  v66 = 2LL;
  Path.ByteBuffer.Size = 2LL;
  *(_DWORD *)&Path.String.Length = 0x20000;
  if ( v65 > 0xFFFE )
  {
    v7 = -1073741562;
LABEL_95:
    LODWORD(IoStatusBlock) = v7;
    AslLogCallPrintf(
      1LL,
      "AslPathWildcardFindNext",
      2638LL,
      "RtlEnsureUnicodeStringBufferSizeBytes failed [%x]",
      IoStatusBlock);
    goto LABEL_129;
  }
  if ( v65 > 2 )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v65) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_95;
    }
    v66 = Path.ByteBuffer.Size;
    p_ReservedForAllocatedSize = (WCHAR *)Path.ByteBuffer.Buffer;
  }
  Path.String.Buffer = p_ReservedForAllocatedSize;
  Length = 0;
  Path.String.MaximumLength = v66;
  Path.String.Length = 0;
  v68 = *v10 + 2LL;
  if ( v68 > 0xFFFE )
  {
    v7 = -1073741562;
LABEL_102:
    LODWORD(IoStatusBlock) = v7;
    AslLogCallPrintf(1LL, "AslPathWildcardFindNext", 2648LL, "RtlAssignUnicodeStringBuffer failed [%x]", IoStatusBlock);
    goto LABEL_129;
  }
  if ( v68 > v66 )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v68) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_102;
    }
    p_ReservedForAllocatedSize = (WCHAR *)Path.ByteBuffer.Buffer;
    Length = Path.String.Length;
  }
  Path.String.Buffer = p_ReservedForAllocatedSize;
  memmove_0(&p_ReservedForAllocatedSize[(unsigned __int64)Length >> 1], *((const void **)v10 + 1), *v10);
  Path.String.MaximumLength = *v10 + Path.String.Length + 2;
  Path.String.Length += *v10;
  Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
  if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)*v10 >> 1) - 2) != 92 )
  {
    v69 = Path.String.Length;
    v70 = (unsigned int)Path.String.Length + 2 + 2LL;
    if ( v70 > 0xFFFE )
    {
      v7 = -1073741562;
LABEL_110:
      LODWORD(IoStatusBlock) = v7;
      AslLogCallPrintf(
        1LL,
        "AslPathWildcardFindNext",
        2655LL,
        "RtlAppendUnicodeStringBuffer failed [%x]",
        IoStatusBlock);
      goto LABEL_129;
    }
    if ( v70 > Path.ByteBuffer.Size )
    {
      if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v70) < 0 )
      {
        v7 = -1073741801;
        goto LABEL_110;
      }
      v69 = Path.String.Length;
    }
    Path.String.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
    *(_WORD *)&Path.ByteBuffer.Buffer[2 * ((unsigned __int64)v69 >> 1)] = asc_1800BD5E8[0];
    v71 = Path.String.Length + 4;
    Path.String.Length += 2;
    Path.String.MaximumLength = v71;
    Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
  }
  v72 = Path.String.Length;
  Buffer = (PWSTR)(FileInformation + 94);
  DestinationString.Buffer = (PWSTR)(FileInformation + 94);
  DestinationString.Length = *((_WORD *)FileInformation + 30);
  v74 = DestinationString.Length;
  DestinationString.MaximumLength = *((_WORD *)FileInformation + 30);
  v75 = Path.String.Length + (unsigned int)DestinationString.Length + 2LL;
  if ( v75 > 0xFFFE )
  {
    v7 = -1073741562;
LABEL_118:
    LODWORD(IoStatusBlock) = v7;
    AslLogCallPrintf(1LL, "AslPathWildcardFindNext", 2670LL, "RtlAppendUnicodeStringBuffer failed [%x]", IoStatusBlock);
    goto LABEL_129;
  }
  if ( v75 > Path.ByteBuffer.Size )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v75) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_118;
    }
    Buffer = DestinationString.Buffer;
    v74 = DestinationString.Length;
    v72 = Path.String.Length;
  }
  Path.String.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
  memmove_0(&Path.ByteBuffer.Buffer[2 * ((unsigned __int64)v72 >> 1)], Buffer, v74);
  v76 = (unsigned __int16)(Path.String.Length + DestinationString.Length);
  Path.String.Length = v76;
  Path.String.MaximumLength = v76 + 2;
  Path.String.Buffer[v76 >> 1] = 0;
  if ( *(_DWORD *)a3 )
  {
    v61 = RtlNtPathNameToDosPathName(0, &Path, 0LL, 0LL);
    v7 = v61;
    if ( v61 < 0 )
    {
      v62 = "RtlNtPathNameToDosPathName failed [%x]";
      v63 = 2681LL;
      goto LABEL_127;
    }
  }
  v61 = RtlStringCbCopyNW(a1, 0x208uLL, (__int64)Path.String.Buffer, Path.String.Length);
  v7 = v61;
  if ( v61 < 0 )
  {
    v62 = "RtlStringCbCopyNW failed [%x]";
    v63 = 2692LL;
    goto LABEL_127;
  }
  v7 = 0;
LABEL_129:
  AslFree(NtCurrentPeb()->ProcessHeap, FileInformation);
LABEL_130:
  StaticBuffer = Path.ByteBuffer.StaticBuffer;
  if ( Path.ByteBuffer.Buffer && Path.ByteBuffer.Buffer != Path.ByteBuffer.StaticBuffer )
  {
    Size.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
    *(_QWORD *)&Size.Length = 0LL;
    RtlFreeUnicodeString(&Size);
    StaticBuffer = Path.ByteBuffer.StaticBuffer;
  }
  if ( StaticBuffer )
    *(_WORD *)StaticBuffer = 0;
  return v7;
}
