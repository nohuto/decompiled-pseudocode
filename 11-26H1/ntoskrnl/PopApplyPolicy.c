/*
 * XREFs of PopApplyPolicy @ 0x1409BF988
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x1404F8B70 (PopVideoPowerSettingCallback.c)
 *     PopConsoleLockPowerSettingCallback @ 0x1407CF8B0 (PopConsoleLockPowerSettingCallback.c)
 *     PopPowerButtonSettingCallback @ 0x1407CFB60 (PopPowerButtonSettingCallback.c)
 *     PopResetCurrentPolicies @ 0x1409BEAA8 (PopResetCurrentPolicies.c)
 *     PopBatteryUpdateAlarms @ 0x1409BEBA0 (PopBatteryUpdateAlarms.c)
 *     PopSleepPowerSettingCallback @ 0x1409BF440 (PopSleepPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x1409BF810 (PopHardDiskPowerSettingCallback.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PopSetNotificationWork @ 0x1404274C0 (PopSetNotificationWork.c)
 *     PopOpenPowerKey @ 0x1404E1064 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopResetCBTriggers @ 0x1407DDCB8 (PopResetCBTriggers.c)
 *     PopVerifySystemPowerPolicy @ 0x1409BFC64 (PopVerifySystemPowerPolicy.c)
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 */

__int64 __fastcall PopApplyPolicy(char a1, char a2, _OWORD *a3, unsigned int a4)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 result; // rax
  int v23; // ebx
  __int64 WriteOperationCount; // rdi
  char v25; // r14
  __int64 i; // r8
  __int64 v27; // rcx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // rax
  HANDLE DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD Buf1[6]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-50h]
  _OWORD v47[7]; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+138h] [rbp+30h]
  _OWORD Data[14]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v50; // [rsp+228h] [rbp+120h]

  memset_0(Buf1, 0, 0xE8uLL);
  DestinationString = 0LL;
  DestinationString_8 = 0LL;
  if ( a4 < 0xE8 )
    return 3221225507LL;
  if ( a4 > 0xE8 )
    return 2147483653LL;
  v8 = a3[1];
  Data[0] = *a3;
  v9 = a3[2];
  Data[1] = v8;
  v10 = a3[3];
  Data[2] = v9;
  v11 = a3[4];
  Data[3] = v10;
  v12 = a3[5];
  Data[4] = v11;
  v13 = a3[6];
  Data[5] = v12;
  Data[6] = v13;
  v14 = a3[7];
  v15 = a3 + 8;
  Data[7] = v14;
  v16 = *((_QWORD *)v15 + 12);
  v17 = v15[1];
  Data[8] = *v15;
  v18 = v15[2];
  Data[9] = v17;
  v19 = v15[3];
  Data[10] = v18;
  v20 = v15[4];
  Data[11] = v19;
  v21 = v15[5];
  Data[12] = v20;
  Data[13] = v21;
  v50 = v16;
  result = PopVerifySystemPowerPolicy(Data, Buf1);
  v23 = result;
  if ( (int)result >= 0 )
  {
    WriteOperationCount = PpmIdlePolicyLock.WriteOperationCount;
    if ( !memcmp(Buf1, (const void *)PpmIdlePolicyLock.WriteOperationCount, 0xE8uLL) && !a1 )
    {
      return 0LL;
    }
    else
    {
      v25 = 0;
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        v27 = *((_QWORD *)&v47[-1] + 3 * i) - *(_QWORD *)(WriteOperationCount + 24 * i + 96);
        if ( !v27 )
        {
          v27 = *((_QWORD *)&v46 + 3 * i + 1) - *(_QWORD *)(WriteOperationCount + 24 * i + 104);
          if ( !v27 )
            v27 = *((_QWORD *)v47 + 3 * i) - *(_QWORD *)(WriteOperationCount + 24 * i + 112);
        }
        if ( v27 )
        {
          v25 = 1;
          break;
        }
      }
      v28 = (_OWORD *)PpmIdlePolicyLock.WriteOperationCount;
      v29 = Buf1[1];
      *(_OWORD *)PpmIdlePolicyLock.WriteOperationCount = Buf1[0];
      v30 = Buf1[2];
      v28[1] = v29;
      v31 = Buf1[3];
      v28[2] = v30;
      v32 = Buf1[4];
      v28[3] = v31;
      v33 = Buf1[5];
      v28[4] = v32;
      v34 = v46;
      v28[5] = v33;
      v35 = v47[0];
      v28[6] = v34;
      v28 += 8;
      v36 = v47[1];
      *(v28 - 1) = v35;
      v37 = v47[2];
      *v28 = v36;
      v38 = v47[3];
      v28[1] = v37;
      v39 = v47[4];
      v28[2] = v38;
      v40 = v47[5];
      v28[3] = v39;
      v41 = v47[6];
      v42 = v48;
      v28[4] = v40;
      v28[5] = v41;
      *((_QWORD *)v28 + 12) = v42;
      PopSetNotificationWork(2u);
      if ( v25 && !a2 )
        PopResetCBTriggers(0x83u);
      PopUpdateSystemIdleContext(3LL);
      if ( a1 )
      {
        v23 = PopOpenPowerKey((__int64)&DestinationString);
        if ( v23 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString_8, L"SystemPowerPolicy");
          v23 = ZwSetValueKey(DestinationString, &DestinationString_8, 0, 3u, Data, 0xE8u);
          ZwClose(DestinationString);
        }
      }
      return (unsigned int)v23;
    }
  }
  return result;
}
