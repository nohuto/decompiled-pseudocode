/*
 * XREFs of NtKSTWait @ 0x140065900
 * Callers:
 *     <none>
 * Callees:
 *     IsKSTThread @ 0x1400659B0 (IsKSTThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     UserKSTWait @ 0x1400F0898 (UserKSTWait.c)
 */

__int64 NtKSTWait()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned __int8)IsKSTThread() )
    return (unsigned int)UserKSTWait();
  else
    UserSetLastError(5LL);
  return v0;
}
