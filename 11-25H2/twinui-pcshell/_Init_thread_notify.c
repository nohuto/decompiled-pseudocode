/*
 * XREFs of _Init_thread_notify @ 0x1802D5968
 * Callers:
 *     _Init_thread_abort @ 0x1802D5860 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1808990D8 )
    return qword_1808990D8(&unk_180899098);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
