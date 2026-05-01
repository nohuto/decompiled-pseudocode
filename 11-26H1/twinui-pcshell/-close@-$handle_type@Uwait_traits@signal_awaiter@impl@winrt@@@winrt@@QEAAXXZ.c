/*
 * XREFs of ?close@?$handle_type@Uwait_traits@signal_awaiter@impl@winrt@@@winrt@@QEAAXXZ @ 0x180330CA8
 * Callers:
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180330DCC (-create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     CloseThreadpoolWait_0 @ 0x1802CA607 (CloseThreadpoolWait_0.c)
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
