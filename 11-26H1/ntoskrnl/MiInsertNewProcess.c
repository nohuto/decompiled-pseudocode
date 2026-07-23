/*
 * XREFs of MiInsertNewProcess @ 0x1404CABCC
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140ABF810 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiInsertNewProcess(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = ExAcquireSpinLockExclusive(&dword_140E36200);
  v3 = (_QWORD *)qword_140E2D7A0;
  v4 = (_QWORD *)(a1 + 1344);
  if ( *(__int64 **)qword_140E2D7A0 != &qword_140E2D798 )
    __fastfail(3u);
  v4[1] = qword_140E2D7A0;
  *v4 = &qword_140E2D798;
  *v3 = v4;
  qword_140E2D7A0 = (__int64)v4;
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
  else
    ExReleaseSpinLockExclusive(&dword_140E36200, v2);
}
