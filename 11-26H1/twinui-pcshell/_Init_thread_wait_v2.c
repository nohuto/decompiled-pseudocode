/*
 * XREFs of _Init_thread_wait_v2 @ 0x1802CDFD8
 * Callers:
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1808D9750 )
  {
    qword_1808D9750(&unk_1808D9718, &stru_1808D9728, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1808D9728);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1808D9728);
  }
}
