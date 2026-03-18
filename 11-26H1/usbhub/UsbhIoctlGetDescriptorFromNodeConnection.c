/*
 * XREFs of UsbhIoctlGetDescriptorFromNodeConnection @ 0x140026290
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1400275B4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004E4C8 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004E5EC (log_xstr.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorFromNodeConnection(__int64 a1, IRP *a2, __int64 a3)
{
  char v6; // di
  _IRP *MasterIrp; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  _DWORD *v16; // rsi
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r10
  int v20; // ebp
  __int64 v21; // r8
  int v22; // eax
  __int64 Type; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdx
  KIRQL v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rdi
  __int64 Pool2; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  _DWORD *v39; // rbp
  KSPIN_LOCK *v40; // rdi
  KIRQL v41; // al
  int v42; // ecx
  int v43; // esi
  _DWORD *v44; // rdi
  KIRQL v45; // dl
  int DescriptorForPDO; // eax
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  KIRQL v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  _DWORD *v55; // rsi
  __int64 *v56; // rdi
  __int64 *v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  _DWORD *v60; // rcx
  int v61; // eax
  __int64 *v62; // rcx
  __int64 **v63; // rax
  KIRQL v64; // dl
  __int64 v65; // rdx
  __int64 v66; // rdx
  _DWORD *v67; // rsi
  struct _KSEMAPHORE *v68; // rdi
  struct _KEVENT *v69; // rax
  __int64 v70; // rcx
  unsigned int *p_MajorFunction; // rax
  _IRP *v72; // r13
  __int64 v73; // r10
  __int64 v74; // rsi
  __int64 v75; // r12
  unsigned __int64 Information; // r8
  __int64 Status; // r9
  __int64 v78; // rcx
  int v79; // edi
  __int64 v80; // rdx
  __int128 *v82; // rax
  __int64 v83; // r10
  __int64 v84; // rcx
  int v85; // edx
  int v86; // [rsp+54h] [rbp-64h] BYREF
  _QWORD *v87; // [rsp+58h] [rbp-60h]
  __int128 v88; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v89[72]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v90; // [rsp+C8h] [rbp+10h] BYREF
  char v91; // [rsp+D0h] [rbp+18h]
  __int16 v92; // [rsp+D8h] [rbp+20h]

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      35,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v92 = *(_WORD *)(a3 + 8);
  v86 = 260;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        LODWORD(v90) = 1648258921;
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = v90;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = MasterIrp;
      }
    }
  }
  v10 = FdoExt(a1);
  v87 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( !v87 )
  {
    v20 = -1073741670;
    goto LABEL_73;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        LODWORD(v90) = 724652097;
        v13 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884))
            + *(_QWORD *)(v12 + 888);
        *(_DWORD *)v13 = v90;
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
  v6 = 1;
  v16[6] = v18;
  v18 *= 32LL;
  v91 = 1;
  *(_DWORD *)((char *)v16 + v18 + 28) = 11;
  *(_DWORD *)((char *)v16 + v18 + 32) = v16[340];
  *(_DWORD *)((char *)v16 + v18 + 36) = v16[340];
  *(_DWORD *)((char *)v16 + v18 + 40) = -267583477;
  v19 = (int)v16[340];
  if ( v16[340] == 5 )
  {
    v20 = 0;
  }
  else
  {
    if ( v16[340] == 6 )
      Log(a1, 32, 1095774563, 0LL, 4027383819LL);
    v20 = -1073741810;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        LODWORD(v90) = 556879937;
        v21 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v21 = v90;
        *(_QWORD *)(v21 + 16) = v20;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 24) = v19;
      }
    }
  }
  if ( (v20 & 0xC0000000) != 0xC0000000 )
  {
    v22 = UsbhIoctlValidateParameters(a1, 260, (_DWORD)a2, a3, 4, 13);
    v20 = v22;
    if ( (v22 & 0xC0000000) == 0xC0000000 )
    {
      Log(a1, 32, 1764899938, v22, 0LL);
      v20 = -1073741810;
      goto LABEL_73;
    }
    *(&MasterIrp->Size + 1) = 1664;
    Type = (unsigned __int16)MasterIrp->Type;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          LODWORD(v90) = 1329877100;
          v25 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884))
              + *(_QWORD *)(v24 + 888);
          *(_DWORD *)v25 = v90;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = Type;
          *(_QWORD *)(v25 + 24) = 1232023650LL;
        }
      }
    }
    v26 = KeAcquireSpinLockRaiseToDpc(&HubG);
    LOBYTE(v90) = v26;
    qword_140070600 = (__int64)&dword_140070608;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 1413771367;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = Type;
          *(_QWORD *)(v28 + 24) = 0LL;
        }
      }
    }
    if ( (_WORD)Type )
    {
      v29 = FdoExt(a1);
      if ( (unsigned __int16)Type > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      {
        v64 = v26;
      }
      else
      {
        v30 = *((_QWORD *)v29 + 382);
        if ( v30 )
        {
          v31 = v30 + 2928 * Type - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v32 = *(_QWORD *)(a1 + 64);
              if ( v32 )
              {
                v33 = *(_QWORD *)(v32 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
                *(_DWORD *)v33 = 1044672615;
                *(_QWORD *)(v33 + 8) = 0LL;
                *(_QWORD *)(v33 + 16) = Type;
                *(_QWORD *)(v33 + 24) = v31;
              }
            }
          }
          if ( v31 )
          {
            v34 = *(_QWORD *)(v31 + 392);
            if ( v34 )
            {
              v35 = *(_QWORD *)(v34 + 64);
              if ( !v35 )
                UsbhTrapFatal_Dbg(v34, 0LL);
              if ( *(_DWORD *)v35 != 1329877064 )
                UsbhTrapFatal_Dbg(v34, *(_QWORD *)(v34 + 64));
              Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
              if ( Pool2 )
              {
                *(_DWORD *)Pool2 = 1668571500;
                *(_QWORD *)(Pool2 + 32) = v34;
                *(_DWORD *)(Pool2 + 24) = 1232023650;
                *(_QWORD *)(Pool2 + 40) = a2;
                v37 = (_QWORD *)(Pool2 + 8);
                v38 = *(_QWORD **)(v35 + 1280);
                if ( *v38 != v35 + 1272 )
                  goto LABEL_134;
                *v37 = v35 + 1272;
                v37[1] = v38;
                *v38 = v37;
                *(_QWORD *)(v35 + 1280) = v37;
              }
              else
              {
                ++*(_DWORD *)(v35 + 1288);
              }
              qword_140070600 = 0LL;
              KeReleaseSpinLock(&HubG, v90);
              v39 = FdoExt(a1) + 346;
              v40 = (KSPIN_LOCK *)FdoExt(a1);
              v41 = KeAcquireSpinLockRaiseToDpc(v40 + 632);
              v42 = *((_DWORD *)v40 + 1043);
              *((_BYTE *)v40 + 5064) = v41;
              v39[10] = v42;
              v39[11] = 126;
              v39[8] = 844055622;
              v39[9] = 1903322197;
              *((_QWORD *)v39 + 3) = KeGetCurrentThread();
              v40[168] = (KSPIN_LOCK)v39;
              v43 = PdoExt(v34)[282];
              v44 = FdoExt(a1);
              FdoExt(*((_QWORD *)v39 + 1));
              v39[8] = 1734964085;
              v45 = *((_BYTE *)v44 + 5064);
              *((_QWORD *)v44 + 168) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)v44 + 632, v45);
              LOWORD(v90) = v92 - 12;
              DescriptorForPDO = UsbhIoctlGetDescriptorForPDO(
                                   a1,
                                   v34,
                                   (int)a2,
                                   (int)MasterIrp + 4,
                                   (__int64)&v90,
                                   (char *)&MasterIrp->MdlAddress + 4,
                                   1,
                                   v43 != 1);
              v47 = (unsigned __int16)v90;
              v20 = DescriptorForPDO;
              if ( (UsbhLogMask & 0x20) != 0 )
              {
                if ( a1 )
                {
                  v48 = *(_QWORD *)(a1 + 64);
                  if ( v48 )
                  {
                    LODWORD(v90) = 1648111977;
                    v49 = 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884))
                        + *(_QWORD *)(v48 + 888);
                    *(_DWORD *)v49 = v90;
                    *(_QWORD *)(v49 + 8) = 0LL;
                    *(_QWORD *)(v49 + 16) = DescriptorForPDO;
                    *(_QWORD *)(v49 + 24) = v47;
                  }
                }
              }
              if ( DescriptorForPDO >= 0 )
                a2->IoStatus.Information = v47 + 12;
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                if ( a1 )
                {
                  v50 = *(_QWORD *)(a1 + 64);
                  if ( v50 )
                  {
                    LODWORD(v90) = 1329877109;
                    v51 = *(_QWORD *)(v50 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
                    *(_DWORD *)v51 = v90;
                    *(_QWORD *)(v51 + 8) = 0LL;
                    *(_QWORD *)(v51 + 16) = v34;
                    *(_QWORD *)(v51 + 24) = 1232023650LL;
                  }
                }
              }
              v52 = KeAcquireSpinLockRaiseToDpc(&HubG);
              qword_140070600 = (__int64)&dword_140070608;
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                if ( a1 )
                {
                  v53 = *(_QWORD *)(a1 + 64);
                  if ( v53 )
                  {
                    LODWORD(v90) = 1348891236;
                    v54 = *(_QWORD *)(v53 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
                    *(_DWORD *)v54 = v90;
                    *(_QWORD *)(v54 + 8) = 0LL;
                    *(_QWORD *)(v54 + 16) = v34;
                    *(_QWORD *)(v54 + 24) = 1232023650LL;
                  }
                }
              }
              v55 = PdoExt(v34);
              v56 = (__int64 *)(v55 + 318);
              v57 = (__int64 *)*((_QWORD *)v55 + 159);
              if ( v57 == (__int64 *)(v55 + 318) )
              {
LABEL_64:
                v60 = v55 + 322;
                v61 = v55[322];
                if ( v61 )
                  *v60 = v61 - 1;
                goto LABEL_70;
              }
              while ( 1 )
              {
                if ( (UsbhLogMask & 0x100) != 0 )
                {
                  if ( a1 )
                  {
                    v58 = *(_QWORD *)(a1 + 64);
                    if ( v58 )
                    {
                      LODWORD(v90) = 1064591724;
                      v59 = *(_QWORD *)(v58 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
                      *(_DWORD *)v59 = v90;
                      *(_QWORD *)(v59 + 8) = 0LL;
                      *(_QWORD *)(v59 + 16) = v55;
                      *(_QWORD *)(v59 + 24) = 1232023650LL;
                    }
                  }
                }
                if ( *((_DWORD *)v57 + 4) == 1232023650 && (IRP *)v57[4] == a2 )
                  break;
                v57 = (__int64 *)*v57;
                if ( v57 == v56 )
                  goto LABEL_64;
              }
              v62 = (__int64 *)*v57;
              if ( *(__int64 **)(*v57 + 8) == v57 )
              {
                v63 = (__int64 **)v57[1];
                if ( *v63 == v57 )
                {
                  *v63 = v62;
                  v62[1] = (__int64)v63;
                  ExFreePoolWithTag(v57 - 1, 0);
                  v60 = v55 + 322;
LABEL_70:
                  if ( (__int64 *)*v56 == v56 && !*v60 )
                    KeSetEvent((PRKEVENT)v55 + 54, 0, 0);
                  v64 = v52;
                  goto LABEL_72;
                }
              }
LABEL_134:
              __fastfail(3u);
            }
          }
          v64 = v90;
        }
        else
        {
          v64 = v26;
        }
      }
    }
    else
    {
      v64 = v26;
    }
LABEL_72:
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v64);
    v6 = v91;
  }
LABEL_73:
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        LODWORD(v90) = 1648127849;
        v11 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884))
            + *(_QWORD *)(v11 + 888);
        *(_DWORD *)v11 = v90;
        *(_QWORD *)(v11 + 24) = v20;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a2;
      }
    }
  }
  if ( (v20 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v20) )
    UsbhException(a1, 0, 91, &v86, 4u, v20, 0, usbfile_ioctl_c, 1573, 0);
  if ( v6 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v65 = *(_QWORD *)(a1 + 64);
        if ( v65 )
        {
          LODWORD(v90) = 758206529;
          v66 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v65 + 880)) & *(_DWORD *)(v65 + 884))
              + *(_QWORD *)(v65 + 888);
          *(_DWORD *)v66 = v90;
          *(_QWORD *)(v66 + 24) = 4027383819LL;
          *(_QWORD *)(v66 + 8) = 0LL;
          *(_QWORD *)(v66 + 16) = 0LL;
        }
      }
    }
    v67 = FdoExt(a1);
    v68 = (struct _KSEMAPHORE *)FdoExt(a1);
    FdoExt(*((_QWORD *)v67 + 218));
    v67[446] = 1734964085;
    v68[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v68 + 155, 16, 1, 0);
    v69 = (struct _KEVENT *)FdoExt(a1);
    KeSetEvent(v69 + 205, 0, 0);
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        LODWORD(v90) = 1415802729;
        v70 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v70 = v90;
        *(_QWORD *)(v70 + 8) = 0LL;
        *(_QWORD *)(v70 + 16) = 0LL;
        *(_QWORD *)(v70 + 24) = a2;
      }
    }
  }
  p_MajorFunction = (unsigned int *)&a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v72 = a2->AssociatedIrp.MasterIrp;
  v73 = p_MajorFunction[6];
  v74 = p_MajorFunction[2];
  v75 = p_MajorFunction[4];
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        LODWORD(v90) = 829714281;
        v11 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884))
            + *(_QWORD *)(v11 + 888);
        *(_DWORD *)v11 = v90;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v74;
        *(_QWORD *)(v11 + 24) = v75;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        LODWORD(v90) = 846491497;
        v11 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884))
            + *(_QWORD *)(v11 + 888);
        *(_DWORD *)v11 = v90;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v72;
        *(_QWORD *)(v11 + 24) = v73;
      }
    }
  }
  Information = a2->IoStatus.Information;
  Status = a2->IoStatus.Status;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        LODWORD(v90) = 863268713;
        v78 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v78 = v90;
        *(_QWORD *)(v78 + 8) = 0LL;
        *(_QWORD *)(v78 + 16) = Status;
        *(_QWORD *)(v78 + 24) = Information;
      }
    }
  }
  v79 = a2->IoStatus.Information;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        2,
        10,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
        v73);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          2,
          11,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          v75,
          v74);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          2,
          12,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          a2->IoStatus.Status,
          v79);
    }
  }
  if ( (_BYTE)v79 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v82 = (__int128 *)log_xstr(v89, (unsigned __int8)v79, v72, Status);
      v84 = *(_QWORD *)(v83 + 64);
      v88 = *v82;
      WPP_RECORDER_SF__HEX_(v84, v85, 2, 14, (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids, (__int64)&v88);
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
  UsbhDecHubBusy(a1, v80, v87);
  a2->IoStatus.Status = v20;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v20;
}
