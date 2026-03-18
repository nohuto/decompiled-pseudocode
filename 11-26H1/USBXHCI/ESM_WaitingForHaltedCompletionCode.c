/*
 * XREFs of ESM_WaitingForHaltedCompletionCode @ 0x14003D560
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_Start2SecondTimer @ 0x14001EFB0 (Endpoint_SM_Start2SecondTimer.c)
 */

__int64 __fastcall ESM_WaitingForHaltedCompletionCode(__int64 a1)
{
  Endpoint_SM_Start2SecondTimer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
