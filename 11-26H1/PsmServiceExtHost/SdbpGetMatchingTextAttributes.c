/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x1800963F8
 * Callers:
 *     SdbpCheckMatchingText @ 0x1800955D0 (SdbpCheckMatchingText.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x1800936A4 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int v8; // r13d
  PVOID v11; // rsi
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int TagDataSize; // eax
  unsigned int v18; // ebp
  PVOID Heap; // rax
  unsigned int v20; // eax
  int DWORDTag; // r14d
  unsigned int v22; // eax

  v7 = 0;
  *a3 = 0LL;
  v8 = 0x2000;
  *a4 = 0LL;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1850LL, "Failed to get MATCHING_TEXT file path");
    return v7;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v14 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1862LL, "Failed to read MATCHING_TEXT file path");
LABEL_24:
    if ( v11 )
      AslFree(NtCurrentPeb()->ProcessHeap, v11);
    return v7;
  }
  v15 = SdbFindFirstTag(a1, a2, 36883);
  v16 = v15;
  if ( !v15 )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1871LL, "Failed to read text to match");
    return v7;
  }
  TagDataSize = SdbGetTagDataSize(a1, v15);
  v18 = TagDataSize;
  if ( !TagDataSize )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1877LL, "Failed to get text to match blob");
    return v7;
  }
  if ( TagDataSize == 0x20000000 )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1881LL, "Failed to get text size to match blob");
    return v7;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, TagDataSize + 2LL);
  v11 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1887LL, "Failed to allocate memory for text blob");
    return v7;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, v16, (__int64)Heap, v18) )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1892LL, "Failed to read matching text blob");
    goto LABEL_24;
  }
  v20 = SdbFindFirstTag(a1, a2, 16467);
  if ( !v20 )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1901LL, "Failed to read text encoding");
    goto LABEL_24;
  }
  DWORDTag = SdbReadDWORDTag(a1, v20, 0);
  if ( !DWORDTag )
  {
    AslLogCallPrintf(1LL, "SdbpGetMatchingTextAttributes", 1907LL, "Failed to read encoding type");
    goto LABEL_24;
  }
  v22 = SdbFindFirstTag(a1, a2, 16385);
  if ( v22 )
    v8 = SdbReadDWORDTag(a1, v22, 0x2000u);
  v7 = 1;
  *a3 = v14;
  *a4 = v11;
  *a5 = v18;
  *a6 = DWORDTag;
  *a7 = v8;
  return v7;
}
