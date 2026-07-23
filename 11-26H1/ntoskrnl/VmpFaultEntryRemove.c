/*
 * XREFs of VmpFaultEntryRemove @ 0x1406C4B14
 * Callers:
 *     VmpAccessFaultBatch @ 0x1406C45B0 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall VmpFaultEntryRemove(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v4; // rbx
  unsigned __int64 v5; // rdi
  KIRQL v6; // r14

  v4 = a2;
  v5 = (unsigned __int64)&a2[2 * a3];
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  while ( (unsigned __int64)v4 < v5 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), v4);
    v4 += 2;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112), v6);
}
