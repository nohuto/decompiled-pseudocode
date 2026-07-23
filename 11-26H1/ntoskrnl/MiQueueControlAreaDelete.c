/*
 * XREFs of MiQueueControlAreaDelete @ 0x14028D000
 * Callers:
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiDereferenceControlAreaProbe @ 0x140481CEC (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

LONG __fastcall MiQueueControlAreaDelete(__int64 a1)
{
  __int64 v2; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  volatile LONG *v6; // rcx

  v2 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 2112));
  v4 = *(_QWORD **)(v2 + 2520);
  v5 = (_QWORD *)(a1 + 8);
  if ( *v4 != v2 + 2512 )
    __fastfail(3u);
  v5[1] = v4;
  *v5 = v2 + 2512;
  *v4 = v5;
  v6 = (volatile LONG *)(v2 + 2112);
  *(_QWORD *)(v2 + 2520) = v5;
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  else
    ExReleaseSpinLockExclusive(v6, v3);
  return KeSetEvent((PRKEVENT)(v2 + 2528), 0, 0);
}
