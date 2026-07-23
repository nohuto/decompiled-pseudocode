/*
 * XREFs of MiCopyVadContents @ 0x140460AFC
 * Callers:
 *     MiDeleteEmptyPageTableCommit @ 0x1404608E0 (MiDeleteEmptyPageTableCommit.c)
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
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
