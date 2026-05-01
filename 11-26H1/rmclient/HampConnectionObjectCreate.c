/*
 * XREFs of HampConnectionObjectCreate @ 0x18000C5C0
 * Callers:
 *     HamCreateExtendedExecution @ 0x18000C490 (HamCreateExtendedExecution.c)
 *     HamAssociateActivityContext @ 0x180018A30 (HamAssociateActivityContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampConnectionObjectCreate(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *Heap; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( !Heap )
    return 3221225495LL;
  *Heap = 0LL;
  Heap[1] = 0LL;
  Heap[2] = 0LL;
  Heap[3] = 0LL;
  Heap[4] = 0LL;
  Heap[5] = a2 + 24;
  Heap[7] = a1;
  Heap[6] = -1LL;
  *a3 = Heap;
  return 0LL;
}
