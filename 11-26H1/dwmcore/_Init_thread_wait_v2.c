/*
 * XREFs of _Init_thread_wait_v2 @ 0x180220C6C
 * Callers:
 *     _Init_thread_header @ 0x180220BB8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void Init_thread_wait_v2()
{
  if ( qword_1803DD590 )
  {
    qword_1803DD590(&unk_1803DD558, &stru_1803DD568, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&stru_1803DD568);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&stru_1803DD568);
  }
}
