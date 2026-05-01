/*
 * XREFs of AslStringDuplicate @ 0x18015C594
 * Callers:
 *     AslRegistryGetString @ 0x18015C054 (AslRegistryGetString.c)
 * Callees:
 *     AslFree @ 0x18015C31C (AslFree.c)
 *     RtlStringCchCopyW @ 0x18017F760 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1801EFFF4 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x1802C3A28 (RtlULongLongMult.c)
 *     AslLogCallPrintf @ 0x1802C3E28 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(_QWORD *a1, __int64 a2)
{
  void *v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // ebx
  const char *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rsi
  PVOID Heap; // rax
  unsigned __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  SIZE_T Size; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  Size = 0LL;
  v4 = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    goto LABEL_18;
  v5 = RtlStringCchLengthW(a2, a2, &v13);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = "RtlStringCchLengthW failed [%x]";
    v9 = 590LL;
LABEL_4:
    AslLogCallPrintf(1LL, "AslStringDuplicate", v9, v8, v5);
    goto LABEL_19;
  }
  v10 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v10 = -1LL;
    v7 = -1073741675;
  }
  else
  {
    v7 = 0;
  }
  v13 = v10;
  if ( v7 >= 0 )
  {
    v5 = RtlULongLongMult(v10, v6, &Size);
    v7 = v5;
    if ( v5 < 0 )
    {
      v8 = "SIZE_T arithmetic failed [%x]";
      v9 = 608LL;
      goto LABEL_4;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
    v4 = Heap;
    if ( !Heap )
    {
      v7 = -1073741801;
      AslLogCallPrintf(1LL, "AslStringDuplicate", 615LL, "Out of memory");
      goto LABEL_19;
    }
    v5 = RtlStringCchCopyW(Heap, v10, a2);
    v7 = v5;
    if ( v5 < 0 )
    {
      v8 = "RtlStringCchCopyW failed [%x]";
      v9 = 632LL;
      goto LABEL_4;
    }
    *a1 = v4;
    v4 = 0LL;
LABEL_18:
    v7 = 0;
    goto LABEL_19;
  }
  AslLogCallPrintf(1LL, "AslStringDuplicate", 602LL, "SIZE_T arithmetic failed [%x]", v7);
LABEL_19:
  AslFree(NtCurrentPeb()->ProcessHeap, v4);
  return (unsigned int)v7;
}
