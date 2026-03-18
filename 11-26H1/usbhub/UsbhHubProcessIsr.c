/*
 * XREFs of UsbhHubProcessIsr @ 0x14001C3D0
 * Callers:
 *     UsbhHubIsrWorker @ 0x140030360 (UsbhHubIsrWorker.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhPostInterrupt @ 0x1400133E0 (UsbhPostInterrupt.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhQueuePauseChange @ 0x1400142C4 (UsbhQueuePauseChange.c)
 *     UsbhSyncSendCommand @ 0x1400175B0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x14001E924 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x14001E94C (UsbhDispatch_PortChangeQueueEvent.c)
 *     UsbhQueueWorkItemEx @ 0x14002C4D0 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_HW_Stop @ 0x140043D08 (UsbhPCE_HW_Stop.c)
 *     UsbhHubAckHubChange @ 0x1400474B4 (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x140047CC4 (UsbhQueryHubState.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

int __fastcall UsbhHubProcessIsr(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v4; // r14
  volatile signed __int32 *DeviceExtension; // rdx
  __int64 v7; // rdx
  struct _KEVENT *v8; // r13
  _QWORD *v9; // r12
  __int64 v10; // r15
  volatile signed __int32 *v11; // rdx
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  volatile signed __int32 *v18; // rdx
  __int64 v19; // rdx
  volatile signed __int32 *v20; // rdx
  __int64 v21; // rdx
  _DWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r14
  void *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbx
  int v29; // r12d
  unsigned __int16 v30; // ax
  char v31; // bl
  _DWORD *v32; // rdx
  int v33; // ecx
  unsigned __int16 v34; // r14
  volatile signed __int32 *v35; // rdx
  volatile signed __int32 *v36; // rdx
  __int64 v37; // rdx
  volatile signed __int32 *v38; // rdx
  __int64 v39; // rdx
  volatile signed __int32 *v40; // rdx
  __int64 v41; // rdx
  volatile signed __int32 *v42; // rdx
  __int64 v43; // rdx
  _DWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rdx
  void *v47; // r8
  __int64 v48; // rcx
  int v49; // r12d
  __int64 v50; // rbx
  volatile signed __int32 *v51; // rdx
  __int64 v52; // rdx
  _DWORD *v53; // r14
  __int64 v54; // rcx
  __int64 v55; // r10
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  _UNKNOWN **v60; // rax
  __int64 v61; // r8
  volatile signed __int32 *v62; // rdx
  signed __int32 v63; // esi
  __int64 v64; // rcx
  void *v65; // rdx
  __int64 v66; // rcx
  void *v67; // rdx
  __int64 LockNV; // r8
  __int64 v69; // rcx
  __int16 v70; // r12
  __int64 v71; // rdx
  __int64 v72; // r9
  const void *v73; // r9
  __int64 v74; // rbx
  int v75; // eax
  char v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int16 v81; // r9
  const void *v82; // r9
  int v83; // r9d
  _WORD *v85; // [rsp+20h] [rbp-99h]
  int v86; // [rsp+60h] [rbp-59h] BYREF
  int v87; // [rsp+64h] [rbp-55h] BYREF
  unsigned __int16 v88; // [rsp+68h] [rbp-51h]
  int v89; // [rsp+6Ch] [rbp-4Dh]
  int v90; // [rsp+70h] [rbp-49h] BYREF
  __int16 v91; // [rsp+74h] [rbp-45h]
  __int16 v92; // [rsp+76h] [rbp-43h]
  __int64 v93; // [rsp+78h] [rbp-41h]
  _QWORD *v94; // [rsp+80h] [rbp-39h]
  __int64 v95; // [rsp+88h] [rbp-31h] BYREF
  __int64 v96; // [rsp+90h] [rbp-29h]
  int v97; // [rsp+98h] [rbp-21h]
  __int16 v98; // [rsp+9Ch] [rbp-1Dh]
  __int16 v99; // [rsp+9Eh] [rbp-1Bh]
  __int16 v100; // [rsp+A0h] [rbp-19h]
  __int16 v101; // [rsp+A2h] [rbp-17h]
  _WORD v102[2]; // [rsp+A8h] [rbp-11h] BYREF
  int v103; // [rsp+ACh] [rbp-Dh]
  int v104; // [rsp+B0h] [rbp-9h]
  int v110; // [rsp+C8h] [rbp+Fh]

  v4 = a2;
  v93 = a3;
  v89 = a2;
  v86 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      36,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      a2);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v87 = 1467052649;
        v7 = 32LL * ((unsigned int)_InterlockedDecrement(DeviceExtension + 220) & DeviceExtension[221])
           + *((_QWORD *)DeviceExtension + 111);
        *(_DWORD *)v7 = 1467052649;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a3;
        *(_QWORD *)(v7 + 24) = v4;
      }
    }
  }
  v8 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v9 = (_QWORD *)UsbhIncHubBusy((__int64)DeviceObject, a3, (__int64)DeviceObject, 826438515, 0);
  v94 = v9;
  _InterlockedIncrement(&v8[114].Header.Lock);
  v10 = (unsigned __int8)v4;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( DeviceObject )
    {
      v11 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( v11 )
      {
        v87 = 2003923561;
        v12 = 32LL * ((unsigned int)_InterlockedDecrement(v11 + 220) & v11[221]) + *((_QWORD *)v11 + 111);
        *(_DWORD *)v12 = 2003923561;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = (unsigned __int8)v4;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
    }
  }
  if ( (_BYTE)v4 )
  {
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( DeviceObject )
      {
        v13 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
        if ( v13 )
        {
          v86 = 1413771367;
          v14 = 32LL * ((unsigned int)_InterlockedDecrement(v13 + 220) & v13[221]) + *((_QWORD *)v13 + 111);
          *(_DWORD *)v14 = 1413771367;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 16) = (unsigned __int8)v4;
          *(_QWORD *)(v14 + 24) = 0LL;
        }
      }
    }
    v15 = FdoExt((__int64)DeviceObject);
    if ( (unsigned __int8)v4 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
    {
      v16 = *((_QWORD *)v15 + 382);
      if ( v16 )
      {
        v17 = v16 + 2928LL * (unsigned __int8)v4 - 2928;
        v96 = v17;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( DeviceObject )
          {
            v18 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
            if ( v18 )
            {
              v86 = 1044672615;
              v19 = 32LL * ((unsigned int)_InterlockedDecrement(v18 + 220) & v18[221]) + *((_QWORD *)v18 + 111);
              *(_DWORD *)v19 = 1044672615;
              *(_QWORD *)(v19 + 8) = 0LL;
              *(_QWORD *)(v19 + 16) = (unsigned __int8)v4;
              *(_QWORD *)(v19 + 24) = v17;
            }
          }
        }
        if ( v17 )
        {
          v95 = 0LL;
          v87 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              19,
              (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
              v4);
          }
          v90 = 0;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( DeviceObject )
            {
              v20 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
              if ( v20 )
              {
                v86 = 1413771367;
                v21 = 32LL * ((unsigned int)_InterlockedDecrement(v20 + 220) & v20[221]) + *((_QWORD *)v20 + 111);
                *(_DWORD *)v21 = 1413771367;
                *(_QWORD *)(v21 + 8) = 0LL;
                *(_QWORD *)(v21 + 16) = (unsigned __int8)v4;
                *(_QWORD *)(v21 + 24) = 0LL;
              }
            }
          }
          v22 = FdoExt((__int64)DeviceObject);
          if ( (unsigned __int8)v4 > *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
          {
            LOWORD(v23) = 0;
            v24 = 0LL;
          }
          else
          {
            v23 = *((_QWORD *)v22 + 382);
            if ( v23 )
            {
              v24 = v23 + 2928LL * (unsigned __int8)v4 - 2928;
              if ( (UsbhLogMask & 8) != 0 && DeviceObject && (v25 = DeviceObject->DeviceExtension) != 0LL )
              {
                v86 = 1044672615;
                v26 = *((_QWORD *)v25 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
                *(_DWORD *)v26 = 1044672615;
                LOWORD(v23) = 0;
                *(_QWORD *)(v26 + 8) = 0LL;
                *(_QWORD *)(v26 + 16) = v10;
                *(_QWORD *)(v26 + 24) = v24;
              }
              else
              {
                LOWORD(v23) = 0;
              }
            }
            else
            {
              v24 = 0LL;
            }
          }
          v88 = v23;
          LODWORD(v28) = UsbhQueryPortState((__int64)DeviceObject, v10, (__int64)&v87, &v90);
          if ( (int)v28 >= 0 )
          {
            v27 = 1LL;
            v70 = 1;
            while ( ((unsigned __int16)v70 & HIWORD(v87)) == 0 )
            {
              v70 *= 2;
              if ( (v70 & 0xFFE0) != 0 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    20,
                    (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
                }
                Log((__int64)DeviceObject, 4, 1666076515, 0LL, 0LL);
                if ( (FdoExt((__int64)DeviceObject)[640] & 1) == 0
                  || (++*(_DWORD *)(v24 + 408), *(int *)(v24 + 408) >= 3) )
                {
                  v29 = -1073704960;
                  UsbhException((__int64)DeviceObject, v10, 10, &v87, 4u, v28, -1073704960, usbfile_bus_c, 1463, 0);
                  LODWORD(v28) = -1073741823;
                  goto LABEL_37;
                }
                break;
              }
            }
            if ( (v70 & 0x1F) == 0 )
              goto LABEL_36;
            v30 = v70 | v88;
            v29 = v90;
            v88 = v30;
          }
          else
          {
LABEL_36:
            v29 = v90;
LABEL_37:
            v30 = v88;
          }
          if ( v30 )
          {
            *(_DWORD *)(v24 + 408) = 0;
            v30 = v88;
          }
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( DeviceObject )
            {
              v27 = (__int64)DeviceObject->DeviceExtension;
              if ( v27 )
              {
                v86 = 1734894416;
                v27 = 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884))
                    + *(_QWORD *)(v27 + 888);
                *(_DWORD *)v27 = 1734894416;
                *(_QWORD *)(v27 + 24) = (int)v28;
                *(_QWORD *)(v27 + 8) = 0LL;
                *(_QWORD *)(v27 + 16) = v30;
                v30 = v88;
              }
            }
          }
          v86 = v29;
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( DeviceObject )
            {
              v27 = (__int64)DeviceObject->DeviceExtension;
              if ( v27 )
              {
                v87 = 1751340369;
                v27 = 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884))
                    + *(_QWORD *)(v27 + 888);
                *(_DWORD *)v27 = v87;
                *(_QWORD *)(v27 + 24) = (int)v28;
                *(_QWORD *)(v27 + 8) = 0LL;
                *(_QWORD *)(v27 + 16) = v10;
                v30 = v88;
              }
            }
          }
          if ( (v28 & 0xC0000000) == 0xC0000000 )
          {
LABEL_181:
            KeSetEvent(v8 + 112, 0, 0);
            if ( Usb_Disconnected(v28) )
            {
              Log((__int64)DeviceObject, 4, 1769436977, 0LL, v71);
              UsbhQueuePauseChange((__int64)DeviceObject, (unsigned __int16)v10, v93, v72);
              UsbhPCE_HW_Stop(DeviceObject, (unsigned __int16)v10, v93);
              LOBYTE(v4) = v89;
              v9 = v94;
            }
            else
            {
              Log((__int64)DeviceObject, 4, 1769436978, 0LL, v71);
              UsbhException((__int64)DeviceObject, v10, 1, v73, 0, v28, v29, usbfile_bus_c, 3213, 1);
              LOBYTE(v4) = v89;
              v9 = v94;
            }
LABEL_138:
            LockNV = v8[114].Header.LockNV;
            if ( (UsbhLogMask & 4) != 0 )
            {
              if ( DeviceObject )
              {
                v67 = DeviceObject->DeviceExtension;
                if ( v67 )
                {
                  v89 = 842954601;
                  v69 = *((_QWORD *)v67 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v67 + 220) & *((_DWORD *)v67 + 221));
                  *(_DWORD *)v69 = v89;
                  *(_QWORD *)(v69 + 8) = 0LL;
                  *(_QWORD *)(v69 + 16) = 0LL;
                  *(_QWORD *)(v69 + 24) = LockNV;
                }
              }
            }
            _InterlockedDecrement(&v8[114].Header.Lock);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                39,
                (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
                v4);
            }
            LODWORD(v60) = UsbhDecHubBusy((__int64)DeviceObject, (__int64)v67, v9);
            return (int)v60;
          }
          v31 = v89;
          v90 = v89;
          v103 = 0;
          if ( dword_1400706F0 )
          {
            v32 = FdoExt((__int64)DeviceObject);
            v97 = v32[1298];
            v98 = *((_WORD *)v32 + 2598);
            v99 = v32[1300];
            v100 = *((_WORD *)v32 + 2614);
            v101 = *((_WORD *)v32 + 2615);
            v102[0] = *((_WORD *)v32 + 1274);
            v102[1] = *((_WORD *)v32 + 1275);
            v103 = 0;
            v104 = *((unsigned __int16 *)v32 + 2604);
            v33 = *((_WORD *)v32 + 2604) != 0;
            v103 = v33;
            if ( *((unsigned __int16 *)v32 + 2605) )
              v103 = ++v33;
            if ( *((unsigned __int16 *)v32 + 2606) )
              v103 = ++v33;
            if ( *((unsigned __int16 *)v32 + 2607) )
              v103 = ++v33;
            if ( *((unsigned __int16 *)v32 + 2608) )
              v103 = ++v33;
            if ( *((unsigned __int16 *)v32 + 2609) )
              v103 = v33 + 1;
            v110 = v32[634];
            v85 = v102;
            UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL);
            v30 = v88;
          }
          if ( !v30 )
            goto LABEL_125;
          LOWORD(v87) = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              27,
              (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
              v10);
            v30 = v88;
          }
          if ( (v30 & 1) != 0 )
          {
            v34 = 16;
          }
          else if ( (v30 & 2) != 0 )
          {
            v34 = 17;
          }
          else if ( (v30 & 4) != 0 )
          {
            v34 = 18;
          }
          else if ( (v30 & 8) != 0 )
          {
            v34 = 19;
          }
          else
          {
            if ( (v30 & 0x10) == 0 )
            {
              LODWORD(v28) = 0;
              goto LABEL_73;
            }
            v34 = 20;
          }
          LOWORD(v90) = 291;
          v92 = 0;
          HIWORD(v90) = v34;
          v91 = v10;
          v28 = (int)UsbhSyncSendCommand((__int64)DeviceObject, (__int64)&v90, 0LL, &v87, (__int64)v85, &v86);
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( DeviceObject )
            {
              v35 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
              if ( v35 )
              {
                v87 = 1734560577;
                v35 = (volatile signed __int32 *)(32LL * ((unsigned int)_InterlockedDecrement(v35 + 220) & v35[221])
                                                + *((_QWORD *)v35 + 111));
                *v35 = v87;
                *((_QWORD *)v35 + 2) = v34;
                *((_QWORD *)v35 + 1) = 0LL;
                *((_QWORD *)v35 + 3) = v28;
              }
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v35,
              1,
              28,
              (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
              v10,
              v28);
          }
          v29 = v86;
          v30 = v88;
LABEL_73:
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( DeviceObject )
            {
              v36 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
              if ( v36 )
              {
                v86 = 1734894401;
                v37 = 32LL * ((unsigned int)_InterlockedDecrement(v36 + 220) & v36[221]) + *((_QWORD *)v36 + 111);
                *(_DWORD *)v37 = v86;
                *(_QWORD *)(v37 + 24) = (int)v28;
                *(_QWORD *)(v37 + 8) = 0LL;
                *(_QWORD *)(v37 + 16) = v10;
                v30 = v88;
              }
            }
          }
          if ( (v28 & 0xC0000000) != 0xC0000000 )
          {
            if ( (v30 & 1) != 0 )
            {
              if ( (UsbhLogMask & 4) != 0 )
              {
                if ( DeviceObject )
                {
                  v38 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
                  if ( v38 )
                  {
                    v86 = 725831234;
                    v39 = 32LL * ((unsigned int)_InterlockedDecrement(v38 + 220) & v38[221]) + *((_QWORD *)v38 + 111);
                    *(_DWORD *)v39 = v86;
                    *(_QWORD *)(v39 + 8) = 0LL;
                    *(_QWORD *)(v39 + 16) = v10;
                    *(_QWORD *)(v39 + 24) = 0LL;
                  }
                }
              }
              _InterlockedIncrement((volatile signed __int32 *)(v96 + 404));
              v30 = v88;
            }
            LOWORD(v95) = v30;
            FdoExt((__int64)DeviceObject);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                62,
                (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                v10);
            }
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              if ( DeviceObject )
              {
                v40 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
                if ( v40 )
                {
                  v86 = 842089808;
                  v41 = 32LL * ((unsigned int)_InterlockedDecrement(v40 + 220) & v40[221]) + *((_QWORD *)v40 + 111);
                  *(_DWORD *)v41 = v86;
                  *(_QWORD *)(v41 + 8) = 0LL;
                  *(_QWORD *)(v41 + 16) = 0LL;
                  *(_QWORD *)(v41 + 24) = v10;
                }
              }
            }
            if ( (UsbhLogMask & 8) != 0 )
            {
              if ( DeviceObject )
              {
                v42 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
                if ( v42 )
                {
                  v86 = 1413771367;
                  v43 = 32LL * ((unsigned int)_InterlockedDecrement(v42 + 220) & v42[221]) + *((_QWORD *)v42 + 111);
                  *(_DWORD *)v43 = v86;
                  *(_QWORD *)(v43 + 8) = 0LL;
                  *(_QWORD *)(v43 + 16) = v10;
                  *(_QWORD *)(v43 + 24) = 0LL;
                }
              }
            }
            v44 = FdoExt((__int64)DeviceObject);
            if ( (unsigned __int16)v10 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938)
              && (v45 = *((_QWORD *)v44 + 382)) != 0 )
            {
              v46 = v45 + 2928 * v10 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                if ( DeviceObject )
                {
                  v47 = DeviceObject->DeviceExtension;
                  if ( v47 )
                  {
                    v86 = 1044672615;
                    v48 = *((_QWORD *)v47 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v47 + 220) & *((_DWORD *)v47 + 221));
                    *(_DWORD *)v48 = v86;
                    *(_QWORD *)(v48 + 8) = 0LL;
                    *(_QWORD *)(v48 + 16) = v10;
                    *(_QWORD *)(v48 + 24) = v46;
                  }
                }
              }
              v49 = v93;
              if ( v46 )
                UsbhDispatch_PortChangeQueueNullEvent(DeviceObject, v46, 12LL, v93);
            }
            else
            {
              v49 = v93;
            }
            v50 = v95;
            FdoExt((__int64)DeviceObject);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                75,
                (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                v10);
            }
            if ( (UsbhLogMask & 8) != 0 )
            {
              if ( DeviceObject )
              {
                v51 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
                if ( v51 )
                {
                  v86 = 1413771367;
                  v52 = 32LL * ((unsigned int)_InterlockedDecrement(v51 + 220) & v51[221]) + *((_QWORD *)v51 + 111);
                  *(_DWORD *)v52 = v86;
                  *(_QWORD *)(v52 + 8) = 0LL;
                  *(_QWORD *)(v52 + 16) = v10;
                  *(_QWORD *)(v52 + 24) = 0LL;
                }
              }
            }
            v53 = FdoExt((__int64)DeviceObject);
            if ( (unsigned __int16)v10 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
            {
              v54 = *((_QWORD *)v53 + 382);
              if ( v54 )
              {
                v55 = v54 + 2928 * v10 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  if ( DeviceObject )
                  {
                    v27 = (__int64)DeviceObject->DeviceExtension;
                    if ( v27 )
                    {
                      v86 = 1044672615;
                      v56 = *(_QWORD *)(v27 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
                      *(_DWORD *)v56 = v86;
                      *(_QWORD *)(v56 + 8) = 0LL;
                      *(_QWORD *)(v56 + 16) = v10;
                      *(_QWORD *)(v56 + 24) = v55;
                    }
                  }
                }
                if ( v55 )
                  UsbhDispatch_PortChangeQueueEvent((_DWORD)DeviceObject, v55, 4, v49, v50, 0, 0LL);
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                76,
                (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                v10);
            }
            if ( (UsbhLogMask & 4) != 0 && DeviceObject )
            {
              v27 = (__int64)DeviceObject->DeviceExtension;
              v31 = v89;
              if ( v27 )
              {
                v86 = 1734894417;
                v27 = 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884))
                    + *(_QWORD *)(v27 + 888);
                *(_DWORD *)v27 = v86;
                *(_QWORD *)(v27 + 24) = &v95;
                *(_QWORD *)(v27 + 8) = 0LL;
                *(_QWORD *)(v27 + 16) = v10;
              }
            }
            else
            {
              v31 = v89;
            }
LABEL_125:
            UsbhDecHubBusy((__int64)DeviceObject, v27, v94);
            _InterlockedDecrement(&v8[114].Header.Lock);
            UsbhPostInterrupt(DeviceObject, v57, v58, v59);
            LODWORD(v60) = UsbhLogMask;
            v61 = v8[114].Header.LockNV;
            if ( (UsbhLogMask & 4) != 0 )
            {
              if ( DeviceObject )
              {
                v62 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
                if ( v62 )
                {
                  v89 = 826177385;
                  v63 = _InterlockedExchangeAdd(v62 + 220, 0xFFFFFFFF);
                  LODWORD(v60) = v89;
                  v64 = *((_QWORD *)v62 + 111) + 32LL * ((unsigned int)(v63 - 1) & v62[221]);
                  *(_DWORD *)v64 = v89;
                  *(_QWORD *)(v64 + 8) = 0LL;
                  *(_QWORD *)(v64 + 16) = 0LL;
                  *(_QWORD *)(v64 + 24) = v61;
                }
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v60) = WPP_RECORDER_SF_d(
                               WPP_GLOBAL_Control->DeviceExtension,
                               0,
                               1,
                               37,
                               (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
                               v31);
            }
            return (int)v60;
          }
          goto LABEL_181;
        }
        LOBYTE(v4) = v89;
      }
    }
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( DeviceObject )
      {
        v65 = DeviceObject->DeviceExtension;
        if ( v65 )
        {
          v89 = 1484224361;
          v66 = *((_QWORD *)v65 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v65 + 220) & *((_DWORD *)v65 + 221));
          *(_DWORD *)v66 = 1484224361;
          *(_QWORD *)(v66 + 8) = 0LL;
          *(_QWORD *)(v66 + 16) = 0LL;
          *(_QWORD *)(v66 + 24) = -1073741811LL;
        }
      }
    }
    UsbhException((__int64)DeviceObject, v10, 1, 0LL, 0, -1073741811, 0, usbfile_bus_c, 3118, 0);
    KeSetEvent(v8 + 112, 0, 0);
    goto LABEL_138;
  }
  v87 = 0;
  v74 = (int)UsbhQueryHubState(DeviceObject, &v87, &v86);
  Log((__int64)DeviceObject, 4, 1364551795, 0LL, v74);
  Log((__int64)DeviceObject, 4, 1364551779, HIWORD(v87), (unsigned __int16)v87);
  if ( (int)v74 < 0 )
    goto LABEL_202;
  v75 = 100;
  if ( (v87 & 1) == 0 )
    v75 = 500;
  v8[127].Header.LockNV = v75;
  if ( (v87 & 0x10000) != 0 )
    LODWORD(v8[126].Header.WaitListHead.Flink) = v75;
  v74 = (int)UsbhHubAckHubChange(DeviceObject, &v87, &v86);
  Log((__int64)DeviceObject, 4, 1095263080, 0LL, v74);
  if ( (int)v74 < 0 || (v87 & 2) != 0 || BYTE1(v8[125].Header.WaitListHead.Flink) == v76 && (v87 & 0x20000) != 0 )
  {
LABEL_202:
    KeSetEvent(v8 + 112, 0, 0);
    if ( (v87 & 2) != 0 || !BYTE1(v8[125].Header.WaitListHead.Flink) && (v87 & 0x20000) != 0 )
    {
      Log((__int64)DeviceObject, 4, 1749512054, 0LL, (int)v74);
      if ( BYTE2(v8[125].Header.WaitListHead.Flink) == (_BYTE)v83 )
      {
        BYTE2(v8[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx(
          (_DWORD)DeviceObject,
          1,
          (unsigned int)UsbhSetHubOvercurrentDetectedKey,
          v83,
          0,
          1666340431,
          0LL);
      }
      UsbhException((__int64)DeviceObject, 0, 75, &v87, 4u, v74, v86, usbfile_bus_c, 3318, 0);
    }
    else if ( !Usb_Disconnected(v74) )
    {
      Log((__int64)DeviceObject, 4, 1769433138, 0LL, (int)v74);
      UsbhException((__int64)DeviceObject, 0, 1, v82, 0, v74, v86, usbfile_bus_c, 3331, 0);
    }
    goto LABEL_138;
  }
  if ( (v87 & 0x20000) != 0 )
  {
    UsbhException((__int64)DeviceObject, 0, 72, &v87, 4u, v74, v86, usbfile_bus_c, 3270, 0);
  }
  else if ( (v87 & 0x10000) != 0 )
  {
    UsbhException((__int64)DeviceObject, 0, 73, &v87, 4u, v74, v86, usbfile_bus_c, 3273, 0);
  }
  else
  {
    UsbhException((__int64)DeviceObject, 0, 74, &v87, 4u, v74, v86, usbfile_bus_c, 3277, 0);
  }
  _InterlockedDecrement(&v8[114].Header.Lock);
  UsbhDecHubBusy((__int64)DeviceObject, v77, v9);
  UsbhPostInterrupt(DeviceObject, v78, v79, v80);
  Log((__int64)DeviceObject, 4, 1769422387, 0LL, v8[114].Header.LockNV);
  v60 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v81 )
  {
    LODWORD(v60) = WPP_RECORDER_SF_(
                     WPP_GLOBAL_Control->DeviceExtension,
                     0,
                     1,
                     38,
                     (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  }
  return (int)v60;
}
