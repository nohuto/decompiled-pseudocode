/*
 * XREFs of PpmCheckMaintainArtificialDomain @ 0x1404F53B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PpmCheckMaintainArtificialDomain()
{
  __int64 v0; // rcx

  if ( !PpmPerfArtificialDomainEnabled )
  {
    LODWORD(v0) = *(_DWORD *)&PopSleepstudySessionLock.WaitBlockFill11[100];
    if ( *(__int64 (**)())(*(_QWORD *)&PopSleepstudySessionLock.WaitBlockFill11[16]
                         + 8LL * *(unsigned int *)&PopSleepstudySessionLock.WaitBlockFill11[100]) != PpmCheckReportComplete )
    {
      do
        v0 = (unsigned int)(v0 + 1);
      while ( *(__int64 (**)())(*(_QWORD *)&PopSleepstudySessionLock.WaitBlockFill11[16] + 8 * v0) != PpmCheckReportComplete );
      *(_DWORD *)&PopSleepstudySessionLock.WaitBlockFill11[100] = v0;
    }
  }
}
