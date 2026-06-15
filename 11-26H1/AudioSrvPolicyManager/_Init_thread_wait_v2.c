/*
 * XREFs of _Init_thread_wait_v2 @ 0x18002FFEC
 * Callers:
 *     _Init_thread_header @ 0x18002FF38 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_180067FD0 )
  {
    qword_180067FD0(&unk_180067F98, &stru_180067FA8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_180067FA8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_180067FA8);
  }
}
