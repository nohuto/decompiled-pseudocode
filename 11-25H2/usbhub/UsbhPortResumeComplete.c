/*
 * XREFs of UsbhPortResumeComplete @ 0x1400130F0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhLogSignalResumeEvent @ 0x1400139C4 (UsbhLogSignalResumeEvent.c)
 *     UsbhRawWait @ 0x140014184 (UsbhRawWait.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPortResumeComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  KIRQL v12; // al
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // rdx
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // r12
  char v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // edx
  _DWORD *Pool2; // rdi
  __int64 (__fastcall *v32)(__int64, __int64); // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rsi
  void (__fastcall *v40)(__int64, __int64, void *, _QWORD, _DWORD *, int); // rax
  int v41; // ecx
  int v43; // r9d
  int v44; // [rsp+28h] [rbp-40h]

  v6 = 10;
  v7 = PdoExt(a3);
  if ( (v7[706] & 0x80u) != 0 )
    v6 = *(unsigned __int8 *)(*((_QWORD *)v7 + 357) + 4LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      37,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1297306224;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1953063287;
        *(_QWORD *)(v11 + 16) = v6;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
    }
  }
  UsbhRawWait(v6);
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v13 = *(unsigned __int16 *)(a2 + 4);
    v14 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 448) = 1;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
          *(_DWORD *)v16 = 1986359664;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 16) = v14;
          *(_QWORD *)(v16 + 24) = v13;
        }
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
  }
  v17 = PdoExt(a3);
  UsbhLatchPdo(a1, *((_WORD *)v17 + 714), 0LL, 0x73737057u);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
        *(_DWORD *)v19 = 1262573427;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = a3;
        *(_QWORD *)(v19 + 24) = 0LL;
      }
    }
  }
  v20 = v17 + 406;
  v21 = 0;
  FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v23 = 1129141329;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = 2001752915LL;
        *(_QWORD *)(v23 + 24) = a3;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0);
  v24 = *((_BYTE *)FdoExt(a1) + 5268);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 1297568097;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = 2001752915LL;
        *(_QWORD *)(v26 + 24) = a3;
      }
    }
  }
  v27 = FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v28 = *(_QWORD *)(a1 + 64);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
        *(_DWORD *)v29 = 1296783201;
        *(_QWORD *)(v29 + 8) = 0LL;
        *(_QWORD *)(v29 + 16) = 0LL;
        *(_QWORD *)(v29 + 24) = a3;
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
      0);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( !Pool2 )
    goto LABEL_66;
  v32 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)FdoExt(a1) + 596);
  if ( !v32 || (LOBYTE(v33) = v24, (v34 = v32(a1, v33)) == 0) )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_66:
    LOBYTE(v41) = -102;
LABEL_67:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v30,
        1,
        49,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0,
        v41);
    Log(a1, 8, 1364476705, 2001752915, a3);
    if ( v20 )
      UsbhEnableTimerObject(a1, (_DWORD)v20, 0, 0, a3, v43);
    v21 = 1;
    goto LABEL_63;
  }
  *((_QWORD *)Pool2 + 5) = v34;
  *Pool2 = 1230463592;
  *((_QWORD *)Pool2 + 3) = UsbhSS_PdoWakeWorker;
  Pool2[1] = 2001752915;
  Pool2[3] = 0;
  *((_QWORD *)Pool2 + 4) = a3;
  *((_QWORD *)Pool2 + 2) = a1;
  ExInterlockedInsertTailList((PLIST_ENTRY)v27 + 174, (PLIST_ENTRY)Pool2 + 3, (PKSPIN_LOCK)v27 + 350);
  if ( Pool2[1] != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v35 = *(_QWORD *)(a1 + 64);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
        *(_DWORD *)v36 = 726485847;
        *(_QWORD *)(v36 + 8) = 0LL;
        *(_QWORD *)(v36 + 16) = 0LL;
        *(_QWORD *)(v36 + 24) = Pool2;
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
      0);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v37 = *(_QWORD *)(a1 + 64);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
        *(_DWORD *)v38 = 726488145;
        *(_QWORD *)(v38 + 8) = 0LL;
        *(_QWORD *)(v38 + 16) = 2001752915LL;
        *(_QWORD *)(v38 + 24) = Pool2;
      }
    }
  }
  v39 = *((_QWORD *)Pool2 + 5);
  v40 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, _DWORD *, int))*((_QWORD *)FdoExt(a1) + 598);
  if ( v40 )
  {
    LOBYTE(v44) = v24;
    v40(a1, v39, &UsbhHubWorker, 0LL, Pool2, v44);
    v41 = 0;
  }
  else
  {
    v41 = -1073741822;
  }
  v30 = -1073741824;
  if ( (v41 & 0xC0000000) == 0xC0000000 )
    goto LABEL_67;
LABEL_63:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v30,
      1,
      50,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0,
      v21);
  return 0LL;
}
