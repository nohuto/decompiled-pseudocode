/*
 * XREFs of MiProcessCommitIntact @ 0x140445A40
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140534C74 (MiIsVadEligibleForCommitRelease.c)
 */

__int64 __fastcall MiProcessCommitIntact(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _KPROCESS *Process; // rdx
  unsigned int *p_FreezeCount; // r8
  struct _LIST_ENTRY *Address; // rax

  v1 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ContextSwitches & 0xF) == 1 )
    p_FreezeCount = (unsigned int *)&unk_140E379A0;
  else
    p_FreezeCount = &Process[2].FreezeCount;
  if ( (HIBYTE(LODWORD(Process[2].ContextSwitches)) & 0x30) == 0x30
    && *(_QWORD *)p_FreezeCount
    && a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1u, (__int64)Process, (__int64)p_FreezeCount);
    Address = MiLocateAddress(a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
      v1 = 0;
    MiUnlockVadTree(1, 0x11u);
  }
  return v1;
}
