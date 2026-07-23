/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x1800ADDE0
 * Callers:
 *     RtlIdnToNameprepUnicode @ 0x1801480F0 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AD6E0 (RtlpNameprepAsciiRealWorker.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, unsigned __int16 *a2, int a3, void *a4, int *a5, char a6)
{
  wchar_t *Heap_0; // rbx
  _WORD *v11; // rax
  void *v12; // rdi
  unsigned int v13; // esi
  __int64 v15; // [rsp+38h] [rbp-40h]

  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v11 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
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
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
LABEL_6:
  if ( v12 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v12);
  return v13;
}
