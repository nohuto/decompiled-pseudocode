/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x14050BC78
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 */

LONG __fastcall PpmClearExitLatencySamplingPercentage(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&qword_140F12AA0, a2, a3);
  if ( BYTE4(stru_140E67200.Padding[2]) )
  {
    BYTE4(stru_140E67200.Padding[2]) = 0;
    LODWORD(stru_140E67200.Padding[1]) = 0;
  }
  return PpmReleaseLock(&qword_140F12AA0);
}
