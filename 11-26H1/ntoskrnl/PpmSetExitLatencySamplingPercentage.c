/*
 * XREFs of PpmSetExitLatencySamplingPercentage @ 0x140509FA8
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 */

__int64 __fastcall PpmSetExitLatencySamplingPercentage(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx

  PpmAcquireLock((struct _KTHREAD **)&qword_140F123A0, a2, a3);
  v4 = 0;
  if ( stru_140E66FF0.ResourceIndex )
  {
    v4 = -1073741823;
  }
  else
  {
    v5 = *a1;
    stru_140E66FF0.ResourceIndex = 1;
    if ( v5 > 0x64 )
      v5 = 100;
    HIDWORD(stru_140E66FF0.SchedulerSharedSwappablePage) = v5;
  }
  PpmReleaseLock(&qword_140F123A0);
  return v4;
}
