/*
 * XREFs of BgpConsoleGetCursorState @ 0x140C56340
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *NormalContext; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
  v7 = 0;
  if ( WheapPfaLock.SchedulerApc.NormalContext )
  {
    *a1 = *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 17);
    *a2 = NormalContext[18];
    *a3 = NormalContext[19];
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
