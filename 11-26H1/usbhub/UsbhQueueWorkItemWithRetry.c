/*
 * XREFs of UsbhQueueWorkItemWithRetry @ 0x14000FB5C
 * Callers:
 *     UsbhIdleIrp_NoIrp @ 0x14000F28C (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_SignalPdoWake @ 0x14000FA88 (UsbhSS_SignalPdoWake.c)
 *     UsbhHubIsr @ 0x14002F9E0 (UsbhHubIsr.c)
 *     UsbhIsrRetryTimer @ 0x1400478B0 (UsbhIsrRetryTimer.c)
 *     UsbhResetIrqPipeRetryTimer @ 0x140048010 (UsbhResetIrqPipeRetryTimer.c)
 *     UsbHubhInitTimeoutTimer @ 0x14004F480 (UsbHubhInitTimeoutTimer.c)
 *     UsbhInitCallback @ 0x140050FA0 (UsbhInitCallback.c)
 *     UsbhInitRetryTimer @ 0x1400512C0 (UsbhInitRetryTimer.c)
 *     UsbhIdleIrpRetryTimer @ 0x14005E3D0 (UsbhIdleIrpRetryTimer.c)
 *     UsbhSS_WakeIrpRetryTimer @ 0x14005E6A0 (UsbhSS_WakeIrpRetryTimer.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhQueueWorkItemWithRetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r15d
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  signed __int32 v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rcx
  signed __int32 v27; // eax
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  _DWORD *Pool2; // rdi
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 (__fastcall *v35)(__int64, __int64); // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  signed __int32 v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rcx
  signed __int32 v46; // eax
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r14
  void (__fastcall *v50)(__int64, __int64, void *, _QWORD, _DWORD *, int); // rax
  int v51; // ecx
  int v53; // [rsp+28h] [rbp-60h]
  char v54; // [rsp+40h] [rbp-48h]
  unsigned int v56; // [rsp+A8h] [rbp+20h]

  v56 = a4;
  v8 = 0;
  FdoExt(a1, a2, a3, a4);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
        v14 = *(_DWORD *)(v12 + 884);
        v15 = *(_QWORD *)(v12 + 888);
        v16 = 32LL * ((v13 - 1) & v14);
        *(_DWORD *)(v16 + v15) = 1129141329;
        *(_QWORD *)(v16 + v15 + 8) = 0LL;
        *(_QWORD *)(v16 + v15 + 16) = a7;
        *(_QWORD *)(v16 + v15 + 24) = a5;
      }
    }
  }
  v17 = &WPP_17d2bee9f04934815023b5c023c5576c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  v54 = *(_BYTE *)(FdoExt(a1, v17, v10, v11) + 5268);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 880), 0xFFFFFFFF);
        v23 = *(_DWORD *)(v21 + 884);
        v24 = *(_QWORD *)(v21 + 888);
        v18 = 32LL * ((v22 - 1) & v23);
        *(_DWORD *)(v18 + v24) = 1297568097;
        *(_QWORD *)(v18 + v24 + 8) = 0LL;
        *(_QWORD *)(v18 + v24 + 16) = a7;
        *(_QWORD *)(v18 + v24 + 24) = a5;
      }
    }
  }
  v25 = FdoExt(a1, v18, v19, v20);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v26 = *(_QWORD *)(a1 + 64);
      if ( v26 )
      {
        v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 880), 0xFFFFFFFF);
        v28 = *(_DWORD *)(v26 + 884);
        v29 = *(_QWORD *)(v26 + 888);
        v30 = 32LL * ((v27 - 1) & v28);
        *(_DWORD *)(v30 + v29) = 1296783201;
        *(_QWORD *)(v30 + v29 + 8) = 0LL;
        *(_QWORD *)(v30 + v29 + 16) = a6;
        *(_QWORD *)(v30 + v29 + 24) = a5;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( !Pool2 )
    goto LABEL_46;
  v35 = *(__int64 (__fastcall **)(__int64, __int64))(FdoExt(a1, v31, v33, v34) + 4768);
  if ( !v35 || (LOBYTE(v36) = v54, (v37 = v35(a1, v36)) == 0) )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_46:
    LOBYTE(v51) = -102;
LABEL_47:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v31,
        1,
        49,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        a6,
        v51);
    Log(a1, 8, 1364476705, a7, a5);
    if ( a2 )
      UsbhEnableTimerObject(a1, a2, 0, a6, a5, a7);
    v8 = 1;
    goto LABEL_43;
  }
  *((_QWORD *)Pool2 + 5) = v37;
  *Pool2 = 1230463592;
  Pool2[1] = a7;
  Pool2[3] = a6;
  *((_QWORD *)Pool2 + 4) = a5;
  *((_QWORD *)Pool2 + 2) = a1;
  *((_QWORD *)Pool2 + 3) = a3;
  ExInterlockedInsertTailList((PLIST_ENTRY)(v25 + 2784), (PLIST_ENTRY)Pool2 + 3, (PKSPIN_LOCK)(v25 + 2800));
  if ( Pool2[1] != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v41 = *(_QWORD *)(a1 + 64);
      if ( v41 )
      {
        v42 = _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 880), 0xFFFFFFFF);
        v43 = *(_DWORD *)(v41 + 884);
        v44 = *(_QWORD *)(v41 + 888);
        v38 = 32LL * ((v42 - 1) & v43);
        *(_DWORD *)(v38 + v44) = 726485847;
        *(_QWORD *)(v38 + v44 + 8) = 0LL;
        *(_QWORD *)(v38 + v44 + 16) = 0LL;
        *(_QWORD *)(v38 + v44 + 24) = Pool2;
      }
    }
  }
  _InterlockedIncrement(Pool2 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v45 = *(_QWORD *)(a1 + 64);
      if ( v45 )
      {
        v46 = _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 880), 0xFFFFFFFF);
        v47 = *(_DWORD *)(v45 + 884);
        v48 = *(_QWORD *)(v45 + 888);
        v38 = 32LL * ((v46 - 1) & v47);
        *(_DWORD *)(v38 + v48) = 726488145;
        *(_QWORD *)(v38 + v48 + 8) = 0LL;
        *(_QWORD *)(v38 + v48 + 16) = a7;
        *(_QWORD *)(v38 + v48 + 24) = Pool2;
      }
    }
  }
  v49 = *((_QWORD *)Pool2 + 5);
  v50 = *(void (__fastcall **)(__int64, __int64, void *, _QWORD, _DWORD *, int))(FdoExt(a1, v38, v39, v40) + 4784);
  if ( v50 )
  {
    LOBYTE(v53) = v54;
    v50(a1, v49, &UsbhHubWorker, v56, Pool2, v53);
    v51 = 0;
  }
  else
  {
    v51 = -1073741822;
  }
  LODWORD(v31) = -1073741824;
  if ( (v51 & 0xC0000000) == 0xC0000000 )
    goto LABEL_47;
LABEL_43:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v31,
      1,
      50,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6,
      v8);
  return v8;
}
