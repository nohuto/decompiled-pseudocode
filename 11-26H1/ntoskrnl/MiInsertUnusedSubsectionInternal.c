/*
 * XREFs of MiInsertUnusedSubsectionInternal @ 0x1403704C4
 * Callers:
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402EC1B0 (MiDereferenceControlAreaPfnList.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiFlushRelease @ 0x14036F2C0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSection @ 0x14036F4F0 (MiRemoveViewsFromSection.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MiDecrementSubsections @ 0x140370100 (MiDecrementSubsections.c)
 *     MmPurgeSection @ 0x14039E9D4 (MmPurgeSection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsection @ 0x14046D4A0 (MiDecrementSubsection.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiMarkSubsectionsDynamic @ 0x1406FCDB4 (MiMarkSubsectionsDynamic.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSubsectionCharges @ 0x14037065C (MiReleaseSubsectionCharges.c)
 */

__int64 __fastcall MiInsertUnusedSubsectionInternal(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v5; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rax

  v2 = 0;
  v5 = *(unsigned int *)(a1 + 44);
  v6 = 8 * v5;
  v7 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  if ( (unsigned __int64)(8 * v5) <= 0xFE0 )
  {
    v8 = v6 + 31;
LABEL_3:
    v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_4;
  }
  if ( v6 < 0x10000 && ((8 * (_WORD)v5) & 0xFFFu) <= 0xFC0 )
  {
    v8 = v6 + 15;
    goto LABEL_3;
  }
  v9 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_4:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 2112));
  *(_DWORD *)(a1 + 32) |= 0x80000u;
  *(_QWORD *)(v7 + 2440) += v9;
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E2C950.Header.WaitListHead.Flink, v9);
  v10 = MiReleaseSubsectionCharges(a1);
  v11 = v7 + 2448;
  v12 = v10;
  v13 = (_QWORD *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 104) )
  {
    v14 = v7 + 2464;
    if ( a2 )
      v14 = *(_QWORD *)(a2 + 24);
    v15 = *(_QWORD **)(v14 + 8);
    if ( *v15 != v14 )
LABEL_8:
      __fastfail(3u);
    *v13 = v14;
    *(_QWORD *)(a1 + 96) = v15;
    *v15 = v13;
    *(_QWORD *)(v14 + 8) = v13;
  }
  else
  {
    v16 = *(_QWORD **)(v7 + 2456);
    if ( *v16 != v11 )
      goto LABEL_8;
    *v13 = v11;
    *(_QWORD *)(a1 + 96) = v16;
    *v16 = v13;
    *(_QWORD *)(v7 + 2456) = v13;
    *(_QWORD *)(v7 + 2192) += v5;
    if ( *(_QWORD *)(v7 + 2192) >= 0x20000uLL )
      v2 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 2112));
  if ( v2 )
    KeSetEvent((PRKEVENT)(v7 + 2144), 0, 0);
  return v12;
}
