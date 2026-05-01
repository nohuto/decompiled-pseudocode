/*
 * XREFs of ?close@?$handle_type@Uwait_traits@signal_awaiter@impl@winrt@@@winrt@@QEAAXXZ @ 0x180331CEC
 * Callers:
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180331D60 (-create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     CloseThreadpoolWait_0 @ 0x1802D36E7 (CloseThreadpoolWait_0.c)
 */

void __fastcall winrt::handle_type<winrt::impl::signal_awaiter::wait_traits>::close(struct _TP_WAIT **a1)
{
  struct _TP_WAIT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    CloseThreadpoolWait_0(v2);
    *a1 = 0LL;
  }
}
