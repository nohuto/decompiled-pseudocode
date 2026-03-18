/*
 * XREFs of ??1?$CSparseAlignedStorage@$07$07@@QEAA@XZ @ 0x18019D4FC
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall CSparseAlignedStorage<8,8>::~CSparseAlignedStorage<8,8>(void **a1)
{
  void *v1; // rbx
  void *v2; // rax
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  v2 = &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage;
  if ( *a1 != &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage && v1 )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v2) = HeapFree(ProcessHeap, 0, v1);
  }
  return (int)v2;
}
