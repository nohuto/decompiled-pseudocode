/*
 * XREFs of PspIoRateEntryDeactivate @ 0x140B3A694
 * Callers:
 *     PspSetJobIoRateControl @ 0x1407F9484 (PspSetJobIoRateControl.c)
 *     PspJobIoRateControlDisable @ 0x140AF9C90 (PspJobIoRateControlDisable.c)
 *     PspIoRateEntryActivate @ 0x140AFB4A4 (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControlForVolume @ 0x140B5A3A0 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021D5D4 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1404636E0 (IoStopDiskIoAttributionForContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     IoStopIoRateControl @ 0x14049B610 (IoStopIoRateControl.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (struct _EX_RUNDOWN_REF *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
