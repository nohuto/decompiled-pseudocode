/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x14048AFAC
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402EE280 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x1402EF490 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x14052CA98 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 */

char __fastcall MiLockProbePacketWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char result; // al

  *(_DWORD *)(a1 + 104) &= ~1u;
  v4 = *(_QWORD *)(a1 + 112);
  if ( KeGetCurrentIrql() == 2 )
  {
    *(_BYTE *)(a1 + 72) = 17;
    return MiLockWorkingSetSharedAtDpc(v4);
  }
  else
  {
    result = MiLockWorkingSetShared(v4, a2, a3);
    *(_BYTE *)(a1 + 72) = result;
  }
  return result;
}
