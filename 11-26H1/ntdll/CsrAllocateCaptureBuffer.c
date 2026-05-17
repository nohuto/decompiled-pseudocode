/*
 * XREFs of CsrAllocateCaptureBuffer @ 0x1800CA9E0
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800CA6BC (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x1800CA790 (CsrCaptureMessageMultiUnicodeStringsInPlace.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall CsrAllocateCaptureBuffer(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  _DWORD *Heap_0; // rax
  _DWORD *v5; // rdi
  _DWORD *result; // rax

  v2 = a1;
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( a1 > 0xFFFFFFF )
    return 0LL;
  if ( a2 >= 0x7FFFFFDC )
    return 0LL;
  if ( 8 * a1 >= 2147483612 - a2 )
    return 0LL;
  if ( a1 + 1 >= (2147483612 - a2 - 8 * a1) / 3 )
    return 0LL;
  v3 = (a2 + 35 + 11 * a1) & 0xFFFFFFFC;
  Heap_0 = (_DWORD *)RtlAllocateHeap_0();
  v5 = Heap_0;
  if ( !Heap_0 )
    return 0LL;
  *Heap_0 = v3;
  Heap_0[4] = 0;
  memset_thunk_772440563353939046(Heap_0 + 8, 0, 8 * v2);
  result = v5;
  *((_QWORD *)v5 + 3) = &v5[2 * v2 + 8];
  return result;
}
