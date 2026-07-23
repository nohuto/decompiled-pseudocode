/*
 * XREFs of PoDisableSleepStates @ 0x1407CF760
 * Callers:
 *     VslpIumPhase4Initialize @ 0x1405C6E54 (VslpIumPhase4Initialize.c)
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 *     PopInitializeHibernateGlobals @ 0x1407D3434 (PopInitializeHibernateGlobals.c)
 *     PopWnfHibernateRevocationCheckCallback @ 0x1407D3F10 (PopWnfHibernateRevocationCheckCallback.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
    ExAcquireFastMutex(&PopDisableSleepMutex);
    v9 = (_QWORD *)qword_140F12DB8;
    if ( *(__int64 **)qword_140F12DB8 != &PopDisableSleepList )
      __fastfail(3u);
    *v8 = &PopDisableSleepList;
    v8[1] = v9;
    *v9 = v8;
    qword_140F12DB8 = (__int64)v8;
    KeReleaseGuardedMutex(&PopDisableSleepMutex);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
