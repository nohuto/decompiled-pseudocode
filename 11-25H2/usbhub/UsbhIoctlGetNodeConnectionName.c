/*
 * XREFs of UsbhIoctlGetNodeConnectionName @ 0x14001FB50
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhGetHubPdoName @ 0x14001F4A4 (UsbhGetHubPdoName.c)
 *     UsbhIoctlTraceOutput @ 0x140020A70 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionName(__int64 a1, IRP *a2, __int64 a3)
{
  char v6; // si
  _IRP *MasterIrp; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rax
  _DWORD *v16; // rdi
  _DWORD *v17; // rsi
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r10
  int HubPdoName; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD *v28; // rsi
  struct _KSEMAPHORE *v29; // rdi
  struct _KEVENT *v30; // rax
  struct _KEVENT *v31; // rdi
  __int64 Signalling; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _WORD *v39; // rdi
  __int64 v40; // r12
  int v41; // eax
  volatile int Lock; // eax
  int v43[18]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+B0h] [rbp+18h]
  void *v45; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      2,
      36,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      (char)a2);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Size = *(_DWORD *)(a3 + 8);
  v43[0] = 261;
  v45 = MasterIrp;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 859729769;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = MasterIrp;
      }
    }
  }
  v10 = FdoExt(a1);
  v11 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  v12 = 4027383811LL;
  if ( v11 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v14 = 724652097;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 16) = 0LL;
          *(_QWORD *)(v14 + 24) = 4027383811LL;
        }
      }
    }
    v15 = FdoExt(a1);
    KeWaitForSingleObject(v15 + 1230, Executive, 0, 0, 0LL);
    v16 = FdoExt(a1) + 434;
    v17 = FdoExt(a1);
    KeWaitForSingleObject(v17 + 1240, Executive, 0, 0, 0LL);
    v12 = 4027383811LL;
    v16[14] = v17[340];
    v16[15] = 11;
    v16[12] = 827278406;
    *((_QWORD *)v16 + 3) = KeGetCurrentThread();
    v18 = v17[6];
    *((_QWORD *)v17 + 166) = v16;
    v19 = ((_BYTE)v18 + 1) & 7;
    v17[6] = v19;
    v19 *= 32LL;
    *(_DWORD *)((char *)v17 + v19 + 28) = 11;
    *(_DWORD *)((char *)v17 + v19 + 32) = v17[340];
    *(_DWORD *)((char *)v17 + v19 + 36) = v17[340];
    *(_DWORD *)((char *)v17 + v19 + 40) = -267583485;
    v20 = (int)v17[340];
    v6 = 1;
    if ( (_DWORD)v20 == 5 )
    {
      HubPdoName = 0;
    }
    else
    {
      if ( (_DWORD)v20 == 6 )
      {
        Log(a1, 32, 1095774563, 0LL, 4027383811LL);
        v12 = 4027383811LL;
      }
      HubPdoName = -1073741810;
    }
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v22 = *(_QWORD *)(a1 + 64);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
          *(_DWORD *)v23 = 556879937;
          *(_QWORD *)(v23 + 16) = HubPdoName;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 24) = v20;
        }
      }
    }
    if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
    {
      HubPdoName = UsbhIoctlValidateParameters(a1, 261, (_DWORD)a2, a3, 4, 10);
      if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
      {
        v39 = v45;
        v40 = UsbhLatchPdo(a1, *(_WORD *)v45, (__int64)a2, 0x496C3033u);
        if ( v40 )
        {
          LODWORD(v45) = 0;
          memset(v39, 0, Size);
          HubPdoName = UsbhGetHubPdoName(a1, v40, v39 + 2, Size - 4, (unsigned int *)&v45);
          v41 = (int)v45;
          if ( (unsigned int)v45 >= 4 )
            *((_DWORD *)v39 + 1) += 4;
          a2->IoStatus.Information = (unsigned int)(v41 + 4);
          UsbhUnlatchPdo(a1, v40, (__int64)a2, 0x496C3033u);
        }
        else
        {
          *((_DWORD *)v39 + 1) = 10;
          v39[4] = 0;
          HubPdoName = 0;
          a2->IoStatus.Information = 10LL;
        }
      }
      v12 = 4027383811LL;
    }
  }
  else
  {
    HubPdoName = -1073741670;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 859598697;
        *(_QWORD *)(v25 + 24) = HubPdoName;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      37,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      HubPdoName);
    v12 = 4027383811LL;
  }
  if ( (HubPdoName & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(HubPdoName) )
  {
    UsbhException(a1, 0, 91, v43, 4u, HubPdoName, 0, usbfile_ioctl_c, 1740, 0);
    v12 = 4027383811LL;
  }
  if ( v6 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 758206529;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = 0LL;
          *(_QWORD *)(v27 + 24) = v12;
        }
      }
    }
    v28 = FdoExt(a1);
    v29 = (struct _KSEMAPHORE *)FdoExt(a1);
    FdoExt(*((_QWORD *)v28 + 218));
    v28[446] = 1734964085;
    v29[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v29 + 155, 16, 1, 0);
    v30 = (struct _KEVENT *)FdoExt(a1);
    KeSetEvent(v30 + 205, 0, 0);
  }
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  v31 = (struct _KEVENT *)FdoExt(a1);
  v31[142].Header.Type = 1;
  KeWaitForSingleObject(&v31[139], Executive, 0, 0, 0LL);
  Signalling = v31[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 1667581000;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = v11;
        *(_QWORD *)(v34 + 24) = Signalling;
      }
    }
  }
  if ( v31[142].Header.Signalling )
  {
    if ( v11 == (_QWORD *)1936941672 )
    {
      Lock = v31[130].Header.Lock;
      if ( Lock )
        v31[130].Header.LockNV = Lock - 1;
    }
    else if ( v11 )
    {
      v35 = v11[1];
      v36 = v11 + 1;
      if ( *(_QWORD **)(v35 + 8) != v11 + 1 || (v37 = (_QWORD *)v11[2], (_QWORD *)*v37 != v36) )
        __fastfail(3u);
      *v37 = v35;
      *(_QWORD *)(v35 + 8) = v37;
      v11[2] = v11 + 1;
      *v36 = v36;
      ExFreePoolWithTag(v11, 0);
    }
  }
  KeSetEvent(v31 + 139, 0, 0);
  a2->IoStatus.Status = HubPdoName;
  IofCompleteRequest(a2, 0);
  return (unsigned int)HubPdoName;
}
