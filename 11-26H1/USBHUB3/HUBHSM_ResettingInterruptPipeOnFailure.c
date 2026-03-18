/*
 * XREFs of HUBHSM_ResettingInterruptPipeOnFailure @ 0x140009D20
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_ResetInterruptPipe @ 0x140007E8C (HUBPARENT_ResetInterruptPipe.c)
 */

__int64 __fastcall HUBHSM_ResettingInterruptPipeOnFailure(__int64 a1)
{
  HUBPARENT_ResetInterruptPipe(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
