/*
 * XREFs of MiCreateNewProcessTopLevelMappings @ 0x1404CF654
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCopyTopLevelMappings @ 0x140342188 (MiCopyTopLevelMappings.c)
 */

void __fastcall MiCreateNewProcessTopLevelMappings(__int64 a1, __int64 a2)
{
  KIRQL v4; // si
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf

  v4 = ExAcquireSpinLockExclusive(&dword_140E36080);
  MiCopyTopLevelMappings(a1, a2);
  v5 = (_QWORD *)qword_140E2D620;
  v6 = (_QWORD *)(a1 + 1344);
  if ( *(__int64 **)qword_140E2D620 != &qword_140E2D618 )
    __fastfail(3u);
  *v6 = &qword_140E2D618;
  *(_QWORD *)(a1 + 1352) = v5;
  v7 = a2 << 12;
  v8 = KiFlushPcid == 0;
  *v5 = v6;
  qword_140E2D620 = a1 + 1344;
  if ( !v8 )
    v7 |= 2uLL;
  *(_QWORD *)(a1 + 40) = v7;
  _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x800u);
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36080);
  else
    ExReleaseSpinLockExclusive(&dword_140E36080, v4);
}
