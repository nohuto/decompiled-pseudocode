/*
 * XREFs of AslPathWildcardFindFirst @ 0x18009F358
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x180095C10 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     ULongLongMult @ 0x18008D23C (ULongLongMult.c)
 *     AslDoesFileExistNtPath @ 0x180098A78 (AslDoesFileExistNtPath.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     RtlStringCbCopyNW @ 0x180099F98 (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x18009A074 (RtlUShortAdd.c)
 *     AslPathCleanUstr @ 0x18009ECA8 (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x18009F90C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A0760 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A09FC (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A0AF4 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x1800A0B58 (AslpPathWildcardMakeLeaves.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(_WORD *a1, ULONGLONG a2, const wchar_t *a3, _QWORD *a4)
{
  _WORD *v6; // r14
  WCHAR *v8; // r15
  int v9; // eax
  int Next; // ebx
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rbx
  WCHAR *Heap; // rax
  int v15; // eax
  int Leaves; // eax
  WCHAR *Buffer; // rcx
  int v18; // eax
  _DWORD *v19; // rdi
  HRESULT v20; // eax
  ULONGLONG v21; // r11
  int v22; // esi
  int v23; // r10d
  void *v24; // r8
  void *v25; // rcx
  PVOID v26; // rax
  PVOID v27; // rbx
  void *v28; // r8
  int matched; // eax
  ULONGLONG v30; // r13
  ULONGLONG v31; // rcx
  __int64 v32; // rbx
  ULONGLONG v33; // rax
  ULONGLONG v34; // rdx
  ULONGLONG v35; // rcx
  ULONGLONG v36; // rbx
  void *v37; // r8
  void *v38; // rcx
  PVOID v39; // rax
  PVOID v40; // r14
  ULONGLONG v41; // rcx
  _OWORD *v42; // rdx
  __int128 v43; // xmm0
  __int64 v44; // [rsp+20h] [rbp-60h]
  __int64 v45; // [rsp+20h] [rbp-60h]
  _DWORD *v46; // [rsp+30h] [rbp-50h] BYREF
  ULONGLONG pullResult; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int128 v50; // [rsp+60h] [rbp-20h] BYREF
  __int128 v51; // [rsp+70h] [rbp-10h]
  ULONGLONG Size; // [rsp+C8h] [rbp+48h] BYREF

  Size = a2;
  v6 = a1;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *a4 = 0LL;
  *a1 = 0;
  v46 = 0LL;
  LOWORD(Size) = 0;
  UnicodeString = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v9 = RtlDosPathNameToNtPathName_U_WithStatus(a3, &UnicodeString, 0LL, 0LL);
  Next = v9;
  if ( v9 >= 0 )
  {
    v11 = AslPathCleanUstr(&UnicodeString.Length);
    Next = v11;
    if ( v11 < 0 )
    {
      AslLogCallPrintf(1LL, "AslPathWildcardFindFirst", 2257LL, "AslPathCleanUstr failed [%x]", v11);
      goto LABEL_50;
    }
    v12 = RtlUShortAdd(UnicodeString.Length, 4, (__int16 *)&Size);
    Next = v12;
    if ( v12 < 0 )
    {
      AslLogCallPrintf(1LL, "AslPathWildcardFindFirst", 2263LL, "RtlUShortAdd failed [%x]", v12);
      goto LABEL_50;
    }
    v13 = (unsigned __int16)Size;
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)Size);
    v8 = Heap;
    if ( !Heap )
      goto LABEL_14;
    v15 = RtlStringCbCopyNW(Heap, v13, (__int64)UnicodeString.Buffer, UnicodeString.Length);
    Next = v15;
    if ( v15 < 0 )
    {
      AslLogCallPrintf(1LL, "AslPathWildcardFindFirst", 2275LL, "RtlStringCbCopyNW failed [%x]", v15);
      goto LABEL_50;
    }
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      Next = -1073741767;
      AslLogCallPrintf(1LL, "AslPathWildcardFindFirst", 2293LL, "Failed to split the wildcard path");
      goto LABEL_50;
    }
    if ( Leaves == 1 )
    {
      Buffer = UnicodeString.Buffer;
      *a4 = -1LL;
      if ( (unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        v18 = RtlStringCchCopyW(v6, 260LL, (__int64)a3);
        Next = v18;
        if ( v18 >= 0 )
          Next = 0;
        else
          AslLogCallPrintf(1LL, "AslPathWildcardFindFirst", 2311LL, "RtlStringCbCopyNW failed [%x]", v18);
      }
      else
      {
        Next = -2147483642;
      }
      goto LABEL_50;
    }
    v46 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
    v19 = v46;
    if ( !v46 )
    {
LABEL_14:
      Next = -1073741801;
      goto LABEL_50;
    }
    *v46 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v19 + 1) = v8;
    v8 = 0LL;
    *((_OWORD *)v19 + 1) = 0LL;
    *((_OWORD *)v19 + 2) = 0LL;
    *((_OWORD *)v19 + 3) = 0LL;
    *((_QWORD *)v19 + 2) = NtCurrentPeb()->ProcessHeap;
    *((_QWORD *)v19 + 6) = 16LL;
    *((_QWORD *)v19 + 3) = 32LL;
    Size = 0LL;
    v20 = ULongLongMult(0LL, 0x20uLL, &pullResult);
    v22 = -1073741801;
    v23 = -1073741675;
    if ( v20 < 0 || ULongLongMult(v21, *((_QWORD *)v19 + 3), &Size) < 0 )
    {
      Next = v23;
    }
    else
    {
      v24 = (void *)*((_QWORD *)v19 + 7);
      v25 = (void *)*((_QWORD *)v19 + 2);
      if ( v24 )
      {
        v27 = RtlReAllocateHeap(v25, 0, v24, Size);
      }
      else
      {
        v26 = RtlAllocateHeap(v25, 0, Size);
        v27 = v26;
        if ( v26 )
          memset_0(v26, 0, Size);
      }
      if ( v27 )
      {
        *((_QWORD *)v19 + 7) = v27;
        *((_QWORD *)v19 + 5) = 16LL;
        goto LABEL_40;
      }
      Next = -1073741801;
    }
    v28 = (void *)*((_QWORD *)v19 + 7);
    if ( v28 )
      RtlFreeHeap(*((HANDLE *)v19 + 2), 0, v28);
    *((_OWORD *)v19 + 1) = 0LL;
    *((_OWORD *)v19 + 2) = 0LL;
    *((_OWORD *)v19 + 3) = 0LL;
    if ( Next < 0 )
    {
      AslLogCallPrintf(1LL, "AslpPathWildcardInitStack", 2148LL, "RtlArrayInitialize failed [%x]", Next);
      LODWORD(v44) = Next;
      AslLogCallPrintf(1LL, "AslPathWildcardFindFirst", 2349LL, "AslpPathWildcardInitStack failed [%x]", v44);
      goto LABEL_50;
    }
LABEL_40:
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v19 + 1));
    matched = AslpPathWildcardAllocMatchNode(
                (unsigned int)&v50,
                (unsigned int)&DestinationString,
                *((_QWORD *)v19 + 1),
                1,
                0LL,
                0);
    Next = matched;
    if ( matched < 0 )
    {
      LODWORD(v45) = matched;
      AslLogCallPrintf(
        1LL,
        "AslPathWildcardFindFirst",
        2362LL,
        "AslpPathWildcardAllocMatchNode failed to create root of path [%x]",
        v45);
      goto LABEL_50;
    }
    v30 = *((_QWORD *)v19 + 4);
    if ( v30 >= *((_QWORD *)v19 + 5) )
    {
      v31 = v30 + 1;
      if ( v30 + 1 <= *((_QWORD *)v19 + 5) )
      {
        Next = -1073741811;
LABEL_48:
        v22 = Next;
LABEL_49:
        LODWORD(v45) = v22;
        AslLogCallPrintf(1LL, "AslPathWildcardFindFirst", 2368LL, "AslpPathWildcardPushNode failed [%x]", v45);
        goto LABEL_50;
      }
      v32 = *((_QWORD *)v19 + 6) - 1LL;
      v33 = v32 + v31;
      if ( v32 + v31 < v31
        || (v34 = *((_QWORD *)v19 + 3),
            v35 = *((_QWORD *)v19 + 5),
            v36 = v33 & ~v32,
            Size = 0LL,
            ULongLongMult(v35, v34, &pullResult) < 0)
        || ULongLongMult(v36, *((_QWORD *)v19 + 3), &Size) < 0 )
      {
LABEL_47:
        Next = -1073741675;
        goto LABEL_48;
      }
      v37 = (void *)*((_QWORD *)v19 + 7);
      v38 = (void *)*((_QWORD *)v19 + 2);
      if ( v37 )
      {
        v40 = RtlReAllocateHeap(v38, 0, v37, Size);
      }
      else
      {
        v39 = RtlAllocateHeap(v38, 0, Size);
        v40 = v39;
        if ( v39 )
          memset_0(v39, 0, Size);
      }
      if ( !v40 )
      {
        Next = -1073741801;
        goto LABEL_49;
      }
      *((_QWORD *)v19 + 7) = v40;
      v6 = a1;
      *((_QWORD *)v19 + 5) = v36;
    }
    v41 = *((_QWORD *)v19 + 3);
    Size = 0LL;
    if ( ULongLongMult(v41, v30, &Size) >= 0 )
    {
      v42 = (_OWORD *)(*((_QWORD *)v19 + 7) + Size);
      if ( (unsigned __int64)v42 >= *((_QWORD *)v19 + 7) )
      {
        v43 = v50;
        *a4 = v19;
        *v42 = v43;
        v42[1] = v51;
        ++*((_QWORD *)v19 + 4);
        v50 = 0LL;
        v51 = 0LL;
        Next = AslPathWildcardFindNext(v6, 260LL, v19);
        goto LABEL_50;
      }
    }
    goto LABEL_47;
  }
  AslLogCallPrintf(1LL, "AslPathWildcardFindFirst", 2246LL, "Failed to convert dos path to nt path [%x]", v9);
LABEL_50:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    AslFree(NtCurrentPeb()->ProcessHeap, v8);
  if ( Next < 0 )
  {
    AslpPathWildcardFreeFindContext(&v46);
    AslpPathWildcardFreeMatchNode(&v50);
    *a4 = 0LL;
  }
  return (unsigned int)Next;
}
