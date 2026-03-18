/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExApi @ 0x1400220E0
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x14004E26C (UsbhIoctlGetNodeConnectionInfo.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x140023560 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004E8E8 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004EA04 (log_xstr.c)
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExApi(__int64 a1, IRP *a2, __int64 a3, char a4)
{
  char v8; // si
  _IRP *MasterIrp; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  _DWORD *v17; // rdi
  _DWORD *v18; // rsi
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // r10
  int NodeConnectionInfoForPdo; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 Type; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  _DWORD *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 Pool2; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  KIRQL v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 *v55; // rdi
  __int64 *v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  _DWORD *v59; // rcx
  int v60; // eax
  __int64 *v61; // rcx
  __int64 **v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  _DWORD *v65; // rsi
  struct _KSEMAPHORE *v66; // rdi
  struct _KEVENT *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned int *p_MajorFunction; // rax
  _IRP *v73; // r11
  __int64 v74; // r10
  __int64 v75; // rsi
  __int64 v76; // r13
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned __int64 Information; // r8
  __int64 Status; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // edi
  unsigned __int8 v86; // cl
  struct _KEVENT *v87; // rdi
  __int64 Signalling; // r8
  __int64 v89; // rdx
  _QWORD *v90; // r9
  __int64 v91; // rcx
  __int64 v92; // rcx
  _QWORD *v93; // rax
  _QWORD *v94; // rdx
  __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // rcx
  int v99; // eax
  __int128 *v100; // rax
  __int64 v101; // r10
  __int64 v102; // rcx
  int v103; // edx
  volatile int Lock; // eax
  _IRP *v105; // [rsp+50h] [rbp-19h]
  unsigned int Size; // [rsp+58h] [rbp-11h] BYREF
  int Size_4; // [rsp+5Ch] [rbp-Dh] BYREF
  PVOID P; // [rsp+60h] [rbp-9h]
  __int128 v109; // [rsp+70h] [rbp+7h] BYREF
  char v110[64]; // [rsp+80h] [rbp+17h] BYREF
  KIRQL v111; // [rsp+D8h] [rbp+6Fh]
  _IRP *v112; // [rsp+D8h] [rbp+6Fh]

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
  v105 = MasterIrp;
  if ( !a4 )
    v10 = 259;
  Size_4 = v10;
  Size = *(_DWORD *)(a3 + 8);
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
  v13 = FdoExt(a1);
  P = (PVOID)UsbhIncHubBusy(a1, (__int64)(v13 + 434), (__int64)a2, 1430414185, 1);
  if ( !P )
  {
    NodeConnectionInfoForPdo = -1073741670;
LABEL_155:
    if ( !Usb_Disconnected(NodeConnectionInfoForPdo) )
      UsbhException(a1, 0, 91, &Size_4, 4u, NodeConnectionInfoForPdo, 0, usbfile_ioctl_c, 2215, 0);
    goto LABEL_84;
  }
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
  v19 = v18[6];
  *((_QWORD *)v18 + 166) = v17;
  v20 = ((_BYTE)v19 + 1) & 7;
  v18[6] = v20;
  v20 *= 32LL;
  *(_DWORD *)((char *)v18 + v20 + 28) = 11;
  *(_DWORD *)((char *)v18 + v20 + 32) = v18[340];
  *(_DWORD *)((char *)v18 + v20 + 36) = v18[340];
  *(_DWORD *)((char *)v18 + v20 + 40) = -267583484;
  v21 = (int)v18[340];
  v8 = 1;
  if ( (_DWORD)v21 == 5 )
  {
    NodeConnectionInfoForPdo = 0;
  }
  else
  {
    if ( (_DWORD)v21 == 6 )
      Log(a1, 32, 1095774563, 0LL, 4027383812LL);
    NodeConnectionInfoForPdo = -1073741810;
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
        *(_QWORD *)(v24 + 16) = NodeConnectionInfoForPdo;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 24) = v21;
      }
    }
  }
  if ( (NodeConnectionInfoForPdo & 0xC0000000) != 0xC0000000 )
  {
    NodeConnectionInfoForPdo = UsbhIoctlValidateParameters(a1, 259, (_DWORD)a2, a3, 4, 35);
    if ( (NodeConnectionInfoForPdo & 0xC0000000) != 0xC0000000 )
    {
      Type = (unsigned __int16)v105->Type;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          v26 = *(_QWORD *)(a1 + 64);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
            *(_DWORD *)v27 = 1413771367;
            *(_QWORD *)(v27 + 8) = 0LL;
            *(_QWORD *)(v27 + 16) = Type;
            *(_QWORD *)(v27 + 24) = 0LL;
          }
        }
      }
      if ( !(_WORD)Type )
        goto LABEL_161;
      v28 = FdoExt(a1);
      if ( (unsigned __int16)Type > *((unsigned __int8 *)FdoExt(a1) + 2938) )
        goto LABEL_161;
      v29 = *((_QWORD *)v28 + 382);
      if ( !v29 )
        goto LABEL_161;
      v30 = v29 + 2928 * Type - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          v31 = *(_QWORD *)(a1 + 64);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
            *(_DWORD *)v32 = 1044672615;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 16) = Type;
            *(_QWORD *)(v32 + 24) = v30;
          }
        }
      }
      if ( v30 )
      {
        v33 = (unsigned __int16)v105->Type;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v34 = *(_QWORD *)(a1 + 64);
            if ( v34 )
            {
              v35 = *(_QWORD *)(v34 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
              *(_DWORD *)v35 = 1329877100;
              *(_QWORD *)(v35 + 8) = 0LL;
              *(_QWORD *)(v35 + 16) = v33;
              *(_QWORD *)(v35 + 24) = 1232023604LL;
            }
          }
        }
        v111 = KeAcquireSpinLockRaiseToDpc(&HubG);
        qword_14006F5A0 = (__int64)&dword_14006F5A8;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v36 = *(_QWORD *)(a1 + 64);
            if ( v36 )
            {
              v37 = *(_QWORD *)(v36 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
              *(_DWORD *)v37 = 1413771367;
              *(_QWORD *)(v37 + 8) = 0LL;
              *(_QWORD *)(v37 + 16) = v33;
              *(_QWORD *)(v37 + 24) = 0LL;
            }
          }
        }
        if ( !(_WORD)v33 )
          goto LABEL_141;
        v38 = FdoExt(a1);
        if ( (unsigned __int16)v33 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
          goto LABEL_141;
        v39 = *((_QWORD *)v38 + 382);
        if ( !v39 )
          goto LABEL_141;
        v40 = v33;
        v41 = v39 + 2928 * v33 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v42 = *(_QWORD *)(a1 + 64);
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
              *(_DWORD *)v43 = 1044672615;
              *(_QWORD *)(v43 + 8) = 0LL;
              *(_QWORD *)(v43 + 16) = v40;
              *(_QWORD *)(v43 + 24) = v41;
            }
          }
        }
        if ( v41 && (v44 = *(_QWORD *)(v41 + 392)) != 0 )
        {
          v45 = *(_QWORD *)(v44 + 64);
          if ( !v45 )
            UsbhTrapFatal_Dbg(v44, 0LL);
          if ( *(_DWORD *)v45 != 1329877064 )
            UsbhTrapFatal_Dbg(v44, *(_QWORD *)(v44 + 64));
          Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
          if ( Pool2 )
          {
            *(_DWORD *)Pool2 = 1668571500;
            *(_QWORD *)(Pool2 + 32) = v44;
            *(_DWORD *)(Pool2 + 24) = 1232023604;
            *(_QWORD *)(Pool2 + 40) = a2;
            v47 = (_QWORD *)(Pool2 + 8);
            v48 = *(_QWORD **)(v45 + 1280);
            if ( *v48 != v45 + 1272 )
              goto LABEL_164;
            *v47 = v45 + 1272;
            v47[1] = v48;
            *v48 = v47;
            *(_QWORD *)(v45 + 1280) = v47;
          }
          else
          {
            ++*(_DWORD *)(v45 + 1288);
          }
          qword_14006F5A0 = 0LL;
          KeReleaseSpinLock(&HubG, v111);
          NodeConnectionInfoForPdo = UsbhGetNodeConnectionInfoForPdo(a1, (int)a2, v30, v44, v105, (__int64)&Size, a4);
          a2->IoStatus.Information = Size;
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
                *(_DWORD *)v50 = 1329877109;
                *(_QWORD *)(v50 + 8) = 0LL;
                *(_QWORD *)(v50 + 16) = v44;
                *(_QWORD *)(v50 + 24) = 1232023604LL;
              }
            }
          }
          v51 = KeAcquireSpinLockRaiseToDpc(&HubG);
          qword_14006F5A0 = (__int64)&dword_14006F5A8;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( a1 )
            {
              v52 = *(_QWORD *)(a1 + 64);
              if ( v52 )
              {
                v53 = *(_QWORD *)(v52 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
                *(_DWORD *)v53 = 1348891236;
                *(_QWORD *)(v53 + 8) = 0LL;
                *(_QWORD *)(v53 + 16) = v44;
                *(_QWORD *)(v53 + 24) = 1232023604LL;
              }
            }
          }
          v54 = *(_QWORD *)(v44 + 64);
          if ( !v54 )
            UsbhTrapFatal_Dbg(v44, 0LL);
          if ( *(_DWORD *)v54 != 1329877064 )
            UsbhTrapFatal_Dbg(v44, *(_QWORD *)(v44 + 64));
          v55 = (__int64 *)(v54 + 1272);
          v56 = *(__int64 **)(v54 + 1272);
          if ( v56 == (__int64 *)(v54 + 1272) )
          {
LABEL_74:
            v59 = (_DWORD *)(v54 + 1288);
            v60 = *(_DWORD *)(v54 + 1288);
            if ( v60 )
              *v59 = v60 - 1;
          }
          else
          {
            while ( 1 )
            {
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                if ( a1 )
                {
                  v57 = *(_QWORD *)(a1 + 64);
                  if ( v57 )
                  {
                    v58 = *(_QWORD *)(v57 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v57 + 880)) & *(_DWORD *)(v57 + 884));
                    *(_DWORD *)v58 = 1064591724;
                    *(_QWORD *)(v58 + 8) = 0LL;
                    *(_QWORD *)(v58 + 16) = v54;
                    *(_QWORD *)(v58 + 24) = 1232023604LL;
                  }
                }
              }
              if ( *((_DWORD *)v56 + 4) == 1232023604 && (IRP *)v56[4] == a2 )
                break;
              v56 = (__int64 *)*v56;
              if ( v56 == v55 )
                goto LABEL_74;
            }
            v61 = (__int64 *)*v56;
            if ( *(__int64 **)(*v56 + 8) != v56 )
              goto LABEL_164;
            v62 = (__int64 **)v56[1];
            if ( *v62 != v56 )
              goto LABEL_164;
            *v62 = v61;
            v61[1] = (__int64)v62;
            ExFreePoolWithTag(v56 - 1, 0);
            v59 = (_DWORD *)(v54 + 1288);
          }
          if ( (__int64 *)*v55 == v55 && !*v59 )
            KeSetEvent((PRKEVENT)(v54 + 1296), 0, 0);
          qword_14006F5A0 = 0LL;
          KeReleaseSpinLock(&HubG, v51);
        }
        else
        {
LABEL_141:
          qword_14006F5A0 = 0LL;
          KeReleaseSpinLock(&HubG, v111);
          v96 = *(unsigned __int16 *)(v30 + 4);
          if ( (UsbhLogMask & 0x20) != 0 )
          {
            if ( a1 )
            {
              v97 = *(_QWORD *)(a1 + 64);
              if ( v97 )
              {
                v98 = *(_QWORD *)(v97 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v97 + 880)) & *(_DWORD *)(v97 + 884));
                *(_DWORD *)v98 = 1886279783;
                *(_QWORD *)(v98 + 8) = 0LL;
                *(_QWORD *)(v98 + 16) = v96;
                *(_QWORD *)(v98 + 24) = v105;
              }
            }
          }
          memset(v105, 0, Size);
          v99 = *(unsigned __int16 *)(v30 + 4);
          NodeConnectionInfoForPdo = 0;
          *(_DWORD *)&v105->Type = v99;
          *(_DWORD *)((char *)&v105->AssociatedIrp.SystemBuffer + 7) = 0;
          a2->IoStatus.Information = 35LL;
        }
      }
      else
      {
LABEL_161:
        NodeConnectionInfoForPdo = -1073741811;
      }
      v8 = 1;
    }
  }
  if ( (NodeConnectionInfoForPdo & 0xC0000000) == 0xC0000000 )
    goto LABEL_155;
LABEL_84:
  if ( v8 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v63 = *(_QWORD *)(a1 + 64);
        if ( v63 )
        {
          v64 = *(_QWORD *)(v63 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v63 + 880)) & *(_DWORD *)(v63 + 884));
          *(_DWORD *)v64 = 758206529;
          *(_QWORD *)(v64 + 8) = 0LL;
          *(_QWORD *)(v64 + 16) = 0LL;
          *(_QWORD *)(v64 + 24) = 4027383812LL;
        }
      }
    }
    v65 = FdoExt(a1);
    v66 = (struct _KSEMAPHORE *)FdoExt(a1);
    FdoExt(*((_QWORD *)v65 + 218));
    v65[446] = 1734964085;
    v66[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v66 + 155, 16, 1, 0);
    v67 = (struct _KEVENT *)FdoExt(a1);
    KeSetEvent(v67 + 205, 0, 0);
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v68 = *(_QWORD *)(a1 + 64);
      if ( v68 )
      {
        v69 = *(_QWORD *)(v68 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v68 + 880)) & *(_DWORD *)(v68 + 884));
        *(_DWORD *)v69 = 844656231;
        *(_QWORD *)(v69 + 24) = NodeConnectionInfoForPdo;
        *(_QWORD *)(v69 + 8) = 0LL;
        *(_QWORD *)(v69 + 16) = a2;
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
      v70 = *(_QWORD *)(a1 + 64);
      if ( v70 )
      {
        v71 = *(_QWORD *)(v70 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v70 + 880)) & *(_DWORD *)(v70 + 884));
        *(_DWORD *)v71 = 1415802729;
        *(_QWORD *)(v71 + 8) = 0LL;
        *(_QWORD *)(v71 + 16) = 0LL;
        *(_QWORD *)(v71 + 24) = a2;
      }
    }
  }
  p_MajorFunction = (unsigned int *)&a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v73 = a2->AssociatedIrp.MasterIrp;
  v112 = v73;
  v74 = p_MajorFunction[6];
  v75 = p_MajorFunction[2];
  v76 = p_MajorFunction[4];
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v77 = *(_QWORD *)(a1 + 64);
      if ( v77 )
      {
        v78 = *(_QWORD *)(v77 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v77 + 880)) & *(_DWORD *)(v77 + 884));
        *(_DWORD *)v78 = 829714281;
        *(_QWORD *)(v78 + 8) = 0LL;
        *(_QWORD *)(v78 + 16) = v75;
        *(_QWORD *)(v78 + 24) = v76;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v79 = *(_QWORD *)(a1 + 64);
      if ( v79 )
      {
        v80 = *(_QWORD *)(v79 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v79 + 880)) & *(_DWORD *)(v79 + 884));
        *(_DWORD *)v80 = 846491497;
        *(_QWORD *)(v80 + 8) = 0LL;
        *(_QWORD *)(v80 + 16) = v73;
        *(_QWORD *)(v80 + 24) = v74;
      }
    }
  }
  Information = a2->IoStatus.Information;
  Status = a2->IoStatus.Status;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v83 = *(_QWORD *)(a1 + 64);
      if ( v83 )
      {
        v84 = *(_QWORD *)(v83 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v83 + 880)) & *(_DWORD *)(v83 + 884));
        *(_DWORD *)v84 = 863268713;
        *(_QWORD *)(v84 + 8) = 0LL;
        *(_QWORD *)(v84 + 16) = Status;
        *(_QWORD *)(v84 + 24) = Information;
      }
    }
  }
  v85 = a2->IoStatus.Information;
  v86 = v85;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        2,
        10,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
        v74);
      v73 = v112;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          2,
          11,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          v76,
          v75);
        v73 = v112;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          2,
          12,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          a2->IoStatus.Status,
          v85);
        v73 = v112;
      }
    }
    v86 = v85;
  }
  if ( (_BYTE)v85 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v100 = (__int128 *)log_xstr(v110, v86, v73, Status);
      v102 = *(_QWORD *)(v101 + 64);
      v109 = *v100;
      WPP_RECORDER_SF__HEX_(
        v102,
        v103,
        2,
        14,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
        (__int64)&v109);
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
  v87 = (struct _KEVENT *)FdoExt(a1);
  v87[142].Header.Type = 1;
  KeWaitForSingleObject(&v87[139], Executive, 0, 0, 0LL);
  Signalling = v87[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 && a1 )
  {
    v89 = *(_QWORD *)(a1 + 64);
    v90 = P;
    if ( v89 )
    {
      v91 = *(_QWORD *)(v89 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v89 + 880)) & *(_DWORD *)(v89 + 884));
      *(_DWORD *)v91 = 1667581000;
      *(_QWORD *)(v91 + 8) = 0LL;
      *(_QWORD *)(v91 + 16) = v90;
      *(_QWORD *)(v91 + 24) = Signalling;
    }
  }
  else
  {
    v90 = P;
  }
  if ( v87[142].Header.Signalling )
  {
    if ( v90 == (_QWORD *)1936941672 )
    {
      Lock = v87[130].Header.Lock;
      if ( Lock )
        v87[130].Header.LockNV = Lock - 1;
    }
    else if ( v90 )
    {
      v92 = v90[1];
      v93 = v90 + 1;
      if ( *(_QWORD **)(v92 + 8) == v90 + 1 )
      {
        v94 = (_QWORD *)v90[2];
        if ( (_QWORD *)*v94 == v93 )
        {
          *v94 = v92;
          *(_QWORD *)(v92 + 8) = v94;
          v90[2] = v90 + 1;
          *v93 = v93;
          ExFreePoolWithTag(v90, 0);
          goto LABEL_135;
        }
      }
LABEL_164:
      __fastfail(3u);
    }
  }
LABEL_135:
  KeSetEvent(v87 + 139, 0, 0);
  a2->IoStatus.Status = NodeConnectionInfoForPdo;
  IofCompleteRequest(a2, 0);
  return (unsigned int)NodeConnectionInfoForPdo;
}
