/*
 * XREFs of ?ndisInitializePerProcRcvTracker@@YAXXZ @ 0x14019072C
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 */

void ndisInitializePerProcRcvTracker(void)
{
  int v0; // edx

  ndisPerProcRcvTrackers = (struct _NDIS_RCV_TRACKER_ARRAY *)ExAllocatePool2(
                                                               64LL,
                                                               2096 * ndisMaxNumberOfProcessors,
                                                               538985550LL);
  if ( !ndisPerProcRcvTrackers && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v0,
      1,
      10,
      (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
  }
}
