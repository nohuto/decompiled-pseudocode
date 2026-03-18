/*
 * XREFs of UsbhIoctlGetNodeInformation @ 0x1400258B0
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhIoctlTraceOutput @ 0x140025F40 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeInformation(__int64 a1, IRP *a2, __int64 a3)
{
  char v6; // si
  _DWORD *v7; // rax
  size_t v8; // r8
  _DWORD *v9; // r13
  _IRP *MasterIrp; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  _DWORD *v17; // rdi
  _DWORD *v18; // rsi
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // r10
  int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  _DWORD *v30; // rsi
  struct _KSEMAPHORE *v31; // rdi
  struct _KEVENT *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  _QWORD *v37; // [rsp+50h] [rbp-48h]
  int v38; // [rsp+B0h] [rbp+18h]
  int v39; // [rsp+B8h] [rbp+20h] BYREF

  v38 = a3;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      56,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v39 = 258;
  v7 = FdoExt(a1);
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v7;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 910061417;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = MasterIrp;
      }
    }
  }
  memset(MasterIrp, 0, v8);
  v13 = FdoExt(a1);
  v37 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v13 + 434), (__int64)a2, 1430414185, 1);
  if ( v37 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884))
              + *(_QWORD *)(v14 + 888);
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
          v24 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884))
              + *(_QWORD *)(v23 + 888);
          *(_DWORD *)v24 = 556879937;
          *(_QWORD *)(v24 + 16) = v22;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 24) = v21;
        }
      }
    }
    if ( (v22 & 0xC0000000) != 0xC0000000 )
    {
      v22 = UsbhIoctlValidateParameters(a1, 258, (_DWORD)a2, v38, 0, 76);
      if ( (v22 & 0xC0000000) != 0xC0000000 )
      {
        v25 = *((unsigned __int8 *)v9 + 2938);
        if ( (UsbhLogMask & 0x20) != 0 )
        {
          if ( a1 )
          {
            v26 = *(_QWORD *)(a1 + 64);
            if ( v26 )
            {
              v27 = 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884))
                  + *(_QWORD *)(v26 + 888);
              *(_DWORD *)v27 = 1681289065;
              *(_QWORD *)(v27 + 16) = v9 + 734;
              *(_QWORD *)(v27 + 8) = 0LL;
              *(_QWORD *)(v27 + 24) = v25;
            }
          }
        }
        *(_DWORD *)&MasterIrp->Type = 0;
        *(_OWORD *)(&MasterIrp->Size + 1) = *(_OWORD *)(v9 + 734);
        *(_OWORD *)(&MasterIrp->Flags + 1) = *(_OWORD *)(v9 + 738);
        *(_LIST_ENTRY *)((char *)&MasterIrp->ThreadListEntry + 4) = *(_LIST_ENTRY *)(v9 + 742);
        *(_IO_STATUS_BLOCK *)((char *)&MasterIrp->IoStatus + 4) = *(_IO_STATUS_BLOCK *)(v9 + 746);
        *(_DWORD *)&MasterIrp->Cancel = v9[750];
        LOWORD(MasterIrp->UserIosb) = *((_WORD *)v9 + 1502);
        BYTE2(MasterIrp->IoRingContext) = *((_BYTE *)v9 + 3006);
        BYTE3(MasterIrp->IoRingContext) = v9[758] == 100;
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
            v29 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884))
                + *(_QWORD *)(v28 + 888);
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
    UsbhException(a1, 0, 91, &v39, 4u, v22, 0, usbfile_ioctl_c, 2833, 0, v37);
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
        v34 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884))
            + *(_QWORD *)(v33 + 888);
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
  UsbhDecHubBusy(a1, v35, v37);
  a2->IoStatus.Status = v22;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v22;
}
