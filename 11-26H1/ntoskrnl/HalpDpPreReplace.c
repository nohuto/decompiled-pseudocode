/*
 * XREFs of HalpDpPreReplace @ 0x140BF4240
 * Callers:
 *     HalpDpReplaceControl @ 0x140BF4360 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpSetClockBeforeSleep @ 0x1404493B8 (HalpSetClockBeforeSleep.c)
 *     HalpAcpiPmRegisterWrite @ 0x14044EF30 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x140464AE0 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x140464ED0 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
      HalpAcpiPmRegisterRead(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)&v4, 2u, 0LL);
      v2 = v4;
      v3 = v4;
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)&v4, 2u, 0LL);
        v2 = v3 | v4;
      }
      v3 = v2 & 0x20;
      HalpAcpiPmRegisterWrite(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)&v3, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)&v3, 2u, 0LL);
    }
    if ( (HalpPlatformFlags & 4) != 0 )
      HalpSetClockBeforeSleep();
  }
}
