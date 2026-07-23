/*
 * XREFs of BgpConsoleSetCursor @ 0x140C56890
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpConsoleDrawCursor @ 0x140C56278 (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *NormalContext; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
  v7 = 0;
  if ( WheapPfaLock.SchedulerApc.NormalContext )
  {
    if ( a1 >= 0x50 || a2 >= *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 1) || a3 > 0x64 )
    {
      v7 = -1073741811;
    }
    else if ( *(_QWORD *)((char *)WheapPfaLock.SchedulerApc.NormalContext + 68) != __PAIR64__(a2, a1)
           || *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 19) != a3 )
    {
      if ( *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 19) )
      {
        *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 19) = 0;
        BgpConsoleDrawCursor();
        NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
      }
      NormalContext[17] = a1;
      NormalContext[18] = a2;
      NormalContext[19] = a3;
      if ( a3 )
        BgpConsoleDrawCursor();
    }
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
