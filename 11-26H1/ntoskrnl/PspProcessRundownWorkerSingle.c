/*
 * XREFs of PspProcessRundownWorkerSingle @ 0x140B465F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 */

__int64 __fastcall PspProcessRundownWorkerSingle(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KPROCESS *v4; // rbx
  __int64 result; // rax

  do
  {
    _InterlockedExchange(&PspSiloMonitorLock.Timer.Header.LockNV, 1);
    while ( *(_QWORD *)&PspSiloMonitorLock.UserAffinityPrimaryGroup )
    {
      v4 = (struct _KPROCESS *)_InterlockedExchange64(
                                 (volatile __int64 *)&PspSiloMonitorLock.UserAffinityPrimaryGroup,
                                 0LL);
      if ( !v4 )
        break;
      PspRundownSingleProcess(v4, 0, a3, a4);
      ObfDereferenceObjectWithTag(v4, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&PspSiloMonitorLock.Timer.Header.LockNV, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
