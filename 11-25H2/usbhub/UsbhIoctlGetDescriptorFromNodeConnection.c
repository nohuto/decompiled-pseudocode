/*
 * XREFs of UsbhIoctlGetDescriptorFromNodeConnection @ 0x140020DC0
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x14001F69C (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004E8E8 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004EA04 (log_xstr.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorFromNodeConnection(__int64 a1, IRP *a2, __int64 a3)
{
  char v6; // si
  _IRP *MasterIrp; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  _DWORD *v16; // rsi
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 DescriptorForPDO; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int16 *v24; // rax
  char *v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  KIRQL v29; // al
  __int64 v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 Pool2; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  _DWORD *v42; // r14
  KSPIN_LOCK *v43; // rdi
  KIRQL v44; // al
  int v45; // ecx
  int v46; // esi
  _DWORD *v47; // rdi
  KIRQL v48; // dl
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  _DWORD *v56; // rsi
  __int64 *v57; // rdi
  __int64 *v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  _DWORD *v61; // rcx
  int v62; // eax
  __int64 *v63; // rcx
  __int64 **v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  _DWORD *v69; // rsi
  struct _KSEMAPHORE *v70; // rdi
  struct _KEVENT *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int *p_MajorFunction; // rax
  _IRP *v75; // r8
  __int64 v76; // r11
  __int64 v77; // r10
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 Information; // r8
  __int64 Status; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // edi
  unsigned __int8 v88; // cl
  struct _KEVENT *v89; // rdi
  __int64 Signalling; // r8
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rcx
  _QWORD *v94; // rax
  _QWORD *v95; // rdx
  __int128 *v97; // rax
  __int64 v98; // r10
  __int64 v99; // rcx
  int v100; // edx
  volatile int Lock; // eax
  __int64 v102; // [rsp+50h] [rbp-19h]
  int v103; // [rsp+58h] [rbp-11h] BYREF
  void *v104; // [rsp+60h] [rbp-9h]
  int v105[2]; // [rsp+68h] [rbp-1h]
  __int128 v106; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v107[64]; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v108; // [rsp+D8h] [rbp+6Fh]
  int v109; // [rsp+E0h] [rbp+77h]
  KIRQL v110; // [rsp+E0h] [rbp+77h]
  __int64 v111; // [rsp+E8h] [rbp+7Fh] BYREF

  v109 = a3;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      35,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LOWORD(v111) = *(_WORD *)(a3 + 8);
  v103 = 260;
  v104 = MasterIrp;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1648258921;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = MasterIrp;
      }
    }
  }
  v10 = FdoExt(a1);
  v11 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( v11 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_DWORD *)v13 = 724652097;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 16) = 0LL;
          *(_QWORD *)(v13 + 24) = 4027383819LL;
        }
      }
    }
    v14 = FdoExt(a1);
    KeWaitForSingleObject(v14 + 1230, Executive, 0, 0, 0LL);
    v15 = FdoExt(a1) + 434;
    v16 = FdoExt(a1);
    KeWaitForSingleObject(v16 + 1240, Executive, 0, 0, 0LL);
    v15[14] = v16[340];
    v15[15] = 11;
    v15[12] = 827278406;
    *((_QWORD *)v15 + 3) = KeGetCurrentThread();
    v17 = v16[6];
    *((_QWORD *)v16 + 166) = v15;
    v18 = ((_BYTE)v17 + 1) & 7;
    v16[6] = v18;
    v18 *= 32LL;
    *(_DWORD *)((char *)v16 + v18 + 28) = 11;
    *(_DWORD *)((char *)v16 + v18 + 32) = v16[340];
    *(_DWORD *)((char *)v16 + v18 + 36) = v16[340];
    *(_DWORD *)((char *)v16 + v18 + 40) = -267583477;
    v19 = (int)v16[340];
    v6 = 1;
    if ( (_DWORD)v19 == 5 )
    {
      LODWORD(DescriptorForPDO) = 0;
    }
    else
    {
      if ( (_DWORD)v19 == 6 )
        Log(a1, 32, 1095774563, 0LL, 4027383819LL);
      LODWORD(DescriptorForPDO) = -1073741810;
    }
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v21 = *(_QWORD *)(a1 + 64);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
          *(_DWORD *)v22 = 556879937;
          *(_QWORD *)(v22 + 16) = (int)DescriptorForPDO;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 24) = v19;
        }
      }
    }
    if ( (DescriptorForPDO & 0xC0000000) != 0xC0000000 )
    {
      v23 = UsbhIoctlValidateParameters(a1, 260, (_DWORD)a2, v109, 4, 13);
      LODWORD(DescriptorForPDO) = v23;
      if ( (v23 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 32, 1764899938, v23, 0LL);
        LODWORD(DescriptorForPDO) = -1073741810;
      }
      else
      {
        v24 = (unsigned __int16 *)v104;
        v25 = (char *)v104 + 4;
        *((_WORD *)v104 + 2) = 1664;
        v26 = *v24;
        *(_QWORD *)v105 = v25;
        v104 = v24 + 6;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v27 = *(_QWORD *)(a1 + 64);
            if ( v27 )
            {
              v28 = *(_QWORD *)(v27 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
              *(_DWORD *)v28 = 1329877100;
              *(_QWORD *)(v28 + 8) = 0LL;
              *(_QWORD *)(v28 + 16) = v26;
              *(_QWORD *)(v28 + 24) = 1232023650LL;
            }
          }
        }
        v29 = KeAcquireSpinLockRaiseToDpc(&HubG);
        v110 = v29;
        qword_14006F5A0 = (__int64)&dword_14006F5A8;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v30 = *(_QWORD *)(a1 + 64);
            if ( v30 )
            {
              v31 = *(_QWORD *)(v30 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
              *(_DWORD *)v31 = 1413771367;
              *(_QWORD *)(v31 + 8) = 0LL;
              *(_QWORD *)(v31 + 16) = v26;
              *(_QWORD *)(v31 + 24) = 0LL;
            }
          }
        }
        if ( (_WORD)v26 )
        {
          v32 = FdoExt(a1);
          if ( (unsigned __int16)v26 <= *((unsigned __int8 *)FdoExt(a1) + 2938) )
          {
            v33 = *((_QWORD *)v32 + 382);
            if ( v33 )
            {
              v34 = v33 + 2928 * v26 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                if ( a1 )
                {
                  v35 = *(_QWORD *)(a1 + 64);
                  if ( v35 )
                  {
                    v36 = *(_QWORD *)(v35 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
                    *(_DWORD *)v36 = 1044672615;
                    *(_QWORD *)(v36 + 8) = 0LL;
                    *(_QWORD *)(v36 + 16) = v26;
                    *(_QWORD *)(v36 + 24) = v34;
                  }
                }
              }
              if ( v34 )
              {
                v37 = *(_QWORD *)(v34 + 392);
                v102 = v37;
                if ( v37 )
                {
                  v38 = *(_QWORD *)(v37 + 64);
                  if ( !v38 )
                    UsbhTrapFatal_Dbg(v37, 0LL);
                  if ( *(_DWORD *)v38 != 1329877064 )
                    UsbhTrapFatal_Dbg(v37, *(_QWORD *)(v37 + 64));
                  Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                  if ( Pool2 )
                  {
                    *(_DWORD *)Pool2 = 1668571500;
                    *(_QWORD *)(Pool2 + 32) = v37;
                    *(_DWORD *)(Pool2 + 24) = 1232023650;
                    *(_QWORD *)(Pool2 + 40) = a2;
                    v40 = (_QWORD *)(Pool2 + 8);
                    v41 = *(_QWORD **)(v38 + 1280);
                    if ( *v41 != v38 + 1272 )
                      goto LABEL_145;
                    *v40 = v38 + 1272;
                    v40[1] = v41;
                    *v41 = v40;
                    *(_QWORD *)(v38 + 1280) = v40;
                  }
                  else
                  {
                    ++*(_DWORD *)(v38 + 1288);
                  }
                  qword_14006F5A0 = 0LL;
                  KeReleaseSpinLock(&HubG, v110);
                  v42 = FdoExt(a1) + 346;
                  v43 = (KSPIN_LOCK *)FdoExt(a1);
                  v44 = KeAcquireSpinLockRaiseToDpc(v43 + 632);
                  v45 = *((_DWORD *)v43 + 1043);
                  *((_BYTE *)v43 + 5064) = v44;
                  v42[10] = v45;
                  v42[11] = 126;
                  v42[8] = 844055622;
                  v42[9] = 1903322197;
                  *((_QWORD *)v42 + 3) = KeGetCurrentThread();
                  v43[168] = (KSPIN_LOCK)v42;
                  v46 = PdoExt(v37)[282];
                  v47 = FdoExt(a1);
                  FdoExt(*((_QWORD *)v42 + 1));
                  v42[8] = 1734964085;
                  v48 = *((_BYTE *)v47 + 5064);
                  *((_QWORD *)v47 + 168) = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)v47 + 632, v48);
                  LOWORD(v111) = v111 - 12;
                  DescriptorForPDO = (int)UsbhIoctlGetDescriptorForPDO(
                                            a1,
                                            v102,
                                            (__int64)a2,
                                            *(__int64 *)v105,
                                            (unsigned __int16 *)&v111,
                                            v104,
                                            1,
                                            v46 != 1);
                  if ( (UsbhLogMask & 0x20) != 0 && a1 && (v49 = *(_QWORD *)(a1 + 64)) != 0 )
                  {
                    v50 = *(_QWORD *)(v49 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
                    v51 = (unsigned __int16)v111;
                    *(_DWORD *)v50 = 1648111977;
                    *(_QWORD *)(v50 + 8) = 0LL;
                    *(_QWORD *)(v50 + 16) = DescriptorForPDO;
                    *(_QWORD *)(v50 + 24) = v51;
                  }
                  else
                  {
                    LOWORD(v51) = v111;
                  }
                  if ( (int)DescriptorForPDO >= 0 )
                    a2->IoStatus.Information = (unsigned __int16)v51 + 12LL;
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
                        *(_DWORD *)v53 = 1329877109;
                        *(_QWORD *)(v53 + 8) = 0LL;
                        *(_QWORD *)(v53 + 16) = v102;
                        *(_QWORD *)(v53 + 24) = 1232023650LL;
                      }
                    }
                  }
                  v110 = KeAcquireSpinLockRaiseToDpc(&HubG);
                  qword_14006F5A0 = (__int64)&dword_14006F5A8;
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
                        *(_DWORD *)v55 = 1348891236;
                        *(_QWORD *)(v55 + 8) = 0LL;
                        *(_QWORD *)(v55 + 16) = v102;
                        *(_QWORD *)(v55 + 24) = 1232023650LL;
                      }
                    }
                  }
                  v56 = PdoExt(v102);
                  v57 = (__int64 *)(v56 + 318);
                  v58 = (__int64 *)*((_QWORD *)v56 + 159);
                  if ( v58 == (__int64 *)(v56 + 318) )
                  {
LABEL_64:
                    v61 = v56 + 322;
                    v62 = v56[322];
                    if ( v62 )
                      *v61 = v62 - 1;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      if ( (UsbhLogMask & 0x100) != 0 )
                      {
                        if ( a1 )
                        {
                          v59 = *(_QWORD *)(a1 + 64);
                          if ( v59 )
                          {
                            v60 = *(_QWORD *)(v59 + 888)
                                + 32LL
                                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v59 + 880)) & *(_DWORD *)(v59 + 884));
                            *(_DWORD *)v60 = 1064591724;
                            *(_QWORD *)(v60 + 8) = 0LL;
                            *(_QWORD *)(v60 + 16) = v56;
                            *(_QWORD *)(v60 + 24) = 1232023650LL;
                          }
                        }
                      }
                      if ( *((_DWORD *)v58 + 4) == 1232023650 && (IRP *)v58[4] == a2 )
                        break;
                      v58 = (__int64 *)*v58;
                      if ( v58 == v57 )
                        goto LABEL_64;
                    }
                    v63 = (__int64 *)*v58;
                    if ( *(__int64 **)(*v58 + 8) != v58 )
                      goto LABEL_145;
                    v64 = (__int64 **)v58[1];
                    if ( *v64 != v58 )
                      goto LABEL_145;
                    *v64 = v63;
                    v63[1] = (__int64)v64;
                    ExFreePoolWithTag(v58 - 1, 0);
                    v61 = v56 + 322;
                  }
                  if ( (__int64 *)*v57 == v57 && !*v61 )
                    KeSetEvent((PRKEVENT)v56 + 54, 0, 0);
                }
              }
            }
          }
          qword_14006F5A0 = 0LL;
          KeReleaseSpinLock(&HubG, v110);
          v6 = 1;
        }
        else
        {
          qword_14006F5A0 = 0LL;
          KeReleaseSpinLock(&HubG, v29);
        }
      }
    }
  }
  else
  {
    LODWORD(DescriptorForPDO) = -1073741670;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v65 = *(_QWORD *)(a1 + 64);
      if ( v65 )
      {
        v66 = *(_QWORD *)(v65 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v65 + 880)) & *(_DWORD *)(v65 + 884));
        *(_DWORD *)v66 = 1648127849;
        *(_QWORD *)(v66 + 24) = (int)DescriptorForPDO;
        *(_QWORD *)(v66 + 8) = 0LL;
        *(_QWORD *)(v66 + 16) = a2;
      }
    }
  }
  if ( (DescriptorForPDO & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(DescriptorForPDO) )
    UsbhException(a1, 0, 91, &v103, 4u, DescriptorForPDO, 0, usbfile_ioctl_c, 1573, 0);
  if ( v6 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v67 = *(_QWORD *)(a1 + 64);
        if ( v67 )
        {
          v68 = *(_QWORD *)(v67 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v67 + 880)) & *(_DWORD *)(v67 + 884));
          *(_DWORD *)v68 = 758206529;
          *(_QWORD *)(v68 + 24) = 4027383819LL;
          *(_QWORD *)(v68 + 8) = 0LL;
          *(_QWORD *)(v68 + 16) = 0LL;
        }
      }
    }
    v69 = FdoExt(a1);
    v70 = (struct _KSEMAPHORE *)FdoExt(a1);
    FdoExt(*((_QWORD *)v69 + 218));
    v69[446] = 1734964085;
    v70[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v70 + 155, 16, 1, 0);
    v71 = (struct _KEVENT *)FdoExt(a1);
    KeSetEvent(v71 + 205, 0, 0);
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v72 = *(_QWORD *)(a1 + 64);
      if ( v72 )
      {
        v73 = *(_QWORD *)(v72 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 880)) & *(_DWORD *)(v72 + 884));
        *(_DWORD *)v73 = 1415802729;
        *(_QWORD *)(v73 + 8) = 0LL;
        *(_QWORD *)(v73 + 16) = 0LL;
        *(_QWORD *)(v73 + 24) = a2;
      }
    }
  }
  p_MajorFunction = (unsigned int *)&a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v75 = a2->AssociatedIrp.MasterIrp;
  *(_QWORD *)v105 = v75;
  v76 = p_MajorFunction[4];
  v77 = p_MajorFunction[6];
  v78 = p_MajorFunction[2];
  v108 = p_MajorFunction[4];
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
        *(_DWORD *)v80 = 829714281;
        *(_QWORD *)(v80 + 8) = 0LL;
        *(_QWORD *)(v80 + 16) = v78;
        *(_QWORD *)(v80 + 24) = v76;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v81 = *(_QWORD *)(a1 + 64);
      if ( v81 )
      {
        v82 = *(_QWORD *)(v81 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v81 + 880)) & *(_DWORD *)(v81 + 884));
        *(_DWORD *)v82 = 846491497;
        *(_QWORD *)(v82 + 8) = 0LL;
        *(_QWORD *)(v82 + 16) = v75;
        *(_QWORD *)(v82 + 24) = v77;
      }
    }
  }
  Information = a2->IoStatus.Information;
  Status = a2->IoStatus.Status;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v85 = *(_QWORD *)(a1 + 64);
      if ( v85 )
      {
        v86 = *(_QWORD *)(v85 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v85 + 880)) & *(_DWORD *)(v85 + 884));
        *(_DWORD *)v86 = 863268713;
        *(_QWORD *)(v86 + 8) = 0LL;
        *(_QWORD *)(v86 + 16) = Status;
        *(_QWORD *)(v86 + 24) = Information;
      }
    }
  }
  v87 = a2->IoStatus.Information;
  v88 = v87;
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
        v77);
      LOBYTE(v76) = v108;
      v88 = v87;
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
          v78);
        v88 = v87;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            2,
            12,
            (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
            a2->IoStatus.Status,
            v87);
        v88 = v87;
      }
    }
  }
  if ( (_BYTE)v87 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v97 = (__int128 *)log_xstr(v107, v88, *(_QWORD *)v105, Status);
      v99 = *(_QWORD *)(v98 + 64);
      v106 = *v97;
      WPP_RECORDER_SF__HEX_(v99, v100, 2, 14, (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids, (__int64)&v106);
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
  v89 = (struct _KEVENT *)FdoExt(a1);
  v89[142].Header.Type = 1;
  KeWaitForSingleObject(&v89[139], Executive, 0, 0, 0LL);
  Signalling = v89[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v91 = *(_QWORD *)(a1 + 64);
      if ( v91 )
      {
        v92 = *(_QWORD *)(v91 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v91 + 880)) & *(_DWORD *)(v91 + 884));
        *(_DWORD *)v92 = 1667581000;
        *(_QWORD *)(v92 + 8) = 0LL;
        *(_QWORD *)(v92 + 16) = v11;
        *(_QWORD *)(v92 + 24) = Signalling;
      }
    }
  }
  if ( v89[142].Header.Signalling )
  {
    if ( v11 == (_QWORD *)1936941672 )
    {
      Lock = v89[130].Header.Lock;
      if ( Lock )
        v89[130].Header.LockNV = Lock - 1;
    }
    else if ( v11 )
    {
      v93 = v11[1];
      v94 = v11 + 1;
      if ( *(_QWORD **)(v93 + 8) == v11 + 1 )
      {
        v95 = (_QWORD *)v11[2];
        if ( (_QWORD *)*v95 == v94 )
        {
          *v95 = v93;
          *(_QWORD *)(v93 + 8) = v95;
          v11[2] = v11 + 1;
          *v94 = v94;
          ExFreePoolWithTag(v11, 0);
          goto LABEL_123;
        }
      }
LABEL_145:
      __fastfail(3u);
    }
  }
LABEL_123:
  KeSetEvent(v89 + 139, 0, 0);
  a2->IoStatus.Status = DescriptorForPDO;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DescriptorForPDO;
}
