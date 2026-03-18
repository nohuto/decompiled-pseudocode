/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x140003290
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1400040A0 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140043540 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     WPP_RECORDER_SF_dc @ 0x140045964 (WPP_RECORDER_SF_dc.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1400499D8 (Usbh_iSignalSyncDeviceReset.c)
 */

_UNKNOWN **Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned int v3; // ebx
  char v4; // r14
  KSPIN_LOCK *v7; // r15
  KIRQL v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  void *v27; // rdx
  KSPIN_LOCK *v28; // r14
  KIRQL v29; // r15
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  int v34; // r14d
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  KIRQL v48; // si
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  KIRQL v52; // dl
  KSPIN_LOCK *v53; // rcx
  int v54; // edx
  int v55; // r8d
  _UNKNOWN **result; // rax
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // r9d
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r9
  _QWORD **v66; // rbx
  _QWORD *v67; // r8
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rdx
  __int16 v85; // r9
  PDEVICE_OBJECT v86; // rcx
  int v87; // r9d
  __int64 v88; // r9
  int v89; // r10d
  __int64 v90; // r9
  __int16 v91; // r9
  __int64 v92; // rax
  int v93; // r9d
  KIRQL v94; // r10
  KIRQL v95; // r8
  __int64 v96; // rax
  int v97; // edx
  __int64 v98; // r9
  char v99; // r10
  int v100; // [rsp+20h] [rbp-68h]
  KIRQL v101; // [rsp+98h] [rbp+10h]
  __int64 v102; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v104; // [rsp+B0h] [rbp+28h]
  __int64 v105; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v102 = va_arg(va1, _QWORD);
  v104 = va_arg(va1, _QWORD);
  v105 = va_arg(va1, _QWORD);
  v3 = v102;
  v4 = a3;
  FdoExt(a1, a2, a3, v102);
  v7 = (KSPIN_LOCK *)(a2 + 440);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v101 = v8;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 724267376;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = 4LL;
        *(_QWORD *)(v11 + 24) = v9;
      }
    }
  }
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 724267376;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v13;
        *(_QWORD *)(v15 + 24) = v12;
      }
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = 32 * (v16 + 43);
  *(_DWORD *)(v17 + a2) = 4;
  *(_DWORD *)(v17 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + a2 + 8) = -1;
  *(_DWORD *)(v17 + a2 + 12) = v3;
  *(_QWORD *)(v17 + a2 + 16) = 0LL;
  *(_QWORD *)(v17 + a2 + 24) = 0LL;
  v18 = *(int *)(a2 + 12);
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884))
            + *(_QWORD *)(v20 + 888);
        *(_DWORD *)v21 = 812659807;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = v18;
        *(_QWORD *)(v21 + 24) = v19;
      }
    }
  }
  v22 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 812147537;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = a2;
        *(_QWORD *)(v24 + 24) = v22;
      }
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884))
              + *(_QWORD *)(v25 + 888);
          *(_DWORD *)v26 = 812147537;
          *(_QWORD *)(v26 + 24) = v3;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = a2;
        }
      }
    }
  }
  v27 = &WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v22,
      19,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  if ( (v3 & 0x80000) != 0 )
  {
    v28 = (KSPIN_LOCK *)(FdoExt(a1, v27, v22, &WPP_RECORDER_INITIALIZED) + 4944);
    v29 = KeAcquireSpinLockRaiseToDpc(v28);
    v30 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 1836086128;
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)(v32 + 16) = 0LL;
          *(_QWORD *)(v32 + 24) = v30;
        }
      }
    }
    if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
    {
      KeResetEvent((PRKEVENT)(a2 + 800));
      *(_QWORD *)(a2 + 792) = a2;
    }
    KeReleaseSpinLock(v28, v29);
    v7 = (KSPIN_LOCK *)(a2 + 440);
  }
  switch ( (_DWORD)v18 )
  {
    case 2:
      v33 = v105;
      v34 = v104;
      v35 = UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v19, (unsigned int)va, v104, v105);
      v36 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v37 = *(_QWORD *)(a1 + 64);
          if ( v37 )
          {
            LODWORD(v102) = 846214239;
            v38 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884))
                + *(_QWORD *)(v37 + 888);
            *(_DWORD *)v38 = v102;
            *(_QWORD *)(v38 + 8) = 0LL;
            *(_QWORD *)(v38 + 16) = v35;
            *(_QWORD *)(v38 + 24) = v36;
          }
        }
      }
      if ( v35 >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            20,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v19);
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v39 = *(_QWORD *)(a1 + 64);
            if ( v39 )
            {
              LODWORD(v102) = 827353457;
              v40 = *(_QWORD *)(v39 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
              *(_DWORD *)v40 = v102;
              *(_QWORD *)(v40 + 8) = 0LL;
              *(_QWORD *)(v40 + 16) = a2;
              *(_QWORD *)(v40 + 24) = v19;
            }
          }
        }
        v41 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v41 + a2 + 1384) = 4;
        v42 = *(unsigned __int16 *)(a2 + 4);
        v43 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v44 = *(_QWORD *)(a1 + 64);
            if ( v44 )
            {
              LODWORD(v102) = 757952880;
              v45 = *(_QWORD *)(v44 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
              *(_DWORD *)v45 = v102;
              *(_QWORD *)(v45 + 8) = 0LL;
              *(_QWORD *)(v45 + 16) = v43;
              *(_QWORD *)(v45 + 24) = v42;
            }
          }
        }
        v46 = *(_DWORD *)(a2 + 12);
        v47 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v47 + a2 + 1384) = v46;
        KeReleaseSpinLock(v7, v101);
        v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
        if ( *(_DWORD *)(a2 + 2412) != 1 )
        {
          *(_DWORD *)(a2 + 2412) = 1;
          if ( (UsbhLogMask & 0x200) != 0 )
          {
            v49 = *(_QWORD *)(a2 + 16);
            if ( v49 )
            {
              v50 = *(_QWORD *)(v49 + 64);
              if ( v50 )
              {
                LODWORD(v102) = 1464029265;
                v51 = 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884))
                    + *(_QWORD *)(v50 + 888);
                *(_DWORD *)v51 = v102;
                *(_QWORD *)(v51 + 8) = 0LL;
                *(_QWORD *)(v51 + 16) = a2;
                *(_QWORD *)(v51 + 24) = 0LL;
              }
            }
          }
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
          IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
        }
        v52 = v48;
        v53 = (KSPIN_LOCK *)(a2 + 2448);
LABEL_54:
        KeReleaseSpinLock(v53, v52);
        goto LABEL_55;
      }
      Log(a1, 8, 1902727218, a2, v19);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v97,
          1,
          21,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v19,
          v99);
      if ( v34 == 1 )
      {
        Log(a1, 512, 1902735480, v33, *(unsigned __int16 *)(a2 + 4));
        Usbh_iSignalSyncDeviceReset(a1, v33, a2);
      }
      else if ( v34 == 2 )
      {
        LOBYTE(v98) = 1;
        UsbhFreePortChangeQueueTimeoutObject(a1, a2, v33, v98);
      }
      break;
    case 7:
      v57 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v58 = *(_QWORD *)(a1 + 64);
          if ( v58 )
          {
            v59 = *(_QWORD *)(v58 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
            *(_DWORD *)v59 = 829437023;
            *(_QWORD *)(v59 + 8) = 0LL;
            *(_QWORD *)(v59 + 16) = 0LL;
            *(_QWORD *)(v59 + 24) = v57;
          }
        }
      }
      v60 = v104;
      v61 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 7;
      *(_DWORD *)(v61 + a2 + 1384) = 7;
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v19, (unsigned int)va, v60, v105);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          55,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      FdoExt(a1, v62, v63, v64);
      v66 = (_QWORD **)(a2 + 456);
      while ( 1 )
      {
        v67 = *v66;
        if ( *v66 == v66 )
          break;
        if ( (_QWORD **)v67[1] != v66 || (v74 = (_QWORD *)*v67, *(_QWORD **)(*v67 + 8LL) != v67) )
          __fastfail(3u);
        *v66 = v74;
        LOBYTE(v65) = 1;
        v74[1] = v66;
        UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v67 - 2), v65);
      }
      v68 = *(unsigned __int16 *)(a2 + 4);
      v69 = *(int *)(a2 + 12);
      *(_DWORD *)(a2 + 2876) = 0;
      *(_BYTE *)(a2 + 2839) = 0;
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v70 = *(_QWORD *)(a1 + 64);
          if ( v70 )
          {
            LODWORD(v102) = 757952880;
            v71 = *(_QWORD *)(v70 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v70 + 880)) & *(_DWORD *)(v70 + 884));
            *(_DWORD *)v71 = v102;
            *(_QWORD *)(v71 + 8) = 0LL;
            *(_QWORD *)(v71 + 16) = v69;
            *(_QWORD *)(v71 + 24) = v68;
          }
        }
      }
      v72 = *(_DWORD *)(a2 + 12);
      v52 = v101;
      v73 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v73 + a2 + 1384) = v72;
      v53 = v7;
      goto LABEL_54;
    case 3:
LABEL_79:
      v75 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v76 = *(_QWORD *)(a1 + 64);
          if ( v76 )
          {
            v77 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v76 + 880)) & *(_DWORD *)(v76 + 884))
                + *(_QWORD *)(v76 + 888);
            *(_DWORD *)v77 = 879768671;
            *(_QWORD *)(v77 + 8) = 0LL;
            *(_QWORD *)(v77 + 16) = 0LL;
            *(_QWORD *)(v77 + 24) = v75;
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          23,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v19);
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v19, (unsigned int)va, v104, v105);
      v78 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 14;
      *(_DWORD *)(v78 + a2 + 1384) = 14;
      v79 = *(unsigned __int16 *)(a2 + 4);
      v80 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v81 = *(_QWORD *)(a1 + 64);
          if ( v81 )
          {
            LODWORD(v102) = 757952880;
            v82 = *(_QWORD *)(v81 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v81 + 880)) & *(_DWORD *)(v81 + 884));
            *(_DWORD *)v82 = v102;
            *(_QWORD *)(v82 + 8) = 0LL;
            *(_QWORD *)(v82 + 16) = v80;
            *(_QWORD *)(v82 + 24) = v79;
          }
        }
      }
      v53 = v7;
      v83 = *(_DWORD *)(a2 + 12);
      v84 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v84 + a2 + 1384) = v83;
      v52 = v101;
      goto LABEL_54;
    default:
      switch ( (int)v18 )
      {
        case 1:
        case 18:
          Log(a1, 512, 1597272118, 0, *(unsigned __int16 *)(a2 + 4));
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_108;
          v86 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v91 )
            goto LABEL_108;
          v87 = 25;
          break;
        case 4:
          Log(a1, 512, 1597272115, 0, *(unsigned __int16 *)(a2 + 4));
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_108;
          v86 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v85 )
            goto LABEL_108;
          v87 = 22;
          break;
        case 5:
        case 6:
        case 11:
        case 12:
        case 13:
        case 15:
        case 16:
        case 17:
        case 20:
          Log(a1, 512, 1597272117, v104, *(unsigned __int16 *)(a2 + 4));
          if ( v89 == 1 )
          {
            Log(a1, 512, 1597272184, v105, *(unsigned __int16 *)(a2 + 4));
            Usbh_iSignalSyncDeviceReset(a1, v90, a2);
          }
          else if ( v89 == 2 )
          {
            LOBYTE(v88) = 1;
            UsbhFreePortChangeQueueTimeoutObject(a1, a2, v105, v88);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              24,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              v19);
          }
          goto LABEL_120;
        case 8:
        case 10:
          Log(a1, 512, 1597272119, 0, *(unsigned __int16 *)(a2 + 4));
          UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v19, (unsigned int)va, v104, v105);
          v92 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 10;
          *(_DWORD *)(v92 + a2 + 1384) = 10;
          goto LABEL_120;
        case 9:
          Log(a1, 512, 1597272120, 0, *(unsigned __int16 *)(a2 + 4));
          UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v19, (unsigned int)va, v104, v105);
          goto LABEL_120;
        case 14:
          goto LABEL_79;
        default:
          Log(a1, 512, 1597272152, 0, *(unsigned __int16 *)(a2 + 4));
          v95 = v94;
          v96 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v96 + a2 + 1384) = 19;
          goto LABEL_121;
      }
      WPP_RECORDER_SF_d(v86->DeviceExtension, 0, 1, v87, (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids, v19);
LABEL_108:
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v19, (unsigned int)va, v104, v105);
      break;
  }
LABEL_120:
  v95 = v101;
  v93 = 0;
LABEL_121:
  UsbhUnlockPcqWithTag(a1, a2, v95, v93);
LABEL_55:
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v54, v55, 26, v100, v19, v18);
  }
  return result;
}
