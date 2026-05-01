/*
 * XREFs of _Init_thread_notify @ 0x1802CDF90
 * Callers:
 *     _Init_thread_abort @ 0x1802CDE80 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1808D9758 )
    return qword_1808D9758(&unk_1808D9718);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
