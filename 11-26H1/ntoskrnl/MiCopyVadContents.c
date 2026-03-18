/*
 * XREFs of MiCopyVadContents @ 0x1404673AC
 * Callers:
 *     MiDeleteEmptyPageTableCommit @ 0x140467190 (MiDeleteEmptyPageTableCommit.c)
 *     MiAllocateChildVads @ 0x140961AD0 (MiAllocateChildVads.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 */

void *__fastcall MiCopyVadContents(__int64 a1, _DWORD *a2)
{
  char v3; // bl
  void *result; // rax

  v3 = *(_BYTE *)(a1 + 68);
  result = RtlCopyVolatileMemory((void *)a1, a2, (-(__int64)((a2[12] & 0x80000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 144);
  *(_BYTE *)(a1 + 68) = v3;
  *(_QWORD *)(a1 + 16) = -2LL;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
