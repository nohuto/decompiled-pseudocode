/*
 * XREFs of AslStringReplaceArray @ 0x180099DCC
 * Callers:
 *     SdbpExpandSummaryMsg @ 0x180090D20 (SdbpExpandSummaryMsg.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x180099B6C (AslStringReplace.c)
 */

__int64 __fastcall AslStringReplaceArray(_QWORD *a1, __int64 a2, const wchar_t **a3, __int64 a4)
{
  void *v4; // rax
  const wchar_t **v5; // rdi
  unsigned __int64 v8; // rbp
  void *v9; // r12
  __int64 v10; // r15
  int v11; // ebx
  int v13; // eax
  int v14; // [rsp+28h] [rbp-30h]
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  v5 = a3;
  *a1 = 0LL;
  if ( a3 && a4 )
  {
    v8 = 0LL;
    v9 = (void *)a2;
    v10 = a4 - (_QWORD)a3;
    while ( v8 < 3 )
    {
      v11 = AslStringReplace(&v15, (__int64)v9, *v5, *(const wchar_t **)((char *)v5 + v10));
      if ( (void *)a2 != v9 )
        AslFree(NtCurrentPeb()->ProcessHeap, v9);
      if ( v11 < 0 )
      {
        AslLogCallPrintf(1LL, "AslStringReplaceArray", 1544LL, "AslStringReplace failed [%x]", v11);
        return (unsigned int)v11;
      }
      v4 = v15;
      ++v8;
      v9 = v15;
      ++v5;
    }
    *a1 = v4;
  }
  else
  {
    v13 = AslStringDuplicate(a1, a2);
    v11 = v13;
    if ( v13 < 0 )
    {
      v14 = v13;
      AslLogCallPrintf(1LL, "AslStringReplaceArray", 1504LL, "AslStringDuplicate failed with \"%ws\" [%x]", a2, v14);
      return (unsigned int)v11;
    }
  }
  return 0;
}
