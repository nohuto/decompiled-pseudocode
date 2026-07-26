/*
 * XREFs of ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400E76FC
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisCreateThreadStateObjectType@@YAJXZ @ 0x1400E77F4 (-ndisCreateThreadStateObjectType@@YAJXZ.c)
 */

__int64 ndisInitializeThreadMonitorSubsystem(void)
{
  unsigned int ThreadStateObjectType; // ebx

  ThreadStateObjectType = ndisCreateThreadStateObjectType();
  if ( !ThreadStateObjectType )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_e4589a6404ca36650cd9364b60bd4efe_Traceguids,
      ThreadStateObjectType);
  return ThreadStateObjectType;
}
