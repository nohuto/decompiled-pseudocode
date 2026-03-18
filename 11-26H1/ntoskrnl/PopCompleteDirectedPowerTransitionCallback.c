/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x1404B2140
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x140604AB8 (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x140B5A580 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1404B21BC (PopCompleteNotifyTransitionCommon.c)
 *     PoFxIdleDevice @ 0x1404B2604 (PoFxIdleDevice.c)
 */

LONG __fastcall PopCompleteDirectedPowerTransitionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v6; // esi

  v4 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( (int)a3 < 0 )
    v4 = *(_QWORD *)(a1 + 96);
  PopCompleteNotifyTransitionCommon(a2, *(_QWORD *)(a1 + 48) + 160LL, a3, v4);
  if ( *(_BYTE *)a2 == 2 && v6 == 1 )
    PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
  return KeReleaseSemaphore(*(PRKSEMAPHORE *)(a2 + 40), 0, 1, 0);
}
