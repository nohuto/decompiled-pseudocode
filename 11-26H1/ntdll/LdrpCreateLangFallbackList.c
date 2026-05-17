/*
 * XREFs of LdrpCreateLangFallbackList @ 0x180039130
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180001AEC (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall LdrpCreateLangFallbackList(unsigned int **a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rax
  __int16 v8; // si
  __int64 result; // rax
  unsigned int v10; // edi
  unsigned int *Heap_0; // rax
  unsigned int *v12; // rdx

  if ( !a2 || !a1 )
    return 3221225485LL;
  v7 = 4LL;
  if ( a3 >= 1 )
    v7 = (unsigned int)a3;
  v8 = v7;
  if ( (unsigned __int64)(6 * v7) <= 0xFFFFFFFF
    && (v10 = 6 * v7 + 64, v10 >= 0x40)
    && (Heap_0 = (unsigned int *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v10), (v12 = Heap_0) != 0LL) )
  {
    *Heap_0 = v10;
    result = 0LL;
    *((_WORD *)v12 + 3) = v8;
    *((_WORD *)v12 + 2) = 0;
    v12[10] = 0;
    *((_BYTE *)v12 + 8) = a4;
    *((_QWORD *)v12 + 3) = v12 + 16;
    *((_QWORD *)v12 + 2) = a2;
    *a1 = v12;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
  return result;
}
