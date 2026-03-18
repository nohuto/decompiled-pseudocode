/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x140032F20
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x140025FA4 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032C00 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x140033494 (ACPIWakeEnableDisablePciDevice.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140033570 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033F50 (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        char a2,
        __int64 (__fastcall *a3)(__int64 *, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  unsigned int v6; // r15d
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // r8
  const char *v12; // rsi
  __int64 v13; // rdx
  const char *v14; // rcx
  char v15; // r10
  __int64 *v16; // r14
  _BYTE *v17; // rax
  __int64 v18; // r14
  KIRQL v19; // al
  __int64 v20; // r12
  __int64 *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rcx
  const char *v29; // rax
  unsigned int v31; // eax
  int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // edi
  const char *v35; // rax
  __int64 v36; // rax
  char v37; // r10
  __int64 v38; // rax
  const char *v39; // rax
  __int64 v40; // [rsp+38h] [rbp-100h]
  __int64 v41; // [rsp+38h] [rbp-100h]
  __int64 *v43; // [rsp+58h] [rbp-E0h]
  __int64 v45; // [rsp+60h] [rbp-D8h]
  _QWORD v47[16]; // [rsp+70h] [rbp-C8h] BYREF

  v6 = 259;
  memset(v47, 0, 0x78uLL);
  v8 = *(_DWORD *)(a1 + 552);
  v9 = 0LL;
  v10 = a2 == 0;
  v11 = 0LL;
  v12 = byte_140075A82;
  v13 = (__int64)byte_140075A82;
  v14 = byte_140075A82;
  if ( !v10 )
  {
    v15 = v8 + 1;
    *(_DWORD *)(a1 + 552) = v8 + 1;
    if ( a1 )
    {
      v36 = *(_QWORD *)(a1 + 8);
      v11 = a1;
      if ( (v36 & 0x200000000000LL) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 608);
        if ( (v36 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = v13;
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        17,
        15,
        (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
        v15,
        v11,
        v41,
        (__int64)v14);
    }
    if ( *(_DWORD *)(a1 + 552) == 1 )
      goto LABEL_6;
    if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
    {
      LOBYTE(v13) = 1;
LABEL_51:
      ACPIWakeEnableDisablePciDevice(a1, v13, v11, v7);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  v37 = v8 - 1;
  *(_DWORD *)(a1 + 552) = v8 - 1;
  if ( a1 )
  {
    v38 = *(_QWORD *)(a1 + 8);
    v11 = a1;
    if ( (v38 & 0x200000000000LL) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 608);
      if ( (v38 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v40 = v13;
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      17,
      16,
      (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
      v37,
      v11,
      v40,
      (__int64)v14);
  }
  if ( *(_DWORD *)(a1 + 552) )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
    {
      v13 = 1LL;
      goto LABEL_51;
    }
LABEL_40:
    v16 = 0LL;
    goto LABEL_19;
  }
LABEL_6:
  v16 = *(__int64 **)(a1 + 456);
  v43 = v16;
  if ( v16 )
  {
    v17 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
    v18 = (__int64)v17;
    if ( v17 )
    {
      v17[24] = a2;
      *((_QWORD *)v17 + 4) = a3;
      *((_QWORD *)v17 + 5) = a4;
      *((_QWORD *)v17 + 2) = a1;
      *((_DWORD *)v17 + 7) = 1;
      v19 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v20 = a1 + 560;
      v45 = *(_QWORD *)(a1 + 560);
      v21 = *(__int64 **)(a1 + 568);
      if ( *v21 != a1 + 560 )
        __fastfail(3u);
      *(_QWORD *)(v18 + 8) = v21;
      *(_QWORD *)v18 = v20;
      *v21 = v18;
      *(_QWORD *)(a1 + 568) = v18;
      KeReleaseSpinLock(&AcpiPowerLock, v19);
      v24 = *(_QWORD *)(a1 + 8);
      if ( v45 == v20 )
      {
        if ( (v24 & 0x800000000000000LL) != 0 && !*(_BYTE *)(v18 + 24) )
          ACPIWakeEnableDisablePciDevice(a1, 0LL, v22, v23);
        v25 = *(_DWORD *)(a1 + 600);
        WORD1(v47[0]) = 1;
        if ( (v25 & 0x40) != 0 )
        {
          v26 = *(_DWORD *)(a1 + 540);
          v27 = 3;
          WORD1(v47[5]) = 1;
          v47[2] = a2 != 0;
          LOBYTE(v9) = AcpiPowerLeavingS0 != 0;
          WORD1(v47[10]) = 1;
          v47[7] = v9;
          if ( v26 != 4 || (*(_DWORD *)(a1 + 8) & 0x800LL) != 0 )
            v47[12] = v26 - 1;
          else
            v47[12] = 4LL;
        }
        else
        {
          v27 = 1;
          LOBYTE(v9) = a2 != 0;
          v47[2] = v9;
        }
        v31 = AMLIAsyncEvalObject(v43, 0LL, v27, (__int64)v47, ACPIWakeEnableDisableAsyncCallBack, v18);
        v33 = *(_QWORD *)(a1 + 8);
        v34 = v31;
        v35 = byte_140075A82;
        if ( (v33 & 0x200000000000LL) != 0 )
        {
          v12 = *(const char **)(a1 + 608);
          if ( (v33 & 0x400000000000LL) != 0 )
            v35 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = 4;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v32,
            17,
            17,
            (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
            v34,
            a1,
            (__int64)v12,
            (__int64)v35);
        }
        if ( v34 != 259 )
          ACPIWakeEnableDisableAsyncCallBack(v43, v34, 0LL, v18);
      }
      else
      {
        v39 = byte_140075A82;
        if ( (v24 & 0x200000000000LL) != 0 )
        {
          v12 = *(const char **)(a1 + 608);
          if ( (v24 & 0x400000000000LL) != 0 )
            v39 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v24,
            17,
            18,
            (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
            3,
            a1,
            (__int64)v12,
            (__int64)v39);
        }
      }
      return 259LL;
    }
    v16 = v43;
    v6 = -1073741670;
  }
  else if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
  {
    LOBYTE(v13) = a2;
    ACPIWakeEnableDisablePciDevice(a1, v13, v11, v7);
  }
LABEL_19:
  v28 = *(_QWORD *)(a1 + 8);
  v29 = byte_140075A82;
  if ( (v28 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(a1 + 608);
    if ( (v28 & 0x400000000000LL) != 0 )
      v29 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      17,
      19,
      (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
      v6,
      a1,
      (__int64)v12,
      (__int64)v29);
  }
  return a3(v16, v6, 0LL, a4);
}
