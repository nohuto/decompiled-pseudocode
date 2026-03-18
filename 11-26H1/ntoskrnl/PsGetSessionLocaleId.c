/*
 * XREFs of PsGetSessionLocaleId @ 0x1409EABFC
 * Callers:
 *     NtQueryDefaultLocale @ 0x1409EAB90 (NtQueryDefaultLocale.c)
 *     PspUserThreadStartup @ 0x1409EB210 (PspUserThreadStartup.c)
 * Callees:
 *     <none>
 */

__int64 PsGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 CycleTime; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    return HIDWORD(PspSiloMonitorLock.Timer.Header.WaitListHead.Flink);
  else
    return *(unsigned int *)(CycleTime + 48);
}
