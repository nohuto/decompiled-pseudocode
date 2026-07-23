/*
 * XREFs of MiCheckPageFileMapping @ 0x1406FD98C
 * Callers:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  unsigned int v1; // ebx
  KIRQL v4; // dl
  _QWORD *v5; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v4 = ExAcquireSpinLockExclusive(&dword_140E2C940);
  v5 = *(_QWORD **)(a1 + 40);
  if ( v5 && (*v5 || v5[2]) )
    v1 = -1073741747;
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
  else
    ExReleaseSpinLockExclusive(&dword_140E2C940, v4);
  return v1;
}
