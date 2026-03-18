/*
 * XREFs of HalpDpPreReplace @ 0x140BEE240
 * Callers:
 *     HalpDpReplaceControl @ 0x140BEE360 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpSetClockBeforeSleep @ 0x140451288 (HalpSetClockBeforeSleep.c)
 *     HalpAcpiPmRegisterWrite @ 0x1404576C0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14046B360 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x14046B750 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDpPreReplace(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF
  __int16 v4; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 45) )
  {
    guard_dispatch_icall_no_overrides(0LL, a2);
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)&v4, 2u, 0LL);
      v2 = v4;
      v3 = v4;
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)&v4, 2u, 0LL);
        v2 = v3 | v4;
      }
      v3 = v2 & 0x20;
      HalpAcpiPmRegisterWrite(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)&v3, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)&v3, 2u, 0LL);
    }
    if ( (HalpPlatformFlags & 4) != 0 )
      HalpSetClockBeforeSleep();
  }
}
