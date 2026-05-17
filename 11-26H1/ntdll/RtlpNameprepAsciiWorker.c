/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x1800AECB0
 * Callers:
 *     RtlIdnToNameprepUnicode @ 0x180148240 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AE5B0 (RtlpNameprepAsciiRealWorker.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, unsigned __int16 *a2, int a3, void *a4, int *a5, char a6)
{
  wchar_t *Heap_0; // rbx
  _WORD *v11; // rax
  _WORD *v12; // rdi
  unsigned int v13; // esi
  __int64 v15; // [rsp+38h] [rbp-40h]

  Heap_0 = (wchar_t *)RtlAllocateHeap_0();
  v11 = (_WORD *)RtlAllocateHeap_0();
  v12 = v11;
  if ( Heap_0 && v11 )
  {
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, Heap_0, v15, v11);
  }
  else
  {
    v13 = -1073741801;
    if ( !Heap_0 )
      goto LABEL_6;
  }
  RtlFreeHeap_0();
LABEL_6:
  if ( v12 )
    RtlFreeHeap_0();
  return v13;
}
