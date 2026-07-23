/*
 * XREFs of BgpConsoleGetState @ 0x140C563B0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgpConsoleGetState(_DWORD *a1)
{
  _DWORD *NormalContext; // rdx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
  v3 = 0;
  if ( WheapPfaLock.SchedulerApc.NormalContext )
  {
    *a1 = *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 5);
    a1[1] = NormalContext[6];
    a1[2] = *NormalContext;
    a1[3] = NormalContext[1];
    a1[4] = NormalContext[12];
    a1[5] = NormalContext[13];
    a1[6] = NormalContext[15];
    a1[7] = NormalContext[16];
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
