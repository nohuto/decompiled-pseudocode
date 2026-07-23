/*
 * XREFs of PspDeletePartition @ 0x140803A00
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PspRemovePartitionFromGlobalList @ 0x1406199DC (PspRemovePartitionFromGlobalList.c)
 */

void __fastcall PspDeletePartition(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9

  v1 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( v1 )
    KeBugCheckEx(0x18Eu, 0LL, BugCheckParameter2, v1, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 56) )
    PspRemovePartitionFromGlobalList(BugCheckParameter2);
}
