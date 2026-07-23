/*
 * XREFs of BgpConsoleDisplayString @ 0x140C561C0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140C55F18 (BgpConsoleDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140C58980 (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayString(unsigned __int16 *a1)
{
  _DWORD *NormalContext; // rdx
  int v3; // ebx
  unsigned __int16 v5; // cx
  int v6; // eax

  BgpFwAcquireLock();
  NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
  if ( WheapPfaLock.SchedulerApc.NormalContext )
  {
    if ( a1 )
    {
      if ( *a1 )
      {
        if ( (*((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 2) & 0x10000) != 0 )
        {
          AnFwFadeCompletion();
          NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
          *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 2) &= ~0x10000u;
        }
        v5 = *a1;
        v3 = 0;
        if ( *a1 )
        {
          while ( 1 )
          {
            v6 = BgpConsoleDisplayCharacterEx(
                   v5,
                   NormalContext[17],
                   NormalContext[18],
                   NormalContext[3],
                   NormalContext[4]);
            if ( v6 < 0 && v3 >= 0 )
              v3 = v6;
            v5 = *++a1;
            if ( !*a1 )
              break;
            NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
          }
        }
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return (unsigned int)v3;
}
