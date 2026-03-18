/*
 * XREFs of ACPIWakeDisableAsync @ 0x140032438
 * Callers:
 *     OSNotifyDeviceWake @ 0x14001EBC8 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140032208 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x14004E18C (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_LLLqss @ 0x140031B88 (WPP_RECORDER_SF_LLLqss.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x140033494 (ACPIWakeEnableDisablePciDevice.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140033570 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033C00 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *v8; // rax
  int v9; // ebp
  const char *v10; // rsi
  const char *v11; // r8
  const char *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // r12
  __int64 *v17; // rax
  __int64 *v18; // r14
  __int64 v19; // r15
  __int64 **v20; // rax
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  bool v25; // zf
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // edi
  const char *v31; // rax
  int v33; // edx
  __int64 v34; // rcx
  const char *v35; // rax
  const char *v36; // rax
  int v37; // [rsp+20h] [rbp-118h]
  KIRQL NewIrql; // [rsp+60h] [rbp-D8h]
  _QWORD v39[16]; // [rsp+70h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v39, 0, 0x78uLL);
  v8 = *a2;
  v9 = 0;
  while ( v8 != a2 )
  {
    v8 = (_QWORD *)*v8;
    ++v9;
  }
  v10 = byte_140075A82;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = byte_140075A82;
  v12 = byte_140075A82;
  v13 = 0LL;
  if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v13 = a1;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(a1 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v12,
      (__int64)v11,
      v13,
      v37,
      *(_DWORD *)(a1 + 552),
      v9,
      *(_DWORD *)(a1 + 552) - v9,
      v13,
      v11,
      v12);
  v15 = *(_DWORD *)(a1 + 552) - v9;
  *(_DWORD *)(a1 + 552) = v15;
  v16 = *(__int64 **)(a1 + 456);
  if ( v16 )
  {
    if ( v15 )
    {
      if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
      {
        LOBYTE(v12) = 1;
        ACPIWakeEnableDisablePciDevice(a1, v12, v11, v13);
      }
    }
    else
    {
      v17 = (__int64 *)ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
      v18 = v17;
      if ( v17 )
      {
        *((_BYTE *)v17 + 24) = 0;
        v19 = a1 + 560;
        v17[5] = a4;
        v17[4] = (__int64)OSNotifyDeviceWakeCallBack;
        v17[2] = a1;
        *((_DWORD *)v17 + 7) = v9;
        v20 = *(__int64 ***)(a1 + 568);
        v21 = *(_QWORD *)(a1 + 560);
        if ( *v20 != (__int64 *)(a1 + 560) )
          __fastfail(3u);
        *v18 = v19;
        v18[1] = (__int64)v20;
        *v20 = v18;
        *(_QWORD *)(a1 + 568) = v18;
        KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
        v24 = *(_QWORD *)(a1 + 8);
        if ( v21 == v19 )
        {
          if ( (v24 & 0x800000000000000LL) != 0 )
            ACPIWakeEnableDisablePciDevice(a1, 0LL, v22, v23);
          v25 = (*(_DWORD *)(a1 + 600) & 0x40) == 0;
          v39[2] = 0LL;
          WORD1(v39[0]) = 1;
          if ( v25 )
          {
            v26 = 1;
          }
          else
          {
            v26 = 3;
            WORD1(v39[5]) = 1;
            v39[7] = 0LL;
            WORD1(v39[10]) = 1;
            v39[12] = 0LL;
          }
          v27 = AMLIAsyncEvalObject(v16, 0LL, v26, (__int64)v39, ACPIWakeEnableDisableAsyncCallBack, (__int64)v18);
          v29 = *(_QWORD *)(a1 + 8);
          v30 = v27;
          v31 = byte_140075A82;
          if ( (v29 & 0x200000000000LL) != 0 )
          {
            v10 = *(const char **)(a1 + 608);
            if ( (v29 & 0x400000000000LL) != 0 )
              v31 = *(const char **)(a1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v28) = 4;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v28,
              17,
              12,
              (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
              v30,
              a1,
              (__int64)v10,
              (__int64)v31);
          }
          if ( v30 != 259 )
            ACPIWakeEnableDisableAsyncCallBack(v16, v30, 0LL, v18);
        }
        else
        {
          v36 = byte_140075A82;
          if ( (v24 & 0x200000000000LL) != 0 )
          {
            v10 = *(const char **)(a1 + 608);
            if ( (v24 & 0x400000000000LL) != 0 )
              v36 = *(const char **)(a1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 4;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v24,
              17,
              13,
              (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
              3,
              a1,
              (__int64)v10,
              (__int64)v36);
          }
        }
        return 259LL;
      }
      v4 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
  v34 = *(_QWORD *)(a1 + 8);
  v35 = byte_140075A82;
  if ( (v34 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(a1 + 608);
    if ( (v34 & 0x400000000000LL) != 0 )
      v35 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v33) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v33,
      17,
      14,
      (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
      v4,
      a1,
      (__int64)v10,
      (__int64)v35);
  }
  OSNotifyDeviceWakeCallBack(v16, v4, 0LL, a4);
  return 259LL;
}
