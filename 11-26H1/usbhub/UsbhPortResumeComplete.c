/*
 * XREFs of UsbhPortResumeComplete @ 0x14000B520
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhLogSignalResumeEvent @ 0x14000BE24 (UsbhLogSignalResumeEvent.c)
 *     UsbhRawWait @ 0x14000C600 (UsbhRawWait.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPortResumeComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  signed __int32 v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  KIRQL v20; // al
  __int64 v21; // r10
  KIRQL v22; // r9
  __int64 v23; // r11
  __int64 v24; // rdx
  signed __int32 v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  signed __int32 v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // r12
  char v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  signed __int32 v43; // eax
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // r15
  __int64 v50; // rcx
  signed __int32 v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rcx
  signed __int32 v56; // eax
  unsigned int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdx
  _DWORD *Pool2; // rdi
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 (__fastcall *v64)(__int64, __int64); // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  signed __int32 v71; // eax
  unsigned int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // rcx
  signed __int32 v75; // eax
  unsigned int v76; // edx
  __int64 v77; // rcx
  __int64 v78; // rsi
  void (__fastcall *v79)(__int64, __int64, void *, _QWORD, _DWORD *, int); // rax
  int v80; // ecx
  int v82; // r9d
  int v83; // [rsp+28h] [rbp-40h]

  v6 = 10;
  v7 = PdoExt(a3);
  if ( (*(_DWORD *)(v7 + 2824) & 0x80u) != 0 )
    v6 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 2856) + 4LL);
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
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = 1297306224;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = a2;
        *(_QWORD *)(v12 + v11 + 24) = 0LL;
      }
    }
  }
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 880), 0xFFFFFFFF);
        v15 = *(_DWORD *)(v13 + 884);
        v16 = *(_QWORD *)(v13 + 888);
        v17 = 32LL * ((v14 - 1) & v15);
        *(_DWORD *)(v17 + v16) = 1953063287;
        *(_QWORD *)(v17 + v16 + 16) = v6;
        *(_QWORD *)(v17 + v16 + 8) = 0LL;
        *(_QWORD *)(v17 + v16 + 24) = 0LL;
      }
    }
  }
  UsbhRawWait(v6);
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2, v18, v19) )
  {
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v21 = *(unsigned __int16 *)(a2 + 4);
    v22 = v20;
    v23 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 448) = 1;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 880), 0xFFFFFFFF);
          v26 = *(_DWORD *)(v24 + 884);
          v27 = *(_QWORD *)(v24 + 888);
          v28 = 32LL * ((v25 - 1) & v26);
          *(_DWORD *)(v28 + v27) = 1986359664;
          *(_QWORD *)(v28 + v27 + 8) = 0LL;
          *(_QWORD *)(v28 + v27 + 16) = v23;
          *(_QWORD *)(v28 + v27 + 24) = v21;
        }
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v22);
  }
  v29 = PdoExt(a3);
  UsbhLatchPdo(a1, *(unsigned __int16 *)(v29 + 1428), 0LL, 1936945239LL);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 880), 0xFFFFFFFF);
        v35 = *(_DWORD *)(v33 + 884);
        v36 = *(_QWORD *)(v33 + 888);
        v30 = 32LL * ((v34 - 1) & v35);
        *(_DWORD *)(v30 + v36) = 1262573427;
        *(_QWORD *)(v30 + v36 + 8) = 0LL;
        *(_QWORD *)(v30 + v36 + 16) = a3;
        *(_QWORD *)(v30 + v36 + 24) = 0LL;
      }
    }
  }
  v37 = v29 + 1624;
  v38 = 0;
  FdoExt(a1, v30, v31, v32);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v42 = *(_QWORD *)(a1 + 64);
      if ( v42 )
      {
        v43 = _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 880), 0xFFFFFFFF);
        v44 = *(_DWORD *)(v42 + 884);
        v45 = *(_QWORD *)(v42 + 888);
        v39 = 32LL * ((v43 - 1) & v44);
        *(_DWORD *)(v39 + v45) = 1129141329;
        *(_QWORD *)(v39 + v45 + 8) = 0LL;
        *(_QWORD *)(v39 + v45 + 16) = 2001752915LL;
        *(_QWORD *)(v39 + v45 + 24) = a3;
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
  v49 = *(_BYTE *)(FdoExt(a1, v39, v40, v41) + 5268);
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
      v50 = *(_QWORD *)(a1 + 64);
      if ( v50 )
      {
        v51 = _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 880), 0xFFFFFFFF);
        v52 = *(_DWORD *)(v50 + 884);
        v53 = *(_QWORD *)(v50 + 888);
        v46 = 32LL * ((v51 - 1) & v52);
        *(_DWORD *)(v46 + v53) = 1297568097;
        *(_QWORD *)(v46 + v53 + 8) = 0LL;
        *(_QWORD *)(v46 + v53 + 16) = 2001752915LL;
        *(_QWORD *)(v46 + v53 + 24) = a3;
      }
    }
  }
  v54 = FdoExt(a1, v46, v47, v48);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v55 = *(_QWORD *)(a1 + 64);
      if ( v55 )
      {
        v56 = _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 880), 0xFFFFFFFF);
        v57 = *(_DWORD *)(v55 + 884);
        v58 = *(_QWORD *)(v55 + 888);
        v59 = 32LL * ((v56 - 1) & v57);
        *(_DWORD *)(v59 + v58) = 1296783201;
        *(_QWORD *)(v59 + v58 + 8) = 0LL;
        *(_QWORD *)(v59 + v58 + 16) = 0LL;
        *(_QWORD *)(v59 + v58 + 24) = a3;
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
  v64 = *(__int64 (__fastcall **)(__int64, __int64))(FdoExt(a1, v60, v62, v63) + 4768);
  if ( !v64 || (LOBYTE(v65) = v49, (v66 = v64(a1, v65)) == 0) )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_66:
    LOBYTE(v80) = -102;
LABEL_67:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v60,
        1,
        49,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0,
        v80);
    Log(a1, 8, 1364476705, 2001752915LL, a3);
    if ( v37 )
      UsbhEnableTimerObject(a1, v37, 0, 0, a3, v82);
    v38 = 1;
    goto LABEL_63;
  }
  *((_QWORD *)Pool2 + 5) = v66;
  *Pool2 = 1230463592;
  *((_QWORD *)Pool2 + 3) = UsbhSS_PdoWakeWorker;
  Pool2[1] = 2001752915;
  Pool2[3] = 0;
  *((_QWORD *)Pool2 + 4) = a3;
  *((_QWORD *)Pool2 + 2) = a1;
  ExInterlockedInsertTailList((PLIST_ENTRY)(v54 + 2784), (PLIST_ENTRY)Pool2 + 3, (PKSPIN_LOCK)(v54 + 2800));
  if ( Pool2[1] != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v70 = *(_QWORD *)(a1 + 64);
      if ( v70 )
      {
        v71 = _InterlockedExchangeAdd((volatile signed __int32 *)(v70 + 880), 0xFFFFFFFF);
        v72 = *(_DWORD *)(v70 + 884);
        v73 = *(_QWORD *)(v70 + 888);
        v67 = 32LL * ((v71 - 1) & v72);
        *(_DWORD *)(v67 + v73) = 726485847;
        *(_QWORD *)(v67 + v73 + 8) = 0LL;
        *(_QWORD *)(v67 + v73 + 16) = 0LL;
        *(_QWORD *)(v67 + v73 + 24) = Pool2;
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
      v74 = *(_QWORD *)(a1 + 64);
      if ( v74 )
      {
        v75 = _InterlockedExchangeAdd((volatile signed __int32 *)(v74 + 880), 0xFFFFFFFF);
        v76 = *(_DWORD *)(v74 + 884);
        v77 = *(_QWORD *)(v74 + 888);
        v67 = 32LL * ((v75 - 1) & v76);
        *(_DWORD *)(v67 + v77) = 726488145;
        *(_QWORD *)(v67 + v77 + 8) = 0LL;
        *(_QWORD *)(v67 + v77 + 16) = 2001752915LL;
        *(_QWORD *)(v67 + v77 + 24) = Pool2;
      }
    }
  }
  v78 = *((_QWORD *)Pool2 + 5);
  v79 = *(void (__fastcall **)(__int64, __int64, void *, _QWORD, _DWORD *, int))(FdoExt(a1, v67, v68, v69) + 4784);
  if ( v79 )
  {
    LOBYTE(v83) = v49;
    v79(a1, v78, &UsbhHubWorker, 0LL, Pool2, v83);
    v80 = 0;
  }
  else
  {
    v80 = -1073741822;
  }
  LODWORD(v60) = -1073741824;
  if ( (v80 & 0xC0000000) == 0xC0000000 )
    goto LABEL_67;
LABEL_63:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v60,
      1,
      50,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0,
      v38);
  return 0LL;
}
