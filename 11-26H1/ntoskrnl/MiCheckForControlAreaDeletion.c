/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x14030BAE0
 * Callers:
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x14030A130 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiClearFilePointer @ 0x14030BBF8 (MiClearFilePointer.c)
 *     MiUnlinkUnusedControlArea @ 0x14030BD54 (MiUnlinkUnusedControlArea.c)
 *     MiDecrementControlAreaCount @ 0x1404AFCD0 (MiDecrementControlAreaCount.c)
 */

void __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx

  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) && (*(_DWORD *)(a1 + 56) & 1) == 0 )
  {
    v2 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
    *(_DWORD *)(a1 + 56) |= 1u;
    MiClearFilePointer(a1);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 2120)) <= 1 )
      __fastfail(0xEu);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 2112));
    if ( (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 )
      MiUnlinkUnusedControlArea(a1);
    v3 = *(_QWORD **)(v2 + 2456);
    v4 = (_QWORD *)(a1 + 8);
    if ( *v3 != v2 + 2448 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 16) = v3;
    *v4 = v2 + 2448;
    *v3 = v4;
    *(_QWORD *)(v2 + 2456) = v4;
    *(_DWORD *)(a1 + 56) |= 0x40000000u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 2112));
    KeSetEvent((PRKEVENT)(v2 + 2296), 0, 0);
    MiDecrementControlAreaCount(v2, v2 + 2120);
  }
}
