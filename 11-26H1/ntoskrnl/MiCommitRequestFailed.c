/*
 * XREFs of MiCommitRequestFailed @ 0x140B64818
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     KeRequestTerminationProcess @ 0x1407BCFA8 (KeRequestTerminationProcess.c)
 *     MiLogCommitRequestFailed @ 0x140881BEC (MiLogCommitRequestFailed.c)
 */

void __fastcall MiCommitRequestFailed(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d

  CurrentThread = KeGetCurrentThread();
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000001000LL) )
  {
    MiLogCommitRequestFailed(v3, a1, v4, v5);
  }
  if ( CurrentThread->ApcStateIndex != 1
    && (CurrentThread->MiscFlags & 0x400) == 0
    && (*(_DWORD *)(a1 + 500) & 0x100) != 0 )
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 1);
  }
}
