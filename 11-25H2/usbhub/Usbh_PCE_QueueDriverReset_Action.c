/*
 * XREFs of Usbh_PCE_QueueDriverReset_Action @ 0x140024E40
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhUnlockPcqWithTag @ 0x140024D80 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x140025510 (UsbhLockPcqWithTag.c)
 *     UsbhInsertQueuePortChangeObject @ 0x140026F80 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1400274B4 (UsbhHubQueueProcessChangeWorker.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dc @ 0x140045E28 (WPP_RECORDER_SF_dc.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x140049E24 (Usbh_iSignalSyncDeviceReset.c)
 */

void Usbh_PCE_QueueDriverReset_Action(__int64 a1, __int64 a2, char a3, ...)
{
  int v3; // ebx
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  KIRQL v30; // dl
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edx
  int v34; // r8d
  bool v35; // zf
  __int64 v36; // r14
  int v37; // ecx
  __int64 v38; // rax
  int v39; // edx
  char v40; // r10
  __int64 v41; // rdx
  int v42; // [rsp+20h] [rbp-30h]
  KIRQL NewIrql; // [rsp+88h] [rbp+38h] BYREF
  __int64 v44; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v46; // [rsp+A0h] [rbp+50h]
  __int64 v47; // [rsp+A8h] [rbp+58h]
  va_list va1; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v44 = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v3 = v44;
  NewIrql = 0;
  FdoExt(a1);
  v7 = (int)UsbhLockPcqWithTag(a1, a2, 15, (unsigned int)&NewIrql, v3);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) || (unsigned int)(*(_DWORD *)(a2 + 400) - 1) <= 1 )
  {
    Usbh_iSignalSyncDeviceReset(a1, v47, a2);
    UsbhUnlockPcqWithTag(a1, a2, NewIrql, 0);
    return;
  }
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( _bittest(&UsbhLogMask, 9u) )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 812660017;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v7;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  v11 = *(unsigned __int16 *)(a2 + 4);
  if ( _bittest(&UsbhLogMask, 9u) )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 829437233;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v11;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v11,
      27,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 1986359664;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = v15;
        *(_QWORD *)(v17 + 24) = v14;
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
        goto LABEL_71;
      case 2:
        v18 = *(unsigned __int16 *)(a2 + 4);
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
              *(_DWORD *)v20 = 846214449;
              *(_QWORD *)(v20 + 8) = 0LL;
              *(_QWORD *)(v20 + 16) = v7;
              *(_QWORD *)(v20 + 24) = v18;
            }
          }
        }
        v21 = v47;
        if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v8, (unsigned int)va, v46, v47) >= 0 )
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
              v8);
          }
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
                *(_DWORD *)v23 = 862991665;
                *(_QWORD *)(v23 + 8) = 0LL;
                *(_QWORD *)(v23 + 16) = a2;
                *(_QWORD *)(v23 + 24) = v8;
              }
            }
          }
          v24 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 4;
          *(_DWORD *)(v24 + a2 + 1384) = 4;
          v25 = *(unsigned __int16 *)(a2 + 4);
          v26 = *(int *)(a2 + 12);
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            if ( a1 )
            {
              v27 = *(_QWORD *)(a1 + 64);
              if ( v27 )
              {
                v28 = *(_QWORD *)(v27 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
                *(_DWORD *)v28 = 757952880;
                *(_QWORD *)(v28 + 8) = 0LL;
                *(_QWORD *)(v28 + 16) = v26;
                *(_QWORD *)(v28 + 24) = v25;
              }
            }
          }
          v29 = *(_DWORD *)(a2 + 12);
          v30 = NewIrql;
          v31 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
          *(_DWORD *)(a2 + 448) = 0;
          *(_DWORD *)(v31 + a2 + 8) = v29;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v30);
          UsbhHubQueueProcessChangeWorker(v32, a2);
          goto LABEL_38;
        }
        Log(a1, 8, 825585716, a2, v8);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v39,
            1,
            29,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v8,
            v40);
LABEL_60:
        v41 = v21;
LABEL_72:
        Usbh_iSignalSyncDeviceReset(a1, v41, a2);
        goto LABEL_73;
      case 3:
        Log(a1, 8, 825585718, a2, v8);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            31,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v8);
        v36 = v47;
        if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v8, (unsigned int)va, v46, v47) < 0 )
          Usbh_iSignalSyncDeviceReset(a1, v36, a2);
        v37 = 14;
        goto LABEL_56;
    }
    if ( (_DWORD)v7 != 4 )
    {
      if ( (_DWORD)v7 == 5 || (_DWORD)v7 == 6 || (_DWORD)v7 == 7 || (_DWORD)v7 == 8 )
        goto LABEL_71;
      v35 = (_DWORD)v7 == 9;
      goto LABEL_70;
    }
LABEL_74:
    Log(a1, 8, 825585717, a2, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        30,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v8);
    v21 = v47;
    if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v8, (unsigned int)va, v46, v47) >= 0 )
      goto LABEL_73;
    goto LABEL_60;
  }
  switch ( (_DWORD)v7 )
  {
    case 0xB:
    case 0xC:
    case 0xD:
      goto LABEL_71;
    case 0xE:
      goto LABEL_74;
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
      goto LABEL_71;
  }
  v35 = (_DWORD)v7 == 20;
LABEL_70:
  if ( v35 )
  {
LABEL_71:
    Log(a1, 512, 825585713, v7, *(unsigned __int16 *)(a2 + 4));
    v41 = v47;
    goto LABEL_72;
  }
  v37 = 19;
LABEL_56:
  v38 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = v37;
  *(_DWORD *)(v38 + a2 + 1384) = v37;
LABEL_73:
  UsbhUnlockPcqWithTag(a1, a2, NewIrql, 0);
LABEL_38:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v33, v34, 32, v42, v8, v7);
  }
}
