/*
 * XREFs of RtlIdnToAscii @ 0x1800AEBB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AE5B0 (RtlpNameprepAsciiRealWorker.c)
 */

__int64 __fastcall RtlIdnToAscii(int a1, unsigned __int16 *a2, int a3, void *a4, int *a5)
{
  wchar_t *Heap_0; // rbx
  _WORD *v10; // rax
  _WORD *v11; // rdi
  unsigned int v12; // esi
  __int64 v14; // [rsp+38h] [rbp-40h]

  Heap_0 = (wchar_t *)RtlAllocateHeap_0();
  v10 = (_WORD *)RtlAllocateHeap_0();
  v11 = v10;
  if ( Heap_0 && v10 )
  {
    v12 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, 1, Heap_0, v14, v10);
  }
  else
  {
    v12 = -1073741801;
    if ( !Heap_0 )
      goto LABEL_6;
  }
  RtlFreeHeap_0();
LABEL_6:
  if ( v11 )
    RtlFreeHeap_0();
  return v12;
}
