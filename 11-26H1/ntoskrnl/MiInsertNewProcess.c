/*
 * XREFs of MiInsertNewProcess @ 0x1404D119C
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140963A54 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiInsertNewProcess(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_140E36080);
  v3 = (_QWORD *)qword_140E2D620;
  v4 = (_QWORD *)(a1 + 1344);
  if ( *(__int64 **)qword_140E2D620 != &qword_140E2D618 )
    __fastfail(3u);
  v4[1] = qword_140E2D620;
  *v4 = &qword_140E2D618;
  *v3 = v4;
  qword_140E2D620 = (__int64)v4;
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36080);
  else
    ExReleaseSpinLockExclusive(&dword_140E36080, v2);
}
