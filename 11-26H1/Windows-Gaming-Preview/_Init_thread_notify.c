/*
 * XREFs of _Init_thread_notify @ 0x1800025A4
 * Callers:
 *     _Init_thread_footer @ 0x1800024D0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180059638 )
    return qword_180059638(&unk_1800595F8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
