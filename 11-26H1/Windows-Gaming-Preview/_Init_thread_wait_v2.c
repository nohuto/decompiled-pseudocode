/*
 * XREFs of _Init_thread_wait_v2 @ 0x1800025EC
 * Callers:
 *     _Init_thread_header @ 0x180002538 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_180059630 )
  {
    qword_180059630(&unk_1800595F8, &stru_180059608, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_180059608);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_180059608);
  }
}
