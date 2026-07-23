/*
 * XREFs of PpmParkReportMask @ 0x1402F3DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     HvlParkedVirtualProcessors @ 0x1402F4108 (HvlParkedVirtualProcessors.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F4F4C (KeCpuSetReportParkedProcessors.c)
 *     MmReportParkedProcessors @ 0x1402F528C (MmReportParkedProcessors.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PpmParkReportMask()
{
  __int64 result; // rax
  unsigned __int16 Count; // r8
  unsigned __int16 v2; // r9
  $B38C3B1372D6E954799962D5DD404846 *v3; // r10
  unsigned __int16 i; // dx
  __int64 v5; // r8

  if ( PpmIsParkingEnabled )
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
        if ( PpmParkMaskHandler )
          guard_dispatch_icall_no_overrides(PpmCheckTime, &PpmPerfCoreParkingMask, v5);
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
