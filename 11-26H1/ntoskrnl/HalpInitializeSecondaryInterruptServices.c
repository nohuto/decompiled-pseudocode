/*
 * XREFs of HalpInitializeSecondaryInterruptServices @ 0x140786B10
 * Callers:
 *     HalpAddDevice @ 0x1407846F0 (HalpAddDevice.c)
 * Callees:
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     HalpRecordSecondaryGsivRange @ 0x140786C50 (HalpRecordSecondaryGsivRange.c)
 *     HalpQueryMaximumGsiv @ 0x14078771C (HalpQueryMaximumGsiv.c)
 */

__int64 HalpInitializeSecondaryInterruptServices()
{
  int v0; // ebx
  int v1; // ecx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  qword_140F89DD8 = (__int64)&SecondaryIcList;
  SecondaryIcList = (__int64)&SecondaryIcList;
  SecondaryIcListSpinLock = 0LL;
  qword_140F89DC8 = (__int64)&SecondarySignalList;
  SecondarySignalList = (__int64)&SecondarySignalList;
  KeInitializeDpc((PRKDPC)&SecondarySignalDpc, (PKDEFERRED_ROUTINE)HalpProcessSecondarySignalList, 0LL);
  SecondarySignalListLock = 0LL;
  SecondarySignalDpcRunning = 0;
  v0 = HalpQueryMaximumGsiv(&v3);
  if ( v0 >= 0 )
  {
    if ( v3 + 513 >= v3 )
    {
      SecondaryGsivRangeSize = 512;
      v1 = 1024;
      SecondaryGsivAssignedCount = 0;
      if ( v3 + 1 > 0x400 )
        v1 = v3 + 1;
      SecondaryGsivRangeStart = v1;
      HalpRecordSecondaryGsivRange();
      SecondaryIcServicesEnabled = 1;
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v0;
}
