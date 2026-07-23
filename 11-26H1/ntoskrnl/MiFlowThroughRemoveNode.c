/*
 * XREFs of MiFlowThroughRemoveNode @ 0x14031F584
 * Callers:
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall MiFlowThroughRemoveNode(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 188) & 0x400400) == 0x400000 && *(_QWORD *)(a1 + 216) != -1LL )
  {
    v2 = *(_QWORD *)(a1 + 192);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 200));
    RtlRbRemoveNode((PRTL_RB_TREE)(v2 + 208), (PRTL_BALANCED_NODE)(a1 + 200));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 200));
    *(_QWORD *)(a1 + 216) = -1LL;
  }
}
