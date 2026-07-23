/*
 * XREFs of PpmSetExitLatencySamplingPercentage @ 0x140503A58
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 */

__int64 __fastcall PpmSetExitLatencySamplingPercentage(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx

  PpmAcquireLock((struct _KTHREAD **)&qword_140F12AA0, a2, a3);
  v4 = 0;
  if ( BYTE4(stru_140E67200.Padding[2]) )
  {
    v4 = -1073741823;
  }
  else
  {
    v5 = *a1;
    BYTE4(stru_140E67200.Padding[2]) = 1;
    if ( v5 > 0x64 )
      v5 = 100;
    LODWORD(stru_140E67200.Padding[1]) = v5;
  }
  PpmReleaseLock(&qword_140F12AA0);
  return v4;
}
