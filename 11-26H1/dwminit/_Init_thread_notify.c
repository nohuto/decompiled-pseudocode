/*
 * XREFs of _Init_thread_notify @ 0x1800027D4
 * Callers:
 *     _Init_thread_footer @ 0x180002700 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_18001A4D8 )
    return qword_18001A4D8(&unk_18001A498);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
