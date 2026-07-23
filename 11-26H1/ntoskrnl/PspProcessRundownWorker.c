/*
 * XREFs of PspProcessRundownWorker @ 0x1409BDE40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 */

__int64 __fastcall PspProcessRundownWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LIST_ENTRY *v4; // rcx
  LIST_ENTRY *NextProcess; // rax
  LIST_ENTRY *v6; // rbx
  __int64 result; // rax
  struct _KPROCESS *v8; // rbx

  do
  {
    v4 = 0LL;
    _InterlockedExchange(&PspSiloMonitorLock.Timer.Header.SignalState, 1);
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v4, a2, a3, a4);
      v6 = NextProcess;
      if ( !NextProcess )
        break;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&NextProcess[31], 8u) )
      {
        PspRundownSingleProcess((PRKPROCESS)NextProcess);
        ObfDereferenceObjectWithTag(v6, 0x77537350u);
      }
      v4 = v6;
    }
    while ( *(_QWORD *)&PspSiloMonitorLock.UserAffinityPrimaryGroup )
    {
      v8 = (struct _KPROCESS *)_InterlockedExchange64(
                                 (volatile __int64 *)&PspSiloMonitorLock.UserAffinityPrimaryGroup,
                                 0LL);
      if ( !v8 )
        break;
      PspRundownSingleProcess(v8);
      ObfDereferenceObjectWithTag(v8, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&PspSiloMonitorLock.Timer.Header.SignalState, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
