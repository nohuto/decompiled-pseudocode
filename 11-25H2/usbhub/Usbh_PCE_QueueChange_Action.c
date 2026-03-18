/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x140026210
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhUnlockPcqWithTag @ 0x140024D80 (UsbhUnlockPcqWithTag.c)
 *     UsbhInsertQueuePortChangeObject @ 0x140026F80 (UsbhInsertQueuePortChangeObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140043A1C (UsbhFreePortChangeQueueTimeoutObject.c)
 *     WPP_RECORDER_SF_dc @ 0x140045E28 (WPP_RECORDER_SF_dc.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x140049E24 (Usbh_iSignalSyncDeviceReset.c)
 */

_UNKNOWN **Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, char a3, ...)
{
  KSPIN_LOCK *v6; // r15
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  KSPIN_LOCK *v26; // r15
  KIRQL v27; // r12
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r14
  int v32; // r15d
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  KIRQL v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  KIRQL v50; // dl
  KSPIN_LOCK *v51; // rcx
  int v52; // edx
  int v53; // r8d
  _UNKNOWN **result; // rax
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // r9d
  __int64 v59; // rax
  _QWORD **v60; // r14
  _QWORD *v61; // r8
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rdx
  __int16 v79; // r9
  PDEVICE_OBJECT v80; // rcx
  int v81; // r9d
  __int64 v82; // r9
  int v83; // r10d
  __int64 v84; // r9
  __int16 v85; // r9
  __int64 v86; // rax
  int v87; // r9d
  KIRQL v88; // r10
  KIRQL v89; // r8
  __int64 v90; // rax
  int v91; // edx
  __int64 v92; // r9
  char v93; // r10
  int v94; // [rsp+20h] [rbp-30h]
  __int64 v95; // [rsp+48h] [rbp-8h]
  KIRQL v96; // [rsp+98h] [rbp+48h]
  __int64 v97; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  __int64 v99; // [rsp+B0h] [rbp+60h]
  __int64 v100; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v97 = va_arg(va1, _QWORD);
  v99 = va_arg(va1, _QWORD);
  v100 = va_arg(va1, _QWORD);
  FdoExt(a1);
  v6 = (KSPIN_LOCK *)(a2 + 440);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v96 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 724267376;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 4LL;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 724267376;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v11;
      }
    }
  }
  v15 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v15;
  v16 = a2 + 32 * (v15 + 43);
  *(_DWORD *)v16 = 4;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v16 + 12) = v97;
  *(_DWORD *)(v16 + 8) = -1;
  *(_QWORD *)(v16 + 16) = 0LL;
  *(_QWORD *)(v16 + 24) = 0LL;
  v17 = *(unsigned __int16 *)(a2 + 4);
  v18 = *(int *)(a2 + 12);
  v95 = v17;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = 812659807;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v18;
        *(_QWORD *)(v20 + 24) = v17;
      }
    }
  }
  v21 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v23 = 812147537;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = a2;
        *(_QWORD *)(v23 + 24) = v21;
      }
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_DWORD *)v25 = 812147537;
          *(_QWORD *)(v25 + 24) = (unsigned int)v97;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = a2;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v21,
      19,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  if ( (v97 & 0x80000) != 0 )
  {
    v26 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
    v27 = KeAcquireSpinLockRaiseToDpc(v26);
    v28 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v29 = *(_QWORD *)(a1 + 64);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
          *(_DWORD *)v30 = 1836086128;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 16) = 0LL;
          *(_QWORD *)(v30 + 24) = v28;
        }
      }
    }
    if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
    {
      KeResetEvent((PRKEVENT)(a2 + 800));
      *(_QWORD *)(a2 + 792) = a2;
    }
    KeReleaseSpinLock(v26, v27);
    v17 = v95;
    v6 = (KSPIN_LOCK *)(a2 + 440);
  }
  switch ( (_DWORD)v18 )
  {
    case 2:
      v31 = v100;
      v32 = v99;
      v33 = UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v99, v100);
      v34 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v35 = *(_QWORD *)(a1 + 64);
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
            *(_DWORD *)v36 = 846214239;
            *(_QWORD *)(v36 + 8) = 0LL;
            *(_QWORD *)(v36 + 16) = v33;
            *(_QWORD *)(v36 + 24) = v34;
          }
        }
      }
      if ( v33 >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            20,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v17);
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
              *(_DWORD *)v38 = 827353457;
              *(_QWORD *)(v38 + 8) = 0LL;
              *(_QWORD *)(v38 + 16) = a2;
              *(_QWORD *)(v38 + 24) = v17;
            }
          }
        }
        v39 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v39 + a2 + 1384) = 4;
        v40 = *(unsigned __int16 *)(a2 + 4);
        v41 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v42 = *(_QWORD *)(a1 + 64);
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
              *(_DWORD *)v43 = 757952880;
              *(_QWORD *)(v43 + 8) = 0LL;
              *(_QWORD *)(v43 + 16) = v41;
              *(_QWORD *)(v43 + 24) = v40;
            }
          }
        }
        v44 = *(_DWORD *)(a2 + 12);
        v45 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v45 + a2 + 8) = v44;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v96);
        v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
        if ( *(_DWORD *)(a2 + 2412) != 1 )
        {
          *(_DWORD *)(a2 + 2412) = 1;
          if ( (UsbhLogMask & 0x200) != 0 )
          {
            v47 = *(_QWORD *)(a2 + 16);
            if ( v47 )
            {
              v48 = *(_QWORD *)(v47 + 64);
              if ( v48 )
              {
                v49 = *(_QWORD *)(v48 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
                *(_DWORD *)v49 = 1464029265;
                *(_QWORD *)(v49 + 8) = 0LL;
                *(_QWORD *)(v49 + 16) = a2;
                *(_QWORD *)(v49 + 24) = 0LL;
              }
            }
          }
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
          IoQueueWorkItem(
            *(PIO_WORKITEM *)(a2 + 2456),
            (PIO_WORKITEM_ROUTINE)UsbhHubProcessChangeWorker,
            DelayedWorkQueue,
            (PVOID)a2);
        }
        v50 = v46;
        v51 = (KSPIN_LOCK *)(a2 + 2448);
LABEL_54:
        KeReleaseSpinLock(v51, v50);
        goto LABEL_55;
      }
      Log(a1, 8, 1902727218, a2, v17);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v91,
          1,
          21,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v17,
          v93);
      if ( v32 == 1 )
      {
        Log(a1, 512, 1902735480, v31, *(unsigned __int16 *)(a2 + 4));
        Usbh_iSignalSyncDeviceReset(a1, v31, a2);
      }
      else if ( v32 == 2 )
      {
        LOBYTE(v92) = 1;
        UsbhFreePortChangeQueueTimeoutObject(a1, a2, v31, v92);
      }
      break;
    case 7:
      v55 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v56 = *(_QWORD *)(a1 + 64);
          if ( v56 )
          {
            v57 = *(_QWORD *)(v56 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v56 + 880)) & *(_DWORD *)(v56 + 884));
            *(_DWORD *)v57 = 829437023;
            *(_QWORD *)(v57 + 8) = 0LL;
            *(_QWORD *)(v57 + 16) = 0LL;
            *(_QWORD *)(v57 + 24) = v55;
          }
        }
      }
      v58 = v99;
      v59 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 7;
      *(_DWORD *)(v59 + a2 + 1384) = 7;
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v58, v100);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          55,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      FdoExt(a1);
      v60 = (_QWORD **)(a2 + 456);
      while ( 1 )
      {
        v61 = *v60;
        if ( *v60 == v60 )
          break;
        if ( (_QWORD **)v61[1] != v60 || (v68 = (_QWORD *)*v61, *(_QWORD **)(*v61 + 8LL) != v61) )
          __fastfail(3u);
        *v60 = v68;
        v68[1] = v60;
        UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v61 - 2), 1);
      }
      v62 = *(unsigned __int16 *)(a2 + 4);
      v63 = *(int *)(a2 + 12);
      *(_DWORD *)(a2 + 2876) = 0;
      *(_BYTE *)(a2 + 2839) = 0;
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v64 = *(_QWORD *)(a1 + 64);
          if ( v64 )
          {
            LODWORD(v97) = 757952880;
            v65 = *(_QWORD *)(v64 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v64 + 880)) & *(_DWORD *)(v64 + 884));
            *(_DWORD *)v65 = v97;
            *(_QWORD *)(v65 + 8) = 0LL;
            *(_QWORD *)(v65 + 16) = v63;
            *(_QWORD *)(v65 + 24) = v62;
          }
        }
      }
      v66 = *(_DWORD *)(a2 + 12);
      v50 = v96;
      v67 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v67 + a2 + 8) = v66;
      v51 = v6;
      goto LABEL_54;
    case 3:
LABEL_79:
      v69 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v70 = *(_QWORD *)(a1 + 64);
          if ( v70 )
          {
            v71 = *(_QWORD *)(v70 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v70 + 880)) & *(_DWORD *)(v70 + 884));
            *(_DWORD *)v71 = 879768671;
            *(_QWORD *)(v71 + 8) = 0LL;
            *(_QWORD *)(v71 + 16) = 0LL;
            *(_QWORD *)(v71 + 24) = v69;
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
          v17);
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v99, v100);
      v72 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 14;
      *(_DWORD *)(v72 + a2 + 1384) = 14;
      v73 = *(unsigned __int16 *)(a2 + 4);
      v74 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v75 = *(_QWORD *)(a1 + 64);
          if ( v75 )
          {
            LODWORD(v97) = 757952880;
            v76 = *(_QWORD *)(v75 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v75 + 880)) & *(_DWORD *)(v75 + 884));
            *(_DWORD *)v76 = v97;
            *(_QWORD *)(v76 + 8) = 0LL;
            *(_QWORD *)(v76 + 16) = v74;
            *(_QWORD *)(v76 + 24) = v73;
          }
        }
      }
      v51 = v6;
      v77 = *(_DWORD *)(a2 + 12);
      v78 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v78 + a2 + 8) = v77;
      v50 = v96;
      goto LABEL_54;
    default:
      switch ( (int)v18 )
      {
        case 1:
        case 18:
          Log(a1, 512, 1597272118, 0LL, *(unsigned __int16 *)(a2 + 4));
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_108;
          v80 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v85 )
            goto LABEL_108;
          v81 = 25;
          break;
        case 4:
          Log(a1, 512, 1597272115, 0LL, *(unsigned __int16 *)(a2 + 4));
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_108;
          v80 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v79 )
            goto LABEL_108;
          v81 = 22;
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
          Log(a1, 512, 1597272117, (int)v99, *(unsigned __int16 *)(a2 + 4));
          if ( v83 == 1 )
          {
            Log(a1, 512, 1597272184, v100, *(unsigned __int16 *)(a2 + 4));
            Usbh_iSignalSyncDeviceReset(a1, v84, a2);
          }
          else if ( v83 == 2 )
          {
            LOBYTE(v82) = 1;
            UsbhFreePortChangeQueueTimeoutObject(a1, a2, v100, v82);
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
              v17);
          }
          goto LABEL_120;
        case 8:
        case 10:
          Log(a1, 512, 1597272119, 0LL, *(unsigned __int16 *)(a2 + 4));
          UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v99, v100);
          v86 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 10;
          *(_DWORD *)(v86 + a2 + 1384) = 10;
          goto LABEL_120;
        case 9:
          Log(a1, 512, 1597272120, 0LL, *(unsigned __int16 *)(a2 + 4));
          UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v99, v100);
          goto LABEL_120;
        case 14:
          goto LABEL_79;
        default:
          Log(a1, 512, 1597272152, 0LL, *(unsigned __int16 *)(a2 + 4));
          v89 = v88;
          v90 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v90 + a2 + 1384) = 19;
          goto LABEL_121;
      }
      WPP_RECORDER_SF_d(v80->DeviceExtension, 0, 1, v81, (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids, v17);
LABEL_108:
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v99, v100);
      break;
  }
LABEL_120:
  v89 = v96;
  v87 = 0;
LABEL_121:
  UsbhUnlockPcqWithTag(a1, a2, v89, v87);
LABEL_55:
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v52, v53, 26, v94, v17, v18);
  }
  return result;
}
