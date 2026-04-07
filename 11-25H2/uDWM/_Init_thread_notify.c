/*
 * XREFs of _Init_thread_notify @ 0x18009AF18
 * Callers:
 *     _Init_thread_abort @ 0x18009AE10 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18009AE48 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180118E98 )
    return qword_180118E98(&unk_180118E58);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
