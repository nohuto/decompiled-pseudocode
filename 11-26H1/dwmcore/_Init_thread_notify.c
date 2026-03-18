/*
 * XREFs of _Init_thread_notify @ 0x180220C24
 * Callers:
 *     _Init_thread_footer @ 0x180220B50 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1803DD598 )
    return qword_1803DD598(&unk_1803DD558);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
