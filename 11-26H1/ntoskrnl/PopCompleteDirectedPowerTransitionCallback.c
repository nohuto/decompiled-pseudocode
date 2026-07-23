/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x1404AB64C
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1406075B8 (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x140B5D89C (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1404AB6C8 (PopCompleteNotifyTransitionCommon.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
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
