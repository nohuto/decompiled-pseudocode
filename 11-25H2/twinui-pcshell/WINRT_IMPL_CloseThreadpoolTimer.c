/*
 * XREFs of WINRT_IMPL_CloseThreadpoolTimer @ 0x1802D34B0
 * Callers:
 *     ?close@?$handle_type@Utimer_traits@timespan_awaiter@impl@winrt@@@winrt@@QEAAXXZ @ 0x18033A504 (-close@-$handle_type@Utimer_traits@timespan_awaiter@impl@winrt@@@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_IMPL_CloseThreadpoolTimer(PTP_TIMER pti)
{
  CloseThreadpoolTimer(pti);
}
