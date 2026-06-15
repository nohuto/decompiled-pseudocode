/*
 * XREFs of _Init_thread_notify @ 0x1800B2924
 * Callers:
 *     _Init_thread_footer @ 0x1800B2850 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1801D5F20 )
    return qword_1801D5F20(&unk_1801D5EE0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
