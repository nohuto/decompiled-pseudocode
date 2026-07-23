/*
 * XREFs of PopBatteryUpdateAlarms @ 0x1409BEBA0
 * Callers:
 *     PopBatteryAlarmPowerSettingCallback @ 0x1407CF880 (PopBatteryAlarmPowerSettingCallback.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x1404C91BC (PopGetPowerSettingValue.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 */

__int64 __fastcall PopBatteryUpdateAlarms(char a1, __int64 a2)
{
  signed int Next_high; // r15d
  char v3; // r14
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rsi
  int *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v25; // eax
  int v26; // eax
  __int64 v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v31[6]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v32[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+120h] [rbp+20h]

  Next_high = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v3 = a1;
  LOBYTE(v29) = a1;
  v4 = 128LL;
  LODWORD(v30) = 0;
  v5 = *(_OWORD *)PpmIdlePolicyLock.WriteOperationCount;
  HIDWORD(v29) = 0;
  v6 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 16);
  v31[0] = v5;
  v7 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 32);
  v31[1] = v6;
  v8 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 48);
  v31[2] = v7;
  v9 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 64);
  v31[3] = v8;
  v10 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 80);
  v31[4] = v9;
  v11 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 96);
  v31[5] = v10;
  v32[0] = v11;
  v32[1] = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 112);
  v12 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 144);
  v32[2] = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 128);
  v13 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 160);
  v32[3] = v12;
  v14 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 176);
  v32[4] = v13;
  v15 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 192);
  v32[5] = v14;
  v16 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 208);
  v17 = *(_QWORD *)(PpmIdlePolicyLock.WriteOperationCount + 224);
  v32[6] = v15;
  v32[7] = v16;
  v33 = v17;
  v18 = a2 + 1;
  if ( v3 )
  {
    v18 = 4;
    a2 = 0LL;
  }
  if ( (unsigned int)a2 < v18 )
  {
    v19 = v18 - (unsigned int)a2;
    v20 = (int *)v32 + 6 * a2 + 1;
    v21 = a2;
    do
    {
      if ( (int)PopGetPowerSettingValue(
                  (__int64)GUIDS_BATTERY_DISCHARGE_ACTION[v21],
                  a2,
                  Next_high,
                  (char *)&v29 + 4,
                  4u,
                  (unsigned int *)&v30) >= 0 )
      {
        v25 = HIDWORD(v29);
        if ( HIDWORD(v29) <= 6 )
        {
          v20[1] = HIDWORD(v29);
          *((_BYTE *)v20 - 4) = v25 != 0;
        }
      }
      if ( (int)PopGetPowerSettingValue(
                  (__int64)GUIDS_BATTERY_DISCHARGE_LEVEL[v21],
                  v22,
                  Next_high,
                  (char *)&v29 + 4,
                  4u,
                  (unsigned int *)&v30) >= 0 )
      {
        v26 = HIDWORD(v29);
        if ( HIDWORD(v29) > 0x64 )
          v26 = 100;
        *v20 = v26;
      }
      if ( (int)PopGetPowerSettingValue(
                  (__int64)GUIDS_BATTERY_DISCHARGE_FLAGS[v21],
                  v23,
                  Next_high,
                  (char *)&v29 + 4,
                  4u,
                  (unsigned int *)&v30) >= 0 )
        v20[3] = BYTE4(v29) & 7;
      v20 += 6;
      ++v21;
      --v19;
    }
    while ( v19 );
    v3 = v29;
  }
  LOBYTE(a2) = v3;
  LOBYTE(v4) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, __int64, __int64, __int64, __int64, __int64))PopApplyPolicy)(
           v4,
           a2,
           v31,
           232LL,
           v27,
           v28,
           v29,
           v30);
}
