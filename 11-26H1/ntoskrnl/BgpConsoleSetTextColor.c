/*
 * XREFs of BgpConsoleSetTextColor @ 0x140C56940
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(_DWORD *a1, _DWORD *a2)
{
  _DWORD *NormalContext; // rax
  unsigned int v5; // ebx

  BgpFwAcquireLock();
  NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
  v5 = 0;
  if ( WheapPfaLock.SchedulerApc.NormalContext )
  {
    if ( a1 )
      *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 3) = *a1;
    if ( a2 )
      NormalContext[4] = *a2;
  }
  else
  {
    v5 = -1073741823;
  }
  BgpFwReleaseLock();
  return v5;
}
