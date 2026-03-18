/*
 * XREFs of MiCommitRequestFailed @ 0x140B61778
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1409C7944 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     KeRequestTerminationProcess @ 0x1407B9F48 (KeRequestTerminationProcess.c)
 *     MiLogCommitRequestFailed @ 0x14087B7EC (MiLogCommitRequestFailed.c)
 */

void __fastcall MiCommitRequestFailed(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d

  CurrentThread = KeGetCurrentThread();
  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 0x400000001000LL) )
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
