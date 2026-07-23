/*
 * XREFs of HalpInterruptInitDiscard @ 0x140CB5AF4
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BF1450 (HalpInterruptInitSystem.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HalpInitializeInterrupts @ 0x140CB3DD8 (HalpInitializeInterrupts.c)
 */

__int64 __fastcall HalpInterruptInitDiscard(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  HalpDefaultPcIoSpace = HalpAddressUsageList;
  HalpAddressUsageList = (ULONG_PTR)&HalpDefaultPcIoSpace;
  v3 = 0LL;
  HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink = 0LL;
  if ( HalpHvCpuManager )
  {
    HviGetHardwareFeatures((__int64)&v3);
    if ( (v3 & 0x4000) != 0 )
      HalpInterruptPhysicalModeOnly = 1;
  }
  result = HalpInitializeInterrupts(a1);
  if ( (int)result >= 0 )
  {
    off_140E009D0[0] = (__int64 (__fastcall *)())HalpMaskInterrupt;
    off_140E009D8[0] = (__int64 (__fastcall *)())HalpUnmaskInterrupt;
    off_140E00A70[0] = (__int64 (__fastcall *)())HalpInterruptRequestInterrupt;
    off_140E00A78[0] = (__int64 (__fastcall *)())HalpInterruptEnumerateUnmaskedInterrupts;
    off_140E006A8[0] = (__int64 (__fastcall *)())HaliGetInterruptTranslator;
    off_140E009C8[0] = (__int64 (__fastcall *)())HalpSecondaryInterruptQueryPrimaryInformation;
    off_140E009E0[0] = (__int64 (__fastcall *)())HalpIsInterruptTypeSecondary;
    off_140E009E8[0] = (__int64 (__fastcall *)())HalpAllocateGsivForSecondaryInterrupt;
    off_140E00B40[0] = (__int64 (__fastcall *)())HalpInterruptVectorDataToGsiv;
    off_140E00B48[0] = (__int64 (__fastcall *)())HalpInterruptGetHighestPriorityInterrupt;
    return 0LL;
  }
  return result;
}
