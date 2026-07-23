/*
 * XREFs of MiDeletePendingBadPageNodesAwaitingDeleteList @ 0x1406F5AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void MiDeletePendingBadPageNodesAwaitingDeleteList()
{
  KIRQL i; // al
  _QWORD *v1; // rdx
  PVOID *v2; // rcx
  PVOID v3; // rbx

  for ( i = ExAcquireSpinLockExclusive(&dword_140E2EC90); ; i = ExAcquireSpinLockExclusive(&dword_140E2EC90) )
  {
    v3 = qword_140E2ECA0;
    if ( qword_140E2ECA0 == &qword_140E2ECA0 )
      break;
    v1 = *(_QWORD **)qword_140E2ECA0;
    if ( *(PVOID *)(*(_QWORD *)qword_140E2ECA0 + 8LL) != qword_140E2ECA0
      || (v2 = (PVOID *)*((_QWORD *)qword_140E2ECA0 + 1), *v2 != qword_140E2ECA0) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    v1[1] = v2;
    --qword_140E2ECB0;
    if ( i == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
    else
      ExReleaseSpinLockExclusive(&dword_140E2EC90, i);
    ExFreePoolWithTag(v3, 0);
  }
  byte_140E2ECB8 = 0;
  if ( i == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
  else
    ExReleaseSpinLockExclusive(&dword_140E2EC90, i);
}
