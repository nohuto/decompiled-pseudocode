/*
 * XREFs of _Init_thread_wait_v2 @ 0x18000281C
 * Callers:
 *     _Init_thread_header @ 0x180002768 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_18001A4D0 )
  {
    qword_18001A4D0(&unk_18001A498, &stru_18001A4A8, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_18001A4A8);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_18001A4A8);
  }
}
