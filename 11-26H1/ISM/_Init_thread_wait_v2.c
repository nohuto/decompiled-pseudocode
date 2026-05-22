/*
 * XREFs of _Init_thread_wait_v2 @ 0x18009B0A8
 * Callers:
 *     _Init_thread_header @ 0x18009AFF4 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1802533B0 )
  {
    qword_1802533B0(&unk_180253378, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
