/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x1400011C0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSignalPauseEvent @ 0x140001008 (UsbhSignalPauseEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x140001CC8 (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x140021BAC (UsbhBusUnlatchPdo.c)
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14002414C (UsbhReleaseEnumBusLockEx.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r10
  int v8; // edx
  __int64 v9; // r13
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  KIRQL v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  KIRQL v18; // r14
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  signed __int32 v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rcx
  signed __int32 v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx
  KIRQL v40; // bp
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r9
  _QWORD **v45; // rsi
  _QWORD *v46; // r8
  __int64 v47; // r9
  __int64 v48; // r10
  __int64 v49; // rdx
  signed __int32 v50; // eax
  unsigned int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rsi
  __int64 v58; // rcx
  signed __int32 v59; // eax
  unsigned int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  KIRQL v66; // r15
  __int64 v67; // rcx
  signed __int32 v68; // eax
  unsigned int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // r14
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rcx
  signed __int32 v78; // eax
  unsigned int v79; // edx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rbp
  __int64 Pool2; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rdx
  __int64 v86; // rcx
  signed __int32 v87; // eax
  unsigned int v88; // edx
  __int64 v89; // rcx
  __int64 v90; // rdx
  _QWORD *v91; // rax
  int v92; // esi
  int v93; // esi
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  KIRQL v97; // r14
  int v98; // r9d

  v6 = ((__int64 (*)(void))FdoExt)();
  v7 = *(unsigned __int16 *)(a2 + 4);
  v8 = (unsigned __int16)v7;
  v9 = v6;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        v14 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v14 + v13) = 812661041;
        *(_QWORD *)(v14 + v13 + 8) = 0LL;
        *(_QWORD *)(v14 + v13 + 16) = a2;
        *(_QWORD *)(v14 + v13 + 24) = v7;
        v8 = *(unsigned __int16 *)(a2 + 4);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      45,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      a3);
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v17 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v18 = v15;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
        v21 = *(_DWORD *)(v19 + 884);
        v22 = *(_QWORD *)(v19 + 888);
        v16 = 32LL * ((v20 - 1) & v21);
        *(_DWORD *)(v16 + v22) = 724267376;
        *(_QWORD *)(v16 + v22 + 8) = 0LL;
        *(_QWORD *)(v16 + v22 + 16) = 19LL;
        *(_QWORD *)(v16 + v22 + 24) = v17;
      }
    }
  }
  v23 = *(unsigned __int16 *)(a2 + 4);
  v24 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 880), 0xFFFFFFFF);
        v27 = *(_DWORD *)(v25 + 884);
        v28 = *(_QWORD *)(v25 + 888);
        v16 = 32LL * ((v26 - 1) & v27);
        *(_DWORD *)(v16 + v28) = 724267376;
        *(_QWORD *)(v16 + v28 + 8) = 0LL;
        *(_QWORD *)(v16 + v28 + 16) = v24;
        *(_QWORD *)(v16 + v28 + 24) = v23;
      }
    }
  }
  v29 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v29;
  v30 = 32 * (v29 + 43);
  *(_DWORD *)(v30 + a2) = 19;
  *(_DWORD *)(v30 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v30 + a2 + 8) = -1;
  *(_QWORD *)(v30 + a2 + 12) = 0LL;
  *(_QWORD *)(v30 + a2 + 20) = 0LL;
  *(_DWORD *)(v30 + a2 + 28) = 0;
  v31 = *(_DWORD *)(a2 + 12);
  if ( v31 == 5 || *(_DWORD *)(a2 + 12) == 6 || *(_DWORD *)(a2 + 12) == 12 || *(_DWORD *)(a2 + 12) == 16 )
  {
    v32 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v31;
    *(_DWORD *)(v32 + a2 + 1384) = v31;
    v33 = FdoExt(a1, v16, v23, v24);
    v34 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v35 = *(_QWORD *)(a1 + 64);
        if ( v35 )
        {
          v36 = _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 880), 0xFFFFFFFF);
          v37 = *(_DWORD *)(v35 + 884);
          v38 = *(_QWORD *)(v35 + 888);
          v39 = 32LL * ((v36 - 1) & v37);
          *(_DWORD *)(v39 + v38) = 1397778803;
          *(_QWORD *)(v39 + v38 + 8) = 0LL;
          *(_QWORD *)(v39 + v38 + 16) = 0LL;
          *(_QWORD *)(v39 + v38 + 24) = v34;
        }
      }
    }
    v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v33 + 4944));
    if ( *(_QWORD *)(a2 + 792) )
    {
      *(_QWORD *)(a2 + 792) = 0LL;
      KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v33 + 4944), v40);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        55,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    FdoExt(a1, v41, v42, v43);
    v45 = (_QWORD **)(a2 + 456);
    while ( 1 )
    {
      v46 = *v45;
      if ( *v45 == v45 )
        break;
      if ( (_QWORD **)v46[1] != v45 )
        goto LABEL_71;
      v91 = (_QWORD *)*v46;
      if ( *(_QWORD **)(*v46 + 8LL) != v46 )
        goto LABEL_71;
      *v45 = v91;
      LOBYTE(v44) = 1;
      v91[1] = v45;
      UsbhFreePortChangeQueueObject(a1, a2, v46 - 2, v44);
    }
    v47 = *(unsigned __int16 *)(a2 + 4);
    v48 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 2876) = 0;
    *(_BYTE *)(a2 + 2839) = 0;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v49 = *(_QWORD *)(a1 + 64);
        if ( v49 )
        {
          v50 = _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 880), 0xFFFFFFFF);
          v51 = *(_DWORD *)(v49 + 884);
          v52 = *(_QWORD *)(v49 + 888);
          v53 = 32LL * ((v50 - 1) & v51);
          *(_DWORD *)(v53 + v52) = 757952880;
          *(_QWORD *)(v53 + v52 + 8) = 0LL;
          *(_QWORD *)(v53 + v52 + 16) = v48;
          *(_QWORD *)(v53 + v52 + 24) = v47;
        }
      }
    }
    v54 = *(_DWORD *)(a2 + 12);
    v55 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v55 + a2 + 1384) = v54;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v18);
    v56 = *(unsigned __int16 *)(a2 + 4);
    v57 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v58 = *(_QWORD *)(a1 + 64);
        if ( v58 )
        {
          v59 = _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 880), 0xFFFFFFFF);
          v60 = *(_DWORD *)(v58 + 884);
          v61 = *(_QWORD *)(v58 + 888);
          v62 = 32LL * ((v59 - 1) & v60);
          *(_DWORD *)(v62 + v61) = 1329877100;
          *(_QWORD *)(v62 + v61 + 8) = 0LL;
          *(_QWORD *)(v62 + v61 + 16) = v56;
          *(_QWORD *)(v62 + v61 + 24) = 1884308559LL;
        }
      }
    }
    v66 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_140070600 = (__int64)&dword_140070608;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v67 = *(_QWORD *)(a1 + 64);
        if ( v67 )
        {
          v68 = _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 880), 0xFFFFFFFF);
          v69 = *(_DWORD *)(v67 + 884);
          v70 = *(_QWORD *)(v67 + 888);
          v63 = 32LL * ((v68 - 1) & v69);
          *(_DWORD *)(v63 + v70) = 1413771367;
          *(_QWORD *)(v63 + v70 + 8) = 0LL;
          *(_QWORD *)(v63 + v70 + 16) = v56;
          *(_QWORD *)(v63 + v70 + 24) = 0LL;
        }
      }
    }
    if ( (_WORD)v56 )
    {
      v71 = FdoExt(a1, v63, v64, v65);
      if ( (unsigned __int16)v56 <= *(unsigned __int8 *)(FdoExt(a1, v72, v73, v74) + 2938) )
      {
        v75 = *(_QWORD *)(v71 + 3056);
        if ( v75 )
        {
          v76 = v75 + 2928 * v56 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v77 = *(_QWORD *)(a1 + 64);
              if ( v77 )
              {
                v78 = _InterlockedExchangeAdd((volatile signed __int32 *)(v77 + 880), 0xFFFFFFFF);
                v79 = *(_DWORD *)(v77 + 884);
                v80 = *(_QWORD *)(v77 + 888);
                v81 = 32LL * ((v78 - 1) & v79);
                *(_DWORD *)(v81 + v80) = 1044672615;
                *(_QWORD *)(v81 + v80 + 8) = 0LL;
                *(_QWORD *)(v81 + v80 + 16) = v56;
                *(_QWORD *)(v81 + v80 + 24) = v76;
              }
            }
          }
          if ( v76 )
          {
            v57 = *(_QWORD *)(v76 + 392);
            if ( v57 )
            {
              v82 = PdoExt(*(_QWORD *)(v76 + 392));
              Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
              if ( Pool2 )
              {
                *(_DWORD *)Pool2 = 1668571500;
                *(_QWORD *)(Pool2 + 32) = v57;
                *(_DWORD *)(Pool2 + 24) = 1884308559;
                *(_QWORD *)(Pool2 + 40) = 0LL;
                v84 = (_QWORD *)(Pool2 + 8);
                v85 = *(_QWORD **)(v82 + 1280);
                if ( *v85 != v82 + 1272 )
LABEL_71:
                  __fastfail(3u);
                *v84 = v82 + 1272;
                v84[1] = v85;
                *v85 = v84;
                *(_QWORD *)(v82 + 1280) = v84;
              }
              else
              {
                ++*(_DWORD *)(v82 + 1288);
              }
            }
          }
        }
      }
    }
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v66);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v86 = *(_QWORD *)(a1 + 64);
        if ( v86 )
        {
          v87 = _InterlockedExchangeAdd((volatile signed __int32 *)(v86 + 880), 0xFFFFFFFF);
          v88 = *(_DWORD *)(v86 + 884);
          v89 = *(_QWORD *)(v86 + 888);
          v90 = 32LL * ((v87 - 1) & v88);
          *(_DWORD *)(v90 + v89) = 1634744625;
          *(_QWORD *)(v90 + v89 + 8) = 0LL;
          *(_QWORD *)(v90 + v89 + 16) = a2;
          *(_QWORD *)(v90 + v89 + 24) = v57;
        }
      }
    }
    if ( v57 )
    {
      *(_DWORD *)(a2 + 416) = 1;
      v97 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 5168));
      if ( *(_QWORD *)(PdoExt(v57) + 864) )
      {
        Log(a1, 4, 825847906, v57, 0LL);
        KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 5168), v97);
        UsbhCancelResetTimeout(a1, a2, 1LL);
        UsbhReleaseEnumBusLockEx(a1, a3, *(unsigned __int16 *)(a2 + 4));
        UsbhSignalSyncDeviceReset(a1, v57, a2, 3221225473LL);
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 5168), v97);
      }
      UsbhBusUnlatchPdo(a1, v57, a2, v98, 0LL);
    }
  }
  else
  {
    UsbhFlushPortChangeQueue(a1, a2, v23, v24);
    v92 = v31 - 10;
    if ( v92 )
    {
      v93 = v92 - 3;
      if ( v93 )
      {
        if ( v93 == 1 )
        {
          v94 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v94 + a2 + 1384) = 3;
        }
      }
      else
      {
        v95 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v95 + a2 + 1384) = 12;
      }
    }
    else
    {
      v96 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v96 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v18, 0);
  }
}
