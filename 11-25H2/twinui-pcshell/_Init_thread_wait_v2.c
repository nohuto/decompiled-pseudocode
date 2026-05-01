/*
 * XREFs of _Init_thread_wait_v2 @ 0x1802D59B0
 * Callers:
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1808990D0 )
  {
    qword_1808990D0(&unk_180899098, &stru_1808990A8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1808990A8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1808990A8);
  }
}
