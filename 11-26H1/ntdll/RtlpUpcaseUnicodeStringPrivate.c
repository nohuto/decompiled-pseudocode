/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x180021E90
 * Callers:
 *     RtlIsNameInExpression @ 0x1800217D0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180022770 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // ebx
  PVOID Heap_0; // rax
  unsigned int v8; // r11d
  __int16 v9; // ax
  __int64 v10; // r10

  v4 = qword_1801C5038;
  v5 = *a2;
  *(_WORD *)(a1 + 2) = v5;
  v6 = 0;
  if ( (_WORD)v5 )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
    *(_QWORD *)(a1 + 8) = Heap_0;
    if ( !Heap_0 )
      return 3221225495LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v8 = *a2 >> 1;
  while ( v6 < v8 )
  {
    v9 = NLS_UPCASE(v4, *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v6));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v10) = v9;
    ++v6;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
