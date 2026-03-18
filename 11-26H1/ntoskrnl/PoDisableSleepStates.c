/*
 * XREFs of PoDisableSleepStates @ 0x1407CC6C0
 * Callers:
 *     VslpIumPhase4Initialize @ 0x1405C45E4 (VslpIumPhase4Initialize.c)
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 *     PopInitializeHibernateGlobals @ 0x1407D0394 (PopInitializeHibernateGlobals.c)
 *     PopWnfHibernateRevocationCheckCallback @ 0x1407D0E70 (PopWnfHibernateRevocationCheckCallback.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoDisableSleepStates(int a1, int a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = 0;
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 20) = a2;
    ExAcquireFastMutex((PKGUARDED_MUTEX)stru_140F12420.TracingPrivate);
    v9 = *(_QWORD **)&stru_140F12420.ThreadTimerDelay;
    if ( **(struct _KTHREAD ***)&stru_140F12420.ThreadTimerDelay != (struct _KTHREAD *)&stru_140F12420.QueuedScb )
      __fastfail(3u);
    *v8 = &stru_140F12420.QueuedScb;
    v8[1] = v9;
    *v9 = v8;
    *(_QWORD *)&stru_140F12420.ThreadTimerDelay = v8;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)stru_140F12420.TracingPrivate);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
