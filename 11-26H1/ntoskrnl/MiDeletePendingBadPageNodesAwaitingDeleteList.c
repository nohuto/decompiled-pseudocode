/*
 * XREFs of MiDeletePendingBadPageNodesAwaitingDeleteList @ 0x1406F0E50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void MiDeletePendingBadPageNodesAwaitingDeleteList()
{
  KIRQL i; // al
  _QWORD *v1; // rdx
  PVOID *v2; // rcx
  PVOID v3; // rbx

  for ( i = ExAcquireSpinLockExclusive(&dword_140E2EB10); ; i = ExAcquireSpinLockExclusive(&dword_140E2EB10) )
  {
    v3 = qword_140E2EB20;
    if ( qword_140E2EB20 == &qword_140E2EB20 )
      break;
    v1 = *(_QWORD **)qword_140E2EB20;
    if ( *(PVOID *)(*(_QWORD *)qword_140E2EB20 + 8LL) != qword_140E2EB20
      || (v2 = (PVOID *)*((_QWORD *)qword_140E2EB20 + 1), *v2 != qword_140E2EB20) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    v1[1] = v2;
    --qword_140E2EB30;
    if ( i == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB10);
    else
      ExReleaseSpinLockExclusive(&dword_140E2EB10, i);
    ExFreePoolWithTag(v3, 0);
  }
  byte_140E2EB38 = 0;
  if ( i == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB10);
  else
    ExReleaseSpinLockExclusive(&dword_140E2EB10, i);
}
