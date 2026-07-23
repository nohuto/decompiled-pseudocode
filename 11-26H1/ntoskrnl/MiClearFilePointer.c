/*
 * XREFs of MiClearFilePointer @ 0x1402EDC78
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x1402EDB60 (MiCheckForControlAreaDeletion.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiMarkControlAreaDeleted @ 0x140486A28 (MiMarkControlAreaDeleted.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiClearFilePointer(__int64 a1)
{
  int v1; // ebx
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x80000) == 0 )
  {
    *(_DWORD *)(a1 + 56) = v1 | 0x80000;
    v2 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2C940);
    v3 = *(_QWORD **)(v2 + 40);
    if ( (v1 & 0x20) != 0 )
      v3[2] = 0LL;
    else
      *v3 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
  }
}
