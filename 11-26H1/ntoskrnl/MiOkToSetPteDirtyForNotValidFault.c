/*
 * XREFs of MiOkToSetPteDirtyForNotValidFault @ 0x14038DDEC
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiPromoteVirtualizationFault @ 0x1407044DC (MiPromoteVirtualizationFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiOkToSetPteDirtyForNotValidFault(__int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rdx
  void **AutoBoostState2; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a2 < 0x7FFFFFFF0000LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( a1 >= 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 )
      return 0;
    AutoBoostState2 = (void **)Process[4].AutoBoostState2;
    if ( AutoBoostState2 )
    {
      if ( AutoBoostState2[3] != AutoBoostState2 + 3 )
        return 0;
    }
  }
  return result;
}
