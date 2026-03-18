/*
 * XREFs of MiFlowThroughRemoveNode @ 0x14031D554
 * Callers:
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 */

void __fastcall MiFlowThroughRemoveNode(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 188) & 0x400400) == 0x400000 && *(_QWORD *)(a1 + 216) != -1LL )
  {
    v2 = *(_QWORD *)(a1 + 192);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 200));
    RtlRbRemoveNode(v2 + 208, a1 + 200);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 200));
    *(_QWORD *)(a1 + 216) = -1LL;
  }
}
