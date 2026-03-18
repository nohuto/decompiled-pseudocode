/*
 * XREFs of VmpFaultEntryRemove @ 0x1406C0F34
 * Callers:
 *     VmpAccessFaultBatch @ 0x1406C09D0 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 */

void __fastcall VmpFaultEntryRemove(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  KIRQL v6; // r14

  v4 = a2;
  v5 = a2 + 48LL * a3;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  while ( v4 < v5 )
  {
    RtlRbRemoveNode(a1 + 96, v4);
    v4 += 48LL;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112), v6);
}
