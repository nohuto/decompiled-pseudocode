/*
 * XREFs of _Init_thread_notify @ 0x18002FFA4
 * Callers:
 *     _Init_thread_footer @ 0x18002FED0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_180067FD8 )
    return qword_180067FD8(&unk_180067F98);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
