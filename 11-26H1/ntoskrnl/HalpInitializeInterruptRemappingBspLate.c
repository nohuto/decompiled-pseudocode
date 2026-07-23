/*
 * XREFs of HalpInitializeInterruptRemappingBspLate @ 0x140786E68
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x14057F640 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140786FF8 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendRemappingRange @ 0x1407874BC (HalpIrtExtendRemappingRange.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 HalpInitializeInterruptRemappingBspLate()
{
  struct _KPRCB *CurrentPrcb; // rax
  char v1; // r9
  unsigned int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  int DeviceAperture; // ebx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  HalpIrtLock.Owner = 0LL;
  HalpIrtLock.Count = 1;
  HalpIrtLock.Contention = 0;
  KeInitializeEvent(&HalpIrtLock.Event, SynchronizationEvent, 0);
  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  HalpIrtTotalRanges = 1;
  v2 = 1;
  HalpIrtAllocationFlags = 0;
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    v1 = 15;
    v2 = 32;
    HalpIrtAllocationFlags = 15;
    HalpIrtTotalRanges = 32;
  }
  v3 = HalpIrtTotalEntries / v2;
  HalpIrtEntriesPerRange = HalpIrtTotalEntries / v2;
  if ( (v1 & 4) != 0 )
  {
    v4 = 512;
    HalpIrtEntriesPerDeviceAperture = 512;
    v5 = 512;
  }
  else
  {
    HalpIrtEntriesPerDeviceAperture = HalpIrtTotalEntries;
    v4 = HalpIrtTotalEntries;
    v5 = HalpIrtTotalEntries;
  }
  HalpIrtAperturesPerRange = v3 / v4;
  HalpIrtTotalApertures = HalpIrtTotalEntries / v5;
  DeviceAperture = HalpIrtExtendRemappingRange(0LL, HalpIrtTotalEntries % v5);
  if ( DeviceAperture >= 0 )
  {
    RtlSetBits(&HalpIrtRanges, 0, 8u);
    if ( (HalpIrtAllocationFlags & 4) == 0 )
      return (unsigned int)DeviceAperture;
    v8 = 0;
    qword_140F89CE8 = (__int64)&HalpIrtAllocatedDeviceAperturesHead;
    HalpIrtAllocatedDeviceAperturesHead = (__int64)&HalpIrtAllocatedDeviceAperturesHead;
    qword_140F89D08 = (__int64)&HalpIrtFreeDeviceAperturesHead;
    HalpIrtFreeDeviceAperturesHead = (__int64)&HalpIrtFreeDeviceAperturesHead;
    DeviceAperture = HalpIrtAllocateDeviceAperture(-1, -1, 1, 0, (__int64)&v8);
    if ( DeviceAperture >= 0 )
    {
      HalpIrtDefaultDeviceAperture = HalpIrtAllocatedDeviceAperturesHead;
      return (unsigned int)DeviceAperture;
    }
  }
  if ( HalpIrtRanges.Buffer )
  {
    ExFreePoolWithTag(HalpIrtRanges.Buffer, 0);
    HalpIrtRanges.Buffer = 0LL;
  }
  return (unsigned int)DeviceAperture;
}
