/*
 * XREFs of AslStringDuplicate @ 0x180099864
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpApphelpExeInfo @ 0x1800907CC (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180090B18 (SdbpConvertResourcesToStrings.c)
 *     SdbpEscapeQuoteInMsg @ 0x180090C28 (SdbpEscapeQuoteInMsg.c)
 *     SdbpExpandSummaryMsg @ 0x180090D20 (SdbpExpandSummaryMsg.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180090E54 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180095210 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x180099048 (AslRegistryGetString.c)
 *     AslStringReplace @ 0x180099B6C (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x180099DCC (AslStringReplaceArray.c)
 *     AslFileMappingCreate @ 0x18009A09C (AslFileMappingCreate.c)
 *     AslpFileVerQueryBlock @ 0x18009E4B4 (AslpFileVerQueryBlock.c)
 *     AslPathToSystemPath @ 0x18009F190 (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x1800A04BC (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchLengthW @ 0x18008D2FC (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x18009455C (RtlULongLongMult.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

__int64 __fastcall AslStringDuplicate(_QWORD *a1, __int64 a2)
{
  void *v4; // rdi
  int v5; // eax
  int v6; // ebx
  const char *v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  _WORD *Heap; // rax
  unsigned __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  SIZE_T Size; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  Size = 0LL;
  v4 = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    goto LABEL_18;
  v5 = RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = "RtlStringCchLengthW failed [%x]";
    v8 = 590LL;
LABEL_4:
    AslLogCallPrintf(1LL, "AslStringDuplicate", v8, v7, v5);
    goto LABEL_19;
  }
  v9 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v9 = -1LL;
    v6 = -1073741675;
  }
  else
  {
    v6 = 0;
  }
  v12 = v9;
  if ( v6 >= 0 )
  {
    v5 = RtlULongLongMult(v9, 2uLL, (__int64 *)&Size);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = "SIZE_T arithmetic failed [%x]";
      v8 = 608LL;
      goto LABEL_4;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
    v4 = Heap;
    if ( !Heap )
    {
      v6 = -1073741801;
      AslLogCallPrintf(1LL, "AslStringDuplicate", 615LL, "Out of memory");
      goto LABEL_19;
    }
    v5 = RtlStringCchCopyW(Heap, v9, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = "RtlStringCchCopyW failed [%x]";
      v8 = 632LL;
      goto LABEL_4;
    }
    *a1 = v4;
    v4 = 0LL;
LABEL_18:
    v6 = 0;
    goto LABEL_19;
  }
  AslLogCallPrintf(1LL, "AslStringDuplicate", 602LL, "SIZE_T arithmetic failed [%x]", v6);
LABEL_19:
  AslFree(NtCurrentPeb()->ProcessHeap, v4);
  return (unsigned int)v6;
}
