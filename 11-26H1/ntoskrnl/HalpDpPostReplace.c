/*
 * XREFs of HalpDpPostReplace @ 0x140BF3F84
 * Callers:
 *     HalpDpReplaceControl @ 0x140BF4360 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpSetClockAfterSleep @ 0x140449344 (HalpSetClockAfterSleep.c)
 *     HalpAcpiPmRegisterWrite @ 0x14044EF30 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x140464AE0 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x140464ED0 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDpPostReplace(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int16 v3; // bx
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // ecx
  __int16 v8; // [rsp+40h] [rbp+8h] BYREF
  __int16 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  v8 = 0;
  if ( *(_BYTE *)(a1 + 45) )
  {
    if ( *(_DWORD *)a1 )
    {
      v4 = *(_QWORD *)(a1 + 72);
      if ( v4 )
      {
        v5 = 1000LL * *(_QWORD *)(a1 + 80) / v4;
        v6 = 1000LL * *(_QWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 88) = v5;
        v7 = v6 / v4;
        *(_DWORD *)(v2 + 120) = 1000LL * *(_QWORD *)(v2 + 112) / v4 - v7;
        *(_DWORD *)(v2 + 104) = v7 - v5;
      }
    }
  }
  else
  {
    if ( (HalpPlatformFlags & 4) != 0 )
      HalpSetClockAfterSleep();
    LOBYTE(a1) = 1;
    guard_dispatch_icall_no_overrides(a1, a2);
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)&v8, 2u, 0LL);
      v3 = v8;
      v9 = v8;
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)&v8, 2u, 0LL);
        v3 = v8 | v9;
      }
      v9 = v3 | 0x20;
      HalpAcpiPmRegisterWrite(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)&v9, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)&v9, 2u, 0LL);
    }
  }
}
