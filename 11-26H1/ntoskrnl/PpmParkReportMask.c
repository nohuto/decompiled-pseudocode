/*
 * XREFs of PpmParkReportMask @ 0x1403E6EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     HvlParkedVirtualProcessors @ 0x1403E7228 (HvlParkedVirtualProcessors.c)
 *     KeCpuSetReportParkedProcessors @ 0x1403E806C (KeCpuSetReportParkedProcessors.c)
 *     MmReportParkedProcessors @ 0x1403E83AC (MmReportParkedProcessors.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PpmParkReportMask()
{
  __int64 result; // rax
  unsigned __int16 Count; // r8
  unsigned __int16 v2; // r9
  $B38C3B1372D6E954799962D5DD404846 *v3; // r10
  unsigned __int16 i; // dx

  if ( PopModernStandbyStateNotify.ReadyTime )
  {
    result = *(_QWORD *)&PpmPerfCoreParkingMask.Count;
    Count = PpmPerfReportedCoreParkingMask.Count;
    if ( PpmPerfCoreParkingMask.Count >= PpmPerfReportedCoreParkingMask.Count )
    {
      v2 = PpmPerfReportedCoreParkingMask.Count;
      v3 = &PpmPerfCoreParkingMask.8;
      Count = PpmPerfCoreParkingMask.Count;
    }
    else
    {
      v2 = PpmPerfCoreParkingMask.Count;
      v3 = &PpmPerfReportedCoreParkingMask.8;
    }
    for ( i = 0; i < v2; ++i )
    {
      result = PpmPerfReportedCoreParkingMask.Bitmap[i];
      if ( PpmPerfCoreParkingMask.Bitmap[i] != result )
      {
LABEL_11:
        RtlpCopyAffinityEx(
          &PpmPerfReportedCoreParkingMask,
          PpmPerfReportedCoreParkingMask.Size,
          &PpmPerfCoreParkingMask);
        if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower )
          HvlParkedVirtualProcessors();
        if ( qword_140F12238 )
          guard_dispatch_icall_no_overrides(
            *(_QWORD *)&PopSleepstudySessionLock.SystemCallNumber,
            &PpmPerfCoreParkingMask);
        KeCpuSetReportParkedProcessors(&PpmPerfCoreParkingMask);
        return MmReportParkedProcessors();
      }
    }
    while ( i < Count )
    {
      result = i;
      if ( v3->Bitmap[i] )
        goto LABEL_11;
      ++i;
    }
  }
  return result;
}
