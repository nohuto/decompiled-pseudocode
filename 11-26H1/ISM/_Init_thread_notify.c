/*
 * XREFs of _Init_thread_notify @ 0x18009B060
 * Callers:
 *     _Init_thread_abort @ 0x18009AF50 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18009AF8C (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1802533B8 )
    return qword_1802533B8(&unk_180253378);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
