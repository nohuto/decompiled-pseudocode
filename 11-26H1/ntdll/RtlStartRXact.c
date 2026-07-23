/*
 * XREFs of RtlStartRXact @ 0x180101120
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlStartRXact(__int64 a1)
{
  _DWORD *Heap_0; // rax

  if ( *(_QWORD *)(a1 + 24) )
    return 3221225756LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x4000uLL);
  if ( !Heap_0 )
    return 3221225495LL;
  *Heap_0 = 0;
  Heap_0[1] = 0x4000;
  Heap_0[2] = 16;
  *(_QWORD *)(a1 + 24) = Heap_0;
  return 0LL;
}
