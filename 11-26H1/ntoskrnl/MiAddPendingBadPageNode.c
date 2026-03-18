/*
 * XREFs of MiAddPendingBadPageNode @ 0x1406F0BC0
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x1406F1D98 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x14030CA60 (RtlAvlInsertNodeEx.c)
 */

void __fastcall MiAddPendingBadPageNode(unsigned __int64 a1, _QWORD *a2)
{
  bool v2; // bl
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v2 = 0;
  if ( a2 )
    a2[3] = a1;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EB10);
  if ( !a2 )
  {
    ++qword_140E2EB18;
    goto LABEL_13;
  }
  v5 = (_QWORD *)qword_140E2EB00;
  if ( !qword_140E2EB00 )
    goto LABEL_11;
  while ( a1 < v5[3] )
  {
    v6 = (_QWORD *)*v5;
    if ( !*v5 )
      goto LABEL_11;
LABEL_9:
    v5 = v6;
  }
  v6 = (_QWORD *)v5[1];
  if ( v6 )
    goto LABEL_9;
  v2 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2EB00, (unsigned __int64)v5, v2, a2);
LABEL_13:
  ++qword_140E2EB08;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB10);
}
