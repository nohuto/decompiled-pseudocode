/*
 * XREFs of NtKSTWait @ 0x1400BD1B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     IsKSTThread @ 0x1400BD2E0 (IsKSTThread.c)
 *     UserKSTWait @ 0x1400BD37C (UserKSTWait.c)
 */

__int64 NtKSTWait()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned __int8)IsKSTThread() )
    return (unsigned int)UserKSTWait();
  else
    UserSetLastError(5);
  return v0;
}
