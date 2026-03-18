/*
 * XREFs of UsbhIoctlGetNodeInformation @ 0x1400202C0
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhIoctlTraceOutput @ 0x140020A70 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeInformation(__int64 a1, IRP *a2, __int64 a3)
{
  char v6; // si
  _DWORD *v7; // rax
  size_t v8; // r8
  _IRP *MasterIrp; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  _DWORD *v17; // rdi
  _DWORD *v18; // rsi
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // r10
  int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rsi
  struct _KSEMAPHORE *v31; // rdi
  struct _KEVENT *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _KEVENT *v35; // rdi
  __int64 Signalling; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  volatile int Lock; // eax
  _DWORD *v44; // [rsp+50h] [rbp-48h]
  int v45; // [rsp+B0h] [rbp+18h]
  int v46; // [rsp+B8h] [rbp+20h] BYREF

  v45 = a3;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      56,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v46 = 258;
  v7 = FdoExt(a1);
  v8 = *(unsigned int *)(a3 + 8);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v44 = v7;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 910061417;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a2;
        *(_QWORD *)(v11 + 24) = MasterIrp;
      }
    }
  }
  memset(MasterIrp, 0, v8);
  v12 = FdoExt(a1);
  v13 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v12 + 434), (__int64)a2, 1430414185, 1);
  if ( v13 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 724652097;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_QWORD *)(v15 + 24) = 4027383814LL;
        }
      }
    }
    v16 = FdoExt(a1);
    KeWaitForSingleObject(v16 + 1230, Executive, 0, 0, 0LL);
    v17 = FdoExt(a1) + 434;
    v18 = FdoExt(a1);
    KeWaitForSingleObject(v18 + 1240, Executive, 0, 0, 0LL);
    v17[14] = v18[340];
    v17[15] = 11;
    v17[12] = 827278406;
    *((_QWORD *)v17 + 3) = KeGetCurrentThread();
    v19 = v18[6];
    *((_QWORD *)v18 + 166) = v17;
    v20 = ((_BYTE)v19 + 1) & 7;
    v18[6] = v20;
    v20 *= 32LL;
    *(_DWORD *)((char *)v18 + v20 + 28) = 11;
    *(_DWORD *)((char *)v18 + v20 + 32) = v18[340];
    *(_DWORD *)((char *)v18 + v20 + 36) = v18[340];
    *(_DWORD *)((char *)v18 + v20 + 40) = -267583482;
    v21 = (int)v18[340];
    v6 = 1;
    if ( (_DWORD)v21 == 5 )
    {
      v22 = 0;
    }
    else
    {
      if ( (_DWORD)v21 == 6 )
        Log(a1, 32, 1095774563, 0LL, 4027383814LL);
      v22 = -1073741810;
    }
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v23 = *(_QWORD *)(a1 + 64);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
          *(_DWORD *)v24 = 556879937;
          *(_QWORD *)(v24 + 16) = v22;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 24) = v21;
        }
      }
    }
    if ( (v22 & 0xC0000000) != 0xC0000000 )
    {
      v22 = UsbhIoctlValidateParameters(a1, 258, (_DWORD)a2, v45, 0, 76);
      if ( (v22 & 0xC0000000) != 0xC0000000 )
      {
        v25 = *((unsigned __int8 *)v44 + 2938);
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
              *(_DWORD *)v27 = 1681289065;
              *(_QWORD *)(v27 + 16) = v44 + 734;
              *(_QWORD *)(v27 + 8) = 0LL;
              *(_QWORD *)(v27 + 24) = v25;
            }
          }
        }
        *(_DWORD *)&MasterIrp->Type = 0;
        *(_OWORD *)(&MasterIrp->Size + 1) = *(_OWORD *)(v44 + 734);
        *(_OWORD *)(&MasterIrp->Flags + 1) = *(_OWORD *)(v44 + 738);
        *(_LIST_ENTRY *)((char *)&MasterIrp->ThreadListEntry + 4) = *(_LIST_ENTRY *)(v44 + 742);
        *(_IO_STATUS_BLOCK *)((char *)&MasterIrp->IoStatus + 4) = *(_IO_STATUS_BLOCK *)(v44 + 746);
        *(_DWORD *)&MasterIrp->Cancel = v44[750];
        LOWORD(MasterIrp->UserIosb) = *((_WORD *)v44 + 1502);
        BYTE2(MasterIrp->IoRingContext) = *((_BYTE *)v44 + 3006);
        BYTE3(MasterIrp->IoRingContext) = v44[758] == 100;
        v22 = 0;
        a2->IoStatus.Information = 76LL;
        goto LABEL_29;
      }
    }
    if ( (v22 & 0xC0000000) != 0xC0000000 )
    {
LABEL_29:
      if ( (UsbhLogMask & 0x20) != 0 )
      {
        if ( a1 )
        {
          v28 = *(_QWORD *)(a1 + 64);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
            *(_DWORD *)v29 = 758206529;
            *(_QWORD *)(v29 + 8) = 0LL;
            *(_QWORD *)(v29 + 16) = 0LL;
            *(_QWORD *)(v29 + 24) = 4027383814LL;
          }
        }
      }
      v30 = FdoExt(a1);
      v31 = (struct _KSEMAPHORE *)FdoExt(a1);
      FdoExt(*((_QWORD *)v30 + 218));
      v30[446] = 1734964085;
      v31[41].Header.WaitListHead.Blink = 0LL;
      KeReleaseSemaphore(v31 + 155, 16, 1, 0);
      v32 = (struct _KEVENT *)FdoExt(a1);
      KeSetEvent(v32 + 205, 0, 0);
      goto LABEL_34;
    }
  }
  else
  {
    v22 = -1073741670;
  }
  if ( !Usb_Disconnected(v22) )
    UsbhException(a1, 0, 91, &v46, 4u, v22, 0, usbfile_ioctl_c, 2833, 0);
  if ( v6 )
    goto LABEL_29;
LABEL_34:
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 909930345;
        *(_QWORD *)(v34 + 24) = v22;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      57,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v22);
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  v35 = (struct _KEVENT *)FdoExt(a1);
  v35[142].Header.Type = 1;
  KeWaitForSingleObject(&v35[139], Executive, 0, 0, 0LL);
  Signalling = v35[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v37 = *(_QWORD *)(a1 + 64);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
        *(_DWORD *)v38 = 1667581000;
        *(_QWORD *)(v38 + 8) = 0LL;
        *(_QWORD *)(v38 + 16) = v13;
        *(_QWORD *)(v38 + 24) = Signalling;
      }
    }
  }
  if ( v35[142].Header.Signalling )
  {
    if ( v13 == (_QWORD *)1936941672 )
    {
      Lock = v35[130].Header.Lock;
      if ( Lock )
        v35[130].Header.LockNV = Lock - 1;
    }
    else if ( v13 )
    {
      v39 = v13[1];
      v40 = v13 + 1;
      if ( *(_QWORD **)(v39 + 8) != v13 + 1 || (v41 = (_QWORD *)v13[2], (_QWORD *)*v41 != v40) )
        __fastfail(3u);
      *v41 = v39;
      *(_QWORD *)(v39 + 8) = v41;
      v13[2] = v13 + 1;
      *v40 = v40;
      ExFreePoolWithTag(v13, 0);
    }
  }
  KeSetEvent(v35 + 139, 0, 0);
  a2->IoStatus.Status = v22;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v22;
}
