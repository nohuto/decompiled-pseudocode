/*
 * XREFs of RtlStartRXact @ 0x1801019D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlStartRXact(__int64 a1)
{
  _DWORD *Heap_0; // rax

  if ( *(_QWORD *)(a1 + 24) )
    return 3221225756LL;
  Heap_0 = (_DWORD *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 3221225495LL;
  *Heap_0 = 0;
  Heap_0[1] = 0x4000;
  Heap_0[2] = 16;
  *(_QWORD *)(a1 + 24) = Heap_0;
  return 0LL;
}
