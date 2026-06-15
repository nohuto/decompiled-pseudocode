/*
 * XREFs of ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x180119600
 * Callers:
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x18007FFF4 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x180118C58 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VolumeHardwareLogger::ScheduleTimer(VolumeHardwareLogger *this)
{
  struct _TP_TIMER *v1; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 56) )
  {
    v1 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
    pftDueTime = (struct _FILETIME)-600000000LL;
    SetThreadpoolTimer(v1, &pftDueTime, 0, 0);
  }
}
