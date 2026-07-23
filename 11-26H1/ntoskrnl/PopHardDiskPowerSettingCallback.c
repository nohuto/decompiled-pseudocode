/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x1409BF810
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409F7F1C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopHardDiskPowerSettingCallback(__int64 *a1, _DWORD *a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // ebx
  int v26; // eax
  __int64 v28; // rcx
  _OWORD v29[8]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v30[5]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-28h]
  __int64 v32; // [rsp+100h] [rbp-18h]

  v4 = *a1;
  v6 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( v6 )
  {
    v28 = *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 - v4;
    if ( *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 == v4 )
      v28 = *(_QWORD *)GUID_DISK_BURST_IGNORE_THRESHOLD.Data4 - a1[1];
    if ( !v28 && a3 == 4 && a2 )
    {
      *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[12] = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock(a1, a2);
  v7 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 16);
  v29[0] = *(_OWORD *)PpmIdlePolicyLock.WriteOperationCount;
  v8 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 32);
  v29[1] = v7;
  v9 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 48);
  v29[2] = v8;
  v10 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 64);
  v29[3] = v9;
  v11 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 80);
  v29[4] = v10;
  v12 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 96);
  v29[5] = v11;
  v29[6] = v12;
  v13 = v30;
  v29[7] = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 112);
  v14 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 144);
  v30[0] = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 128);
  v15 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 160);
  v30[1] = v14;
  v16 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 176);
  v30[2] = v15;
  v17 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 192);
  v30[3] = v16;
  v18 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 208);
  v19 = *(_QWORD *)(PpmIdlePolicyLock.WriteOperationCount + 224);
  v30[4] = v17;
  v31 = v18;
  v32 = v19;
  LOBYTE(v13) = 1;
  DWORD1(v31) = *a2;
  v20 = ((__int64 (__fastcall *)(_OWORD *, _QWORD, _OWORD *, __int64))PopApplyPolicy)(v13, 0LL, v29, 232LL);
  v24 = 0xFFFFFFFFLL;
  v25 = v20;
  v26 = 1000 * *a2;
  if ( !v26 )
    v26 = -1;
  if ( v26 != PopDiskIdleTimeout )
  {
    PopDiskIdleTimeout = v26;
    PopUpdateDiskIdleTimeoutSetting();
  }
  PopReleasePolicyLock(v24, v21, v22, v23, *(_QWORD *)&v29[0]);
  if ( v25 >= 0 )
    return 0;
  return (unsigned int)v25;
}
