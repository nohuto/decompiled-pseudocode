/*
 * XREFs of HalpApicSetupRegisterAccess @ 0x140593B28
 * Callers:
 *     HalpApicHvUpdateCallback @ 0x140593B10 (HalpApicHvUpdateCallback.c)
 *     HalpApicDiscover @ 0x1405A3BE4 (HalpApicDiscover.c)
 *     HalpApicInitializeLocalUnit @ 0x1405A40B0 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalpIsXboxNanovisorPresent @ 0x14058778C (HalpIsXboxNanovisorPresent.c)
 *     HalSocRequestConfigurationData @ 0x14059BCDC (HalSocRequestConfigurationData.c)
 */

__int64 HalpApicSetupRegisterAccess()
{
  bool v0; // bl
  char IsXboxNanovisorPresent; // al
  __int64 v2; // rdx
  char v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rdx
  void *v6; // r14
  void *v7; // r15
  void *v8; // rsi
  void *v9; // r12
  __int64 (__fastcall *v10)(); // rdi
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+38h] [rbp-20h] BYREF
  char v19; // [rsp+A0h] [rbp+48h] BYREF
  char v20; // [rsp+A8h] [rbp+50h] BYREF
  char v21; // [rsp+B0h] [rbp+58h] BYREF
  char v22; // [rsp+B8h] [rbp+60h] BYREF

  v0 = 0;
  v17[0] = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0LL;
  v19 = 0;
  v22 = 0;
  IsXboxNanovisorPresent = HalpIsXboxNanovisorPresent();
  v4 = 27LL;
  if ( IsXboxNanovisorPresent )
    goto LABEL_16;
  HalSocRequestConfigurationData(4LL, v2, &v20);
  HalSocRequestConfigurationData(6LL, v5, &v21);
  v4 = 27LL;
  v3 = v20;
  if ( (__readmsr(0x1Bu) & 0x400) != 0 )
    v3 = 1;
  if ( v21 || v3 )
  {
LABEL_16:
    HalpApicUsingMsrs = 1;
    v6 = HalpApicX2ReadRegister;
    v7 = HalpApicX2WriteRegister;
    v8 = HalpApicX2WriteCommand;
    v9 = xHalTimerWatchdogStop;
    v10 = HalpApicX2EndOfInterrupt;
    if ( v3 )
    {
      v13 = __readmsr(0x1Bu);
      if ( (v13 & 0x400) == 0 )
      {
        __writemsr(0x1Bu, v13 | 0x400);
        if ( !HalpApicX2Mode )
          HalpApicRestoreNonX2ModeOnReset = 1;
      }
      v14 = __readmsr(0x1Bu);
      if ( (v14 & 0x400) != 0 )
      {
        HalpApicX2Mode = 1;
      }
      else if ( HalpApicX2Mode )
      {
        return 3221225858LL;
      }
      HalSocRequestConfigurationData(7LL, (unsigned __int64)HIDWORD(v14) << 32, &v19);
      HalSocRequestConfigurationData(9LL, v15, &v22);
      if ( v19 )
      {
        if ( !v22 )
        {
          HalSocRequestConfigurationData(5LL, v16, v17);
          if ( !v17[0] )
            HalpApicGuestX2Mode = 1;
        }
      }
      goto LABEL_8;
    }
    if ( !HalpApicX2Mode )
      goto LABEL_8;
    return 3221225858LL;
  }
  if ( HalpApicX2Mode )
    return 3221225858LL;
  HalpApicUsingMsrs = 0;
  v6 = HalpApic1ReadRegister;
  v7 = HalpApic1WriteRegister;
  v8 = HalpApic1WriteIcr;
  v9 = HalpApic1WaitForIcr;
  v10 = HalpApic1EndOfInterrupt;
LABEL_8:
  HalSocRequestApi(v4, (__int64)HalpApicHvUpdateCallback, 5, 16LL, &v18);
  if ( (_QWORD)v18 )
    v10 = (__int64 (__fastcall *)())v18;
  if ( *((_QWORD *)&v18 + 1) )
    v8 = (void *)*((_QWORD *)&v18 + 1);
  if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
  {
    HalSocRequestConfigurationData(7LL, v11, &v19);
    v0 = v19 == 0;
  }
  HalpApicValidateSelfIpi = v0;
  result = 0LL;
  HalpApicRead = (__int64)v6;
  HalpApicWrite = (__int64)v7;
  HalpApicWriteCommand = (__int64)v8;
  HalpApicWaitForCommand = (__int64)v9;
  HalpApicEndOfInterrupt = (__int64)v10;
  return result;
}
