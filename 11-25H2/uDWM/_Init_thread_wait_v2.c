/*
 * XREFs of _Init_thread_wait_v2 @ 0x18009AF60
 * Callers:
 *     _Init_thread_header @ 0x18009AEB0 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_180118E90 )
  {
    qword_180118E90(&unk_180118E58, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
