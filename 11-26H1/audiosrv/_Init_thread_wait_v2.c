/*
 * XREFs of _Init_thread_wait_v2 @ 0x1800B296C
 * Callers:
 *     _Init_thread_header @ 0x1800B28B8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1801D5F18 )
  {
    qword_1801D5F18(&unk_1801D5EE0, &stru_1801D5EF0, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1801D5EF0);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1801D5EF0);
  }
}
