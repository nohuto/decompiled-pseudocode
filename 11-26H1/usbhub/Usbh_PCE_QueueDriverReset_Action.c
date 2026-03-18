/*
 * XREFs of Usbh_PCE_QueueDriverReset_Action @ 0x140002018
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x140002710 (UsbhLockPcqWithTag.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1400040A0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1400045E8 (UsbhHubQueueProcessChangeWorker.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dc @ 0x140045964 (WPP_RECORDER_SF_dc.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1400499D8 (Usbh_iSignalSyncDeviceReset.c)
 */

void Usbh_PCE_QueueDriverReset_Action(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v3; // ebx
  char v4; // r14
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  signed __int32 v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  signed __int32 v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rcx
  signed __int32 v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  signed __int32 v44; // eax
  unsigned int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // eax
  KIRQL v49; // dl
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // edx
  int v53; // r8d
  bool v54; // zf
  __int64 v55; // r14
  int v56; // ecx
  __int64 v57; // rax
  int v58; // edx
  char v59; // r10
  __int64 v60; // rdx
  int v61; // [rsp+20h] [rbp-30h]
  KIRQL NewIrql; // [rsp+98h] [rbp+48h] BYREF
  __int64 v63; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  __int64 v65; // [rsp+B0h] [rbp+60h]
  __int64 v66; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v63 = va_arg(va1, _QWORD);
  v65 = va_arg(va1, _QWORD);
  v66 = va_arg(va1, _QWORD);
  v3 = v63;
  NewIrql = 0;
  v4 = a3;
  FdoExt(a1, a2, a3, v63);
  v7 = (int)UsbhLockPcqWithTag(a1, a2, 15, (unsigned int)&NewIrql, v3);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) || (v8 = *(_DWORD *)(a2 + 400), v8 == 1) || v8 == 2 )
  {
    Usbh_iSignalSyncDeviceReset(a1, v66, a2);
    UsbhUnlockPcqWithTag(a1, a2, NewIrql, 0);
    return;
  }
  v9 = *(unsigned __int16 *)(a2 + 4);
  if ( _bittest(&UsbhLogMask, 9u) )
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
        *(_DWORD *)(v14 + v13) = 812660017;
        *(_QWORD *)(v14 + v13 + 8) = 0LL;
        *(_QWORD *)(v14 + v13 + 16) = v7;
        *(_QWORD *)(v14 + v13 + 24) = v9;
      }
    }
  }
  v15 = *(unsigned __int16 *)(a2 + 4);
  if ( _bittest(&UsbhLogMask, 9u) )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
        v18 = *(_DWORD *)(v16 + 884);
        v19 = *(_QWORD *)(v16 + 888);
        v20 = 32LL * ((v17 - 1) & v18);
        *(_DWORD *)(v20 + v19) = 829437233;
        *(_QWORD *)(v20 + v19 + 8) = 0LL;
        *(_QWORD *)(v20 + v19 + 16) = a2;
        *(_QWORD *)(v20 + v19 + 24) = v15;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v15,
      27,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  v21 = *(unsigned __int16 *)(a2 + 4);
  v22 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 880), 0xFFFFFFFF);
        v25 = *(_DWORD *)(v23 + 884);
        v26 = *(_QWORD *)(v23 + 888);
        v27 = 32LL * ((v24 - 1) & v25);
        *(_DWORD *)(v27 + v26) = 1986359664;
        *(_QWORD *)(v27 + v26 + 8) = 0LL;
        *(_QWORD *)(v27 + v26 + 16) = v22;
        *(_QWORD *)(v27 + v26 + 24) = v21;
      }
    }
  }
  *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 10;
  KeResetEvent((PRKEVENT)(a2 + 824));
  if ( (int)v7 <= 10 )
  {
    switch ( (_DWORD)v7 )
    {
      case 0xA:
      case 1:
        goto LABEL_72;
      case 2:
        v28 = *(unsigned __int16 *)(a2 + 4);
        if ( (UsbhLogMask & 0x200) != 0 )
        {
          if ( a1 )
          {
            v29 = *(_QWORD *)(a1 + 64);
            if ( v29 )
            {
              v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 880), 0xFFFFFFFF);
              v31 = *(_DWORD *)(v29 + 884);
              v32 = *(_QWORD *)(v29 + 888);
              v33 = 32LL * ((v30 - 1) & v31);
              *(_DWORD *)(v33 + v32) = 846214449;
              *(_QWORD *)(v33 + v32 + 8) = 0LL;
              *(_QWORD *)(v33 + v32 + 16) = 2LL;
              *(_QWORD *)(v33 + v32 + 24) = v28;
            }
          }
        }
        v34 = v66;
        if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v65, v66) >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              28,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              v9);
          }
          if ( (UsbhLogMask & 8) != 0 )
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
                *(_DWORD *)(v39 + v38) = 862991665;
                *(_QWORD *)(v39 + v38 + 8) = 0LL;
                *(_QWORD *)(v39 + v38 + 16) = a2;
                *(_QWORD *)(v39 + v38 + 24) = v9;
              }
            }
          }
          v40 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 4;
          *(_DWORD *)(v40 + a2 + 1384) = 4;
          v41 = *(unsigned __int16 *)(a2 + 4);
          v42 = *(int *)(a2 + 12);
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            if ( a1 )
            {
              v43 = *(_QWORD *)(a1 + 64);
              if ( v43 )
              {
                v44 = _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 880), 0xFFFFFFFF);
                v45 = *(_DWORD *)(v43 + 884);
                v46 = *(_QWORD *)(v43 + 888);
                v47 = 32LL * ((v44 - 1) & v45);
                *(_DWORD *)(v47 + v46) = 757952880;
                *(_QWORD *)(v47 + v46 + 8) = 0LL;
                *(_QWORD *)(v47 + v46 + 16) = v42;
                *(_QWORD *)(v47 + v46 + 24) = v41;
              }
            }
          }
          v48 = *(_DWORD *)(a2 + 12);
          v49 = NewIrql;
          v50 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 448) = 0;
          *(_DWORD *)(v50 + a2 + 1384) = v48;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v49);
          UsbhHubQueueProcessChangeWorker(v51, a2);
          goto LABEL_39;
        }
        Log(a1, 8, 825585716, a2, v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v58,
            1,
            29,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v9,
            v59);
LABEL_61:
        v60 = v34;
LABEL_73:
        Usbh_iSignalSyncDeviceReset(a1, v60, a2);
        goto LABEL_74;
      case 3:
        Log(a1, 8, 825585718, a2, v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            31,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v9);
        v55 = v66;
        if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v65, v66) < 0 )
          Usbh_iSignalSyncDeviceReset(a1, v55, a2);
        v56 = 14;
        goto LABEL_57;
    }
    if ( (_DWORD)v7 != 4 )
    {
      if ( (_DWORD)v7 == 5 || (_DWORD)v7 == 6 || (_DWORD)v7 == 7 || (_DWORD)v7 == 8 )
        goto LABEL_72;
      v54 = (_DWORD)v7 == 9;
      goto LABEL_71;
    }
LABEL_75:
    Log(a1, 8, 825585717, a2, v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        30,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v9);
    v34 = v66;
    if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v65, v66) >= 0 )
      goto LABEL_74;
    goto LABEL_61;
  }
  switch ( (_DWORD)v7 )
  {
    case 0xB:
    case 0xC:
    case 0xD:
      goto LABEL_72;
    case 0xE:
      goto LABEL_75;
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
      goto LABEL_72;
  }
  v54 = (_DWORD)v7 == 20;
LABEL_71:
  if ( v54 )
  {
LABEL_72:
    Log(a1, 512, 825585713, v7, *(unsigned __int16 *)(a2 + 4));
    v60 = v66;
    goto LABEL_73;
  }
  v56 = 19;
LABEL_57:
  v57 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = v56;
  *(_DWORD *)(v57 + a2 + 1384) = v56;
LABEL_74:
  UsbhUnlockPcqWithTag(a1, a2, NewIrql, 0);
LABEL_39:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v52, v53, 32, v61, v9, v7);
  }
}
