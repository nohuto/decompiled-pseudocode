/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExApi @ 0x14001A440
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x14004DE48 (UsbhIoctlGetNodeConnectionInfo.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x14002C900 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004E4C8 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004E5EC (log_xstr.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExApi(__int64 a1, IRP *a2, __int64 a3, char a4)
{
  char v8; // si
  _IRP *MasterIrp; // r12
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  _DWORD *v17; // rdi
  _DWORD *v18; // rsi
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // r10
  int NodeConnectionInfoForPdo; // r15d
  __int64 Type; // rdi
  _DWORD *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rdx
  KIRQL v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rdx
  _DWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 Pool2; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  KIRQL v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 *v52; // rdi
  __int64 *v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  _DWORD *v56; // rcx
  int v57; // eax
  __int64 *v58; // rcx
  __int64 **v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdx
  _DWORD *v62; // rsi
  struct _KSEMAPHORE *v63; // rdi
  struct _KEVENT *v64; // rax
  __int64 v65; // rcx
  unsigned int *p_MajorFunction; // rax
  _IRP *v67; // r13
  __int64 v68; // r10
  __int64 v69; // rsi
  __int64 v70; // r12
  unsigned __int64 Information; // r8
  __int64 Status; // r9
  __int64 v73; // rcx
  int v74; // edi
  __int64 v75; // rdx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  __int128 *v81; // rax
  __int64 v82; // r10
  __int64 v83; // rcx
  int v84; // edx
  unsigned int v85; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v86; // [rsp+54h] [rbp-74h]
  int v87; // [rsp+58h] [rbp-70h] BYREF
  __int64 v88; // [rsp+60h] [rbp-68h]
  __int128 v89; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v90[72]; // [rsp+80h] [rbp-48h] BYREF

  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      44,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v10 = 274;
  if ( !a4 )
    v10 = 259;
  v87 = v10;
  v86 = *(_DWORD *)(a3 + 8);
  v85 = v86;
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
        *(_DWORD *)v12 = 827879015;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = MasterIrp;
      }
    }
  }
  v13 = (unsigned int)FdoExt(a1);
  v88 = UsbhIncHubBusy(a1, v13 + 1736, (_DWORD)a2, 1430414185, 1);
  if ( v88 )
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
          *(_QWORD *)(v15 + 24) = 4027383812LL;
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
    v20 = v18[6];
    *((_QWORD *)v18 + 166) = v17;
    v21 = ((_BYTE)v20 + 1) & 7;
    v18[6] = v21;
    v21 *= 32LL;
    *(_DWORD *)((char *)v18 + v21 + 28) = 11;
    *(_DWORD *)((char *)v18 + v21 + 32) = v18[340];
    *(_DWORD *)((char *)v18 + v21 + 36) = v18[340];
    *(_DWORD *)((char *)v18 + v21 + 40) = -267583484;
    v22 = (int)v18[340];
    v8 = 1;
    if ( (_DWORD)v22 == 5 )
    {
      NodeConnectionInfoForPdo = 0;
    }
    else
    {
      if ( (_DWORD)v22 == 6 )
        Log(a1, 32, 1095774563, 0LL, 4027383812LL);
      NodeConnectionInfoForPdo = -1073741810;
    }
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v19 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884))
              + *(_QWORD *)(v19 + 888);
          *(_DWORD *)v19 = 556879937;
          *(_QWORD *)(v19 + 16) = NodeConnectionInfoForPdo;
          *(_QWORD *)(v19 + 8) = 0LL;
          *(_QWORD *)(v19 + 24) = v22;
        }
      }
    }
    if ( (NodeConnectionInfoForPdo & 0xC0000000) == 0xC0000000
      || (NodeConnectionInfoForPdo = UsbhIoctlValidateParameters(a1, 259, (_DWORD)a2, a3, 4, 35),
          (NodeConnectionInfoForPdo & 0xC0000000) == 0xC0000000) )
    {
LABEL_83:
      if ( (NodeConnectionInfoForPdo & 0xC0000000) != 0xC0000000 )
        goto LABEL_84;
      goto LABEL_143;
    }
    Type = (unsigned __int16)MasterIrp->Type;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v19 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884))
              + *(_QWORD *)(v19 + 888);
          *(_DWORD *)v19 = 1413771367;
          *(_QWORD *)(v19 + 8) = 0LL;
          *(_QWORD *)(v19 + 16) = Type;
          *(_QWORD *)(v19 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)Type )
      goto LABEL_150;
    v25 = FdoExt(a1);
    if ( (unsigned __int16)Type > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      goto LABEL_150;
    v26 = *((_QWORD *)v25 + 382);
    if ( !v26 )
      goto LABEL_150;
    v27 = v26 + 2928 * Type - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v28 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v28 = 1044672615;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = Type;
          *(_QWORD *)(v28 + 24) = v27;
        }
      }
    }
    if ( !v27 )
    {
LABEL_150:
      NodeConnectionInfoForPdo = -1073741811;
LABEL_82:
      v8 = 1;
      goto LABEL_83;
    }
    v29 = (unsigned __int16)MasterIrp->Type;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v30 = *(_QWORD *)(a1 + 64);
        if ( v30 )
        {
          v31 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884))
              + *(_QWORD *)(v30 + 888);
          *(_DWORD *)v31 = 1329877100;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = v29;
          *(_QWORD *)(v31 + 24) = 1232023604LL;
        }
      }
    }
    v32 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_140070600 = (__int64)&dword_140070608;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v33 = *(_QWORD *)(a1 + 64);
        if ( v33 )
        {
          v34 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884))
              + *(_QWORD *)(v33 + 888);
          *(_DWORD *)v34 = 1413771367;
          *(_QWORD *)(v34 + 8) = 0LL;
          *(_QWORD *)(v34 + 16) = v29;
          *(_QWORD *)(v34 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)v29 )
      goto LABEL_130;
    v35 = FdoExt(a1);
    if ( (unsigned __int16)v29 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      goto LABEL_130;
    v36 = *((_QWORD *)v35 + 382);
    if ( !v36 )
      goto LABEL_130;
    v37 = v29;
    v38 = v36 + 2928 * v29 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v39 = *(_QWORD *)(a1 + 64);
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
          *(_DWORD *)v40 = 1044672615;
          *(_QWORD *)(v40 + 8) = 0LL;
          *(_QWORD *)(v40 + 16) = v37;
          *(_QWORD *)(v40 + 24) = v38;
        }
      }
    }
    if ( !v38 || (v41 = *(_QWORD *)(v38 + 392)) == 0 )
    {
LABEL_130:
      qword_140070600 = 0LL;
      KeReleaseSpinLock(&HubG, v32);
      v77 = *(unsigned __int16 *)(v27 + 4);
      if ( (UsbhLogMask & 0x20) != 0 )
      {
        if ( a1 )
        {
          v78 = *(_QWORD *)(a1 + 64);
          if ( v78 )
          {
            v79 = *(_QWORD *)(v78 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v78 + 880)) & *(_DWORD *)(v78 + 884));
            *(_DWORD *)v79 = 1886279783;
            *(_QWORD *)(v79 + 8) = 0LL;
            *(_QWORD *)(v79 + 16) = v77;
            *(_QWORD *)(v79 + 24) = MasterIrp;
          }
        }
      }
      memset(MasterIrp, 0, v86);
      v80 = *(unsigned __int16 *)(v27 + 4);
      NodeConnectionInfoForPdo = 0;
      *(_DWORD *)&MasterIrp->Type = v80;
      *(_DWORD *)((char *)&MasterIrp->AssociatedIrp.SystemBuffer + 7) = 0;
      a2->IoStatus.Information = 35LL;
      goto LABEL_82;
    }
    v42 = *(_QWORD *)(v41 + 64);
    if ( !v42 )
      UsbhTrapFatal_Dbg(v41, 0LL);
    if ( *(_DWORD *)v42 != 1329877064 )
      UsbhTrapFatal_Dbg(v41, *(_QWORD *)(v41 + 64));
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1668571500;
      *(_QWORD *)(Pool2 + 32) = v41;
      *(_DWORD *)(Pool2 + 24) = 1232023604;
      *(_QWORD *)(Pool2 + 40) = a2;
      v44 = (_QWORD *)(Pool2 + 8);
      v45 = *(_QWORD **)(v42 + 1280);
      if ( *v45 != v42 + 1272 )
        goto LABEL_149;
      *v44 = v42 + 1272;
      v44[1] = v45;
      *v45 = v44;
      *(_QWORD *)(v42 + 1280) = v44;
    }
    else
    {
      ++*(_DWORD *)(v42 + 1288);
    }
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v32);
    NodeConnectionInfoForPdo = UsbhGetNodeConnectionInfoForPdo(a1, (int)a2, v27, v41, MasterIrp, (__int64)&v85, a4);
    a2->IoStatus.Information = v85;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v46 = *(_QWORD *)(a1 + 64);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
          *(_DWORD *)v47 = 1329877109;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_QWORD *)(v47 + 16) = v41;
          *(_QWORD *)(v47 + 24) = 1232023604LL;
        }
      }
    }
    v48 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_140070600 = (__int64)&dword_140070608;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v49 = *(_QWORD *)(a1 + 64);
        if ( v49 )
        {
          v50 = *(_QWORD *)(v49 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
          *(_DWORD *)v50 = 1348891236;
          *(_QWORD *)(v50 + 8) = 0LL;
          *(_QWORD *)(v50 + 16) = v41;
          *(_QWORD *)(v50 + 24) = 1232023604LL;
        }
      }
    }
    v51 = *(_QWORD *)(v41 + 64);
    if ( !v51 )
      UsbhTrapFatal_Dbg(v41, 0LL);
    if ( *(_DWORD *)v51 != 1329877064 )
      UsbhTrapFatal_Dbg(v41, *(_QWORD *)(v41 + 64));
    v52 = (__int64 *)(v51 + 1272);
    v53 = *(__int64 **)(v51 + 1272);
    if ( v53 == (__int64 *)(v51 + 1272) )
    {
LABEL_74:
      v56 = (_DWORD *)(v51 + 1288);
      v57 = *(_DWORD *)(v51 + 1288);
      if ( v57 )
        *v56 = v57 - 1;
      goto LABEL_80;
    }
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v54 = *(_QWORD *)(a1 + 64);
          if ( v54 )
          {
            v55 = *(_QWORD *)(v54 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v54 + 880)) & *(_DWORD *)(v54 + 884));
            *(_DWORD *)v55 = 1064591724;
            *(_QWORD *)(v55 + 8) = 0LL;
            *(_QWORD *)(v55 + 16) = v51;
            *(_QWORD *)(v55 + 24) = 1232023604LL;
          }
        }
      }
      if ( *((_DWORD *)v53 + 4) == 1232023604 && (IRP *)v53[4] == a2 )
        break;
      v53 = (__int64 *)*v53;
      if ( v53 == v52 )
        goto LABEL_74;
    }
    v58 = (__int64 *)*v53;
    if ( *(__int64 **)(*v53 + 8) == v53 )
    {
      v59 = (__int64 **)v53[1];
      if ( *v59 == v53 )
      {
        *v59 = v58;
        v58[1] = (__int64)v59;
        ExFreePoolWithTag(v53 - 1, 0);
        v56 = (_DWORD *)(v51 + 1288);
LABEL_80:
        if ( (__int64 *)*v52 == v52 && !*v56 )
          KeSetEvent((PRKEVENT)(v51 + 1296), 0, 0);
        qword_140070600 = 0LL;
        KeReleaseSpinLock(&HubG, v48);
        goto LABEL_82;
      }
    }
LABEL_149:
    __fastfail(3u);
  }
  NodeConnectionInfoForPdo = -1073741670;
LABEL_143:
  if ( !Usb_Disconnected(NodeConnectionInfoForPdo) )
    UsbhException(a1, 0, 91, (unsigned int)&v87, 4, NodeConnectionInfoForPdo, 0, (__int64)usbfile_ioctl_c, 2215, 0);
LABEL_84:
  if ( v8 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v60 = *(_QWORD *)(a1 + 64);
        if ( v60 )
        {
          v61 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v60 + 880)) & *(_DWORD *)(v60 + 884))
              + *(_QWORD *)(v60 + 888);
          *(_DWORD *)v61 = 758206529;
          *(_QWORD *)(v61 + 8) = 0LL;
          *(_QWORD *)(v61 + 16) = 0LL;
          *(_QWORD *)(v61 + 24) = 4027383812LL;
        }
      }
    }
    v62 = FdoExt(a1);
    v63 = (struct _KSEMAPHORE *)FdoExt(a1);
    FdoExt(*((_QWORD *)v62 + 218));
    v62[446] = 1734964085;
    v63[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v63 + 155, 16, 1, 0);
    v64 = (struct _KEVENT *)FdoExt(a1);
    KeSetEvent(v64 + 205, 0, 0);
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v19 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884))
            + *(_QWORD *)(v19 + 888);
        *(_DWORD *)v19 = 844656231;
        *(_QWORD *)(v19 + 24) = NodeConnectionInfoForPdo;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      45,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      NodeConnectionInfoForPdo);
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v65 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v65 = 1415802729;
        *(_QWORD *)(v65 + 8) = 0LL;
        *(_QWORD *)(v65 + 16) = 0LL;
        *(_QWORD *)(v65 + 24) = a2;
      }
    }
  }
  p_MajorFunction = (unsigned int *)&a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v67 = a2->AssociatedIrp.MasterIrp;
  v68 = p_MajorFunction[6];
  v69 = p_MajorFunction[2];
  v70 = p_MajorFunction[4];
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v19 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884))
            + *(_QWORD *)(v19 + 888);
        *(_DWORD *)v19 = 829714281;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = v69;
        *(_QWORD *)(v19 + 24) = v70;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v19 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884))
            + *(_QWORD *)(v19 + 888);
        *(_DWORD *)v19 = 846491497;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = v67;
        *(_QWORD *)(v19 + 24) = v68;
      }
    }
  }
  Information = a2->IoStatus.Information;
  Status = a2->IoStatus.Status;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v73 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v73 = 863268713;
        *(_QWORD *)(v73 + 8) = 0LL;
        *(_QWORD *)(v73 + 16) = Status;
        *(_QWORD *)(v73 + 24) = Information;
      }
    }
  }
  v74 = a2->IoStatus.Information;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        2,
        10,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
        v68);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          2,
          11,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          v70,
          v69);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          2,
          12,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          a2->IoStatus.Status,
          v74);
    }
  }
  if ( (_BYTE)v74 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v81 = (__int128 *)log_xstr(v90, (unsigned __int8)v74, v67, Status);
      v83 = *(_QWORD *)(v82 + 64);
      v89 = *v81;
      WPP_RECORDER_SF__HEX_(v83, v84, 2, 14, (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids, (__int64)&v89);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      13,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  }
  FdoExt(a1);
  UsbhDecHubBusy(a1, v75, v88);
  a2->IoStatus.Status = NodeConnectionInfoForPdo;
  IofCompleteRequest(a2, 0);
  return (unsigned int)NodeConnectionInfoForPdo;
}
