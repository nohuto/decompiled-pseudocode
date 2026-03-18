/*
 * XREFs of UsbhHubProcessIsr @ 0x14000AC30
 * Callers:
 *     UsbhHubIsrWorker @ 0x140001440 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhQueuePauseChange @ 0x140003C48 (UsbhQueuePauseChange.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x1400068F0 (UsbhDispatch_PortChangeQueueEvent.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhPostInterrupt @ 0x14000C308 (UsbhPostInterrupt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x140032140 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_HW_Stop @ 0x1400441E4 (UsbhPCE_HW_Stop.c)
 *     UsbhHubAckHubChange @ 0x140047958 (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x140048174 (UsbhQueryHubState.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

int __fastcall UsbhHubProcessIsr(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v4; // r14
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  struct _KEVENT *v8; // r13
  _QWORD *v9; // r15
  unsigned __int16 v10; // r12
  void *v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r8
  void *v19; // rdx
  __int64 v20; // rcx
  void *v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // r14
  void *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int16 v29; // ax
  void *v30; // rdx
  __int64 v31; // rcx
  void *v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  int v35; // ecx
  unsigned __int16 v36; // r14
  void *v37; // rdx
  __int64 v38; // rcx
  void *v39; // rdx
  __int64 v40; // rcx
  void *v41; // rdx
  __int64 v42; // rcx
  void *v43; // rdx
  __int64 v44; // rcx
  void *v45; // rdx
  __int64 v46; // rcx
  _DWORD *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r10
  void *v50; // rdx
  __int64 v51; // rcx
  int v52; // r15d
  __int64 v53; // rbx
  void *v54; // rdx
  __int64 v55; // rcx
  _DWORD *v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r10
  void *v59; // rdx
  __int64 v60; // rcx
  void *v61; // rdx
  __int64 v62; // rcx
  struct _KEVENT *v63; // rbx
  __int64 Signalling; // r8
  void *v65; // rdx
  _QWORD *v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rcx
  _UNKNOWN **v71; // rax
  __int64 LockNV; // r8
  void *v73; // rdx
  __int64 v74; // rcx
  void *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  void *v78; // rdx
  __int64 v79; // rcx
  struct _KEVENT *v80; // rbx
  __int64 v81; // r8
  void *v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rcx
  _QWORD *v85; // rax
  _QWORD *v86; // rdx
  __int16 v87; // r15
  volatile int Lock; // eax
  __int64 v89; // rdx
  const void *v90; // r9
  __int64 v91; // rbx
  int v92; // eax
  char v93; // r9
  __int64 v94; // rdx
  _QWORD *v95; // r8
  __int16 v96; // r9
  const void *v97; // r9
  int v98; // r9d
  volatile int v99; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  __int64 v102; // [rsp+48h] [rbp-81h]
  unsigned __int16 v103; // [rsp+64h] [rbp-65h] BYREF
  unsigned int v104; // [rsp+68h] [rbp-61h] BYREF
  int v105; // [rsp+6Ch] [rbp-5Dh] BYREF
  PVOID P; // [rsp+70h] [rbp-59h]
  _WORD v107[2]; // [rsp+78h] [rbp-51h] BYREF
  int v108; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v109; // [rsp+80h] [rbp-49h] BYREF
  _WORD v110[4]; // [rsp+88h] [rbp-41h] BYREF
  __int64 v111; // [rsp+90h] [rbp-39h]
  unsigned int v112; // [rsp+98h] [rbp-31h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v114; // [rsp+A8h] [rbp-21h]
  int v115; // [rsp+B0h] [rbp-19h] BYREF
  __int16 v116; // [rsp+B4h] [rbp-15h]
  __int16 v117; // [rsp+B6h] [rbp-13h]
  __int16 v118; // [rsp+B8h] [rbp-11h]
  __int16 v119; // [rsp+BAh] [rbp-Fh]
  _WORD v120[2]; // [rsp+C0h] [rbp-9h] BYREF
  int v121; // [rsp+C4h] [rbp-5h]
  int v122; // [rsp+C8h] [rbp-1h]
  int v128; // [rsp+E0h] [rbp+17h]

  v4 = a2;
  v111 = a3;
  v104 = a2;
  v105 = 0;
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
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v7 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v7 = 1467052649;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a3;
        *(_QWORD *)(v7 + 24) = v4;
      }
    }
  }
  v8 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v9 = (_QWORD *)UsbhIncHubBusy((__int64)DeviceObject, a3, (__int64)DeviceObject, 826438515, 0);
  P = v9;
  _InterlockedIncrement(&v8[114].Header.Lock);
  v10 = (unsigned __int8)v4;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( DeviceObject )
    {
      v11 = DeviceObject->DeviceExtension;
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
        *(_DWORD *)v12 = 2003923561;
        *(_QWORD *)(v12 + 16) = (unsigned __int8)v4;
        *(_QWORD *)(v12 + 8) = 0LL;
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
        v13 = DeviceObject->DeviceExtension;
        if ( v13 )
        {
          v14 = *((_QWORD *)v13 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
          *(_DWORD *)v14 = 1413771367;
          *(_QWORD *)(v14 + 16) = (unsigned __int8)v4;
          *(_QWORD *)(v14 + 8) = 0LL;
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
        v17 = 2928LL * (unsigned __int8)v4 - 2928;
        v18 = v17 + v16;
        v114 = v17 + v16;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( DeviceObject )
          {
            v19 = DeviceObject->DeviceExtension;
            if ( v19 )
            {
              v20 = *((_QWORD *)v19 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
              *(_DWORD *)v20 = 1044672615;
              *(_QWORD *)(v20 + 8) = 0LL;
              *(_QWORD *)(v20 + 16) = (unsigned __int8)v4;
              *(_QWORD *)(v20 + 24) = v18;
            }
          }
        }
        if ( v18 )
        {
          v113 = 0LL;
          v108 = 0;
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
          v109 = 0;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( DeviceObject )
            {
              v21 = DeviceObject->DeviceExtension;
              if ( v21 )
              {
                v22 = *((_QWORD *)v21 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
                *(_DWORD *)v22 = 1413771367;
                *(_QWORD *)(v22 + 8) = 0LL;
                *(_QWORD *)(v22 + 16) = (unsigned __int8)v4;
                *(_QWORD *)(v22 + 24) = 0LL;
              }
            }
          }
          v23 = FdoExt((__int64)DeviceObject);
          if ( v10 > *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
          {
            LOWORD(v24) = 0;
            v25 = 0LL;
          }
          else
          {
            v24 = *((_QWORD *)v23 + 382);
            if ( v24 )
            {
              v25 = v17 + v24;
              if ( (UsbhLogMask & 8) != 0 && DeviceObject && (v26 = DeviceObject->DeviceExtension) != 0LL )
              {
                v27 = *((_QWORD *)v26 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
                *(_DWORD *)v27 = 1044672615;
                LOWORD(v24) = 0;
                *(_QWORD *)(v27 + 8) = 0LL;
                *(_QWORD *)(v27 + 16) = v10;
                *(_QWORD *)(v27 + 24) = v25;
              }
              else
              {
                LOWORD(v24) = 0;
              }
            }
            else
            {
              v25 = 0LL;
            }
          }
          v103 = v24;
          LODWORD(v28) = UsbhQueryPortState((__int64)DeviceObject, v10, (__int64)&v108, &v109);
          if ( (int)v28 >= 0 )
          {
            v87 = 1;
            while ( ((unsigned __int16)v87 & HIWORD(v108)) == 0 )
            {
              v87 *= 2;
              if ( (v87 & 0xFFE0) != 0 )
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
                Log((_DWORD)DeviceObject, 4, 1666076515, 0, 0LL);
                if ( (FdoExt((__int64)DeviceObject)[640] & 1) == 0
                  || (++*(_DWORD *)(v25 + 408), *(int *)(v25 + 408) >= 3) )
                {
                  v109 = -1073704960;
                  UsbhException((__int64)DeviceObject, v10, 10, &v108, 4u, v28, -1073704960, usbfile_bus_c, 1463, 0);
                  LODWORD(v28) = -1073741823;
                  goto LABEL_36;
                }
                break;
              }
            }
            if ( (v87 & 0x1F) == 0 )
              goto LABEL_36;
            v29 = v87 | v103;
            v103 |= v87;
          }
          else
          {
LABEL_36:
            v29 = v103;
          }
          if ( v29 )
          {
            *(_DWORD *)(v25 + 408) = 0;
            v29 = v103;
          }
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( DeviceObject )
            {
              v30 = DeviceObject->DeviceExtension;
              if ( v30 )
              {
                v31 = *((_QWORD *)v30 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v30 + 220) & *((_DWORD *)v30 + 221));
                *(_DWORD *)v31 = 1734894416;
                *(_QWORD *)(v31 + 24) = (int)v28;
                *(_QWORD *)(v31 + 8) = 0LL;
                *(_QWORD *)(v31 + 16) = v29;
                v29 = v103;
              }
            }
          }
          v105 = v109;
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( DeviceObject )
            {
              v32 = DeviceObject->DeviceExtension;
              if ( v32 )
              {
                v33 = *((_QWORD *)v32 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
                *(_DWORD *)v33 = 1751340369;
                *(_QWORD *)(v33 + 16) = v10;
                *(_QWORD *)(v33 + 24) = (int)v28;
                *(_QWORD *)(v33 + 8) = 0LL;
                v29 = v103;
              }
            }
          }
          if ( (v28 & 0xC0000000) == 0xC0000000 )
          {
LABEL_201:
            KeSetEvent(v8 + 112, 0, 0);
            if ( (unsigned __int8)Usb_Disconnected((unsigned int)v28) )
            {
              Log((_DWORD)DeviceObject, 4, 1769436977, 0, v89);
              UsbhQueuePauseChange((__int64)DeviceObject, v10, v111);
              UsbhPCE_HW_Stop(DeviceObject, v10, v111);
              v9 = P;
              LOBYTE(v4) = v104;
            }
            else
            {
              Log((_DWORD)DeviceObject, 4, 1769436978, 0, v89);
              UsbhException((__int64)DeviceObject, v10, 1, v90, 0, v28, v105, usbfile_bus_c, 3213, 1);
              v9 = P;
              LOBYTE(v4) = v104;
            }
            goto LABEL_146;
          }
          v112 = v104;
          v121 = 0;
          if ( dword_14006F690 )
          {
            v34 = FdoExt((__int64)DeviceObject);
            v115 = v34[1298];
            v116 = *((_WORD *)v34 + 2598);
            v117 = v34[1300];
            v118 = *((_WORD *)v34 + 2614);
            v119 = *((_WORD *)v34 + 2615);
            v120[0] = *((_WORD *)v34 + 1274);
            v120[1] = *((_WORD *)v34 + 1275);
            v121 = 0;
            v122 = *((unsigned __int16 *)v34 + 2604);
            v35 = *((_WORD *)v34 + 2604) != 0;
            v121 = v35;
            if ( *((unsigned __int16 *)v34 + 2605) )
              v121 = ++v35;
            if ( *((unsigned __int16 *)v34 + 2606) )
              v121 = ++v35;
            if ( *((unsigned __int16 *)v34 + 2607) )
              v121 = ++v35;
            if ( *((unsigned __int16 *)v34 + 2608) )
              v121 = ++v35;
            if ( *((unsigned __int16 *)v34 + 2609) )
              v121 = v35 + 1;
            LODWORD(v102) = 2;
            v128 = v34[634];
            UsbhEtwWrite(
              &USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE,
              0LL,
              &v115,
              12LL,
              v120,
              36LL,
              &v112,
              4LL,
              &v103,
              v102,
              0LL);
            v29 = v103;
          }
          if ( !v29 )
            goto LABEL_124;
          v107[0] = 0;
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
            v29 = v103;
          }
          if ( (v29 & 1) != 0 )
          {
            v36 = 16;
          }
          else if ( (v29 & 2) != 0 )
          {
            v36 = 17;
          }
          else if ( (v29 & 4) != 0 )
          {
            v36 = 18;
          }
          else if ( (v29 & 8) != 0 )
          {
            v36 = 19;
          }
          else
          {
            if ( (v29 & 0x10) == 0 )
            {
              LODWORD(v28) = 0;
              goto LABEL_72;
            }
            v36 = 20;
          }
          v110[0] = 291;
          v110[3] = 0;
          v110[1] = v36;
          v110[2] = v10;
          v28 = (int)UsbhSyncSendCommand(
                       (__int64)DeviceObject,
                       (unsigned __int8 *)v110,
                       0LL,
                       v107,
                       (__int64)Timeout,
                       &v105);
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( DeviceObject )
            {
              v37 = DeviceObject->DeviceExtension;
              if ( v37 )
              {
                v38 = *((_QWORD *)v37 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
                *(_DWORD *)v38 = 1734560577;
                *(_QWORD *)(v38 + 8) = 0LL;
                *(_QWORD *)(v38 + 16) = v36;
                *(_QWORD *)(v38 + 24) = v28;
              }
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v37,
              1,
              28,
              (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
              v10,
              v28);
          }
          v29 = v103;
LABEL_72:
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( DeviceObject )
            {
              v39 = DeviceObject->DeviceExtension;
              if ( v39 )
              {
                v40 = *((_QWORD *)v39 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
                *(_DWORD *)v40 = 1734894401;
                *(_QWORD *)(v40 + 16) = v10;
                *(_QWORD *)(v40 + 24) = (int)v28;
                *(_QWORD *)(v40 + 8) = 0LL;
                v29 = v103;
              }
            }
          }
          if ( (v28 & 0xC0000000) != 0xC0000000 )
          {
            if ( (v29 & 1) != 0 )
            {
              if ( (UsbhLogMask & 4) != 0 )
              {
                if ( DeviceObject )
                {
                  v41 = DeviceObject->DeviceExtension;
                  if ( v41 )
                  {
                    v42 = *((_QWORD *)v41 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v41 + 220) & *((_DWORD *)v41 + 221));
                    *(_DWORD *)v42 = 725831234;
                    *(_QWORD *)(v42 + 16) = v10;
                    *(_QWORD *)(v42 + 8) = 0LL;
                    *(_QWORD *)(v42 + 24) = 0LL;
                  }
                }
              }
              _InterlockedIncrement((volatile signed __int32 *)(v114 + 404));
              v29 = v103;
            }
            LOWORD(v113) = v29;
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
                v43 = DeviceObject->DeviceExtension;
                if ( v43 )
                {
                  v44 = *((_QWORD *)v43 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v43 + 220) & *((_DWORD *)v43 + 221));
                  *(_DWORD *)v44 = 842089808;
                  *(_QWORD *)(v44 + 24) = v10;
                  *(_QWORD *)(v44 + 8) = 0LL;
                  *(_QWORD *)(v44 + 16) = 0LL;
                }
              }
            }
            if ( (UsbhLogMask & 8) != 0 )
            {
              if ( DeviceObject )
              {
                v45 = DeviceObject->DeviceExtension;
                if ( v45 )
                {
                  v46 = *((_QWORD *)v45 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v45 + 220) & *((_DWORD *)v45 + 221));
                  *(_DWORD *)v46 = 1413771367;
                  *(_QWORD *)(v46 + 16) = v10;
                  *(_QWORD *)(v46 + 8) = 0LL;
                  *(_QWORD *)(v46 + 24) = 0LL;
                }
              }
            }
            v47 = FdoExt((__int64)DeviceObject);
            if ( v10 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938)
              && (v48 = *((_QWORD *)v47 + 382)) != 0 )
            {
              v49 = v48 + 2928LL * v10 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                if ( DeviceObject )
                {
                  v50 = DeviceObject->DeviceExtension;
                  if ( v50 )
                  {
                    v51 = *((_QWORD *)v50 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v50 + 220) & *((_DWORD *)v50 + 221));
                    *(_DWORD *)v51 = 1044672615;
                    *(_QWORD *)(v51 + 16) = v10;
                    *(_QWORD *)(v51 + 8) = 0LL;
                    *(_QWORD *)(v51 + 24) = v49;
                  }
                }
              }
              v52 = v111;
              if ( v49 )
                UsbhDispatch_PortChangeQueueNullEvent((int)DeviceObject, v49, 12, v111);
            }
            else
            {
              v52 = v111;
            }
            v53 = v113;
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
                v54 = DeviceObject->DeviceExtension;
                if ( v54 )
                {
                  v55 = *((_QWORD *)v54 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v54 + 220) & *((_DWORD *)v54 + 221));
                  *(_DWORD *)v55 = 1413771367;
                  *(_QWORD *)(v55 + 16) = v10;
                  *(_QWORD *)(v55 + 8) = 0LL;
                  *(_QWORD *)(v55 + 24) = 0LL;
                }
              }
            }
            v56 = FdoExt((__int64)DeviceObject);
            if ( v10 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
            {
              v57 = *((_QWORD *)v56 + 382);
              if ( v57 )
              {
                v58 = v57 + 2928LL * v10 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  if ( DeviceObject )
                  {
                    v59 = DeviceObject->DeviceExtension;
                    if ( v59 )
                    {
                      v60 = *((_QWORD *)v59 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v59 + 220) & *((_DWORD *)v59 + 221));
                      *(_DWORD *)v60 = 1044672615;
                      *(_QWORD *)(v60 + 16) = v10;
                      *(_QWORD *)(v60 + 8) = 0LL;
                      *(_QWORD *)(v60 + 24) = v58;
                    }
                  }
                }
                if ( v58 )
                  UsbhDispatch_PortChangeQueueEvent((int)DeviceObject, v58, 4, v52, v53, 0, 0LL);
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
            if ( (UsbhLogMask & 4) != 0 )
            {
              if ( DeviceObject )
              {
                v61 = DeviceObject->DeviceExtension;
                if ( v61 )
                {
                  v62 = *((_QWORD *)v61 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v61 + 220) & *((_DWORD *)v61 + 221));
                  *(_DWORD *)v62 = 1734894417;
                  *(_QWORD *)(v62 + 8) = 0LL;
                  *(_QWORD *)(v62 + 16) = v10;
                  *(_QWORD *)(v62 + 24) = &v113;
                }
              }
            }
LABEL_124:
            v63 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
            v63[142].Header.Type = 1;
            KeWaitForSingleObject(&v63[139], Executive, 0, 0, 0LL);
            Signalling = v63[142].Header.Signalling;
            if ( (UsbhLogMask & 0x10000) != 0 && DeviceObject )
            {
              v65 = DeviceObject->DeviceExtension;
              v66 = P;
              if ( v65 )
              {
                v67 = *((_QWORD *)v65 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v65 + 220) & *((_DWORD *)v65 + 221));
                *(_DWORD *)v67 = 1667581000;
                *(_QWORD *)(v67 + 8) = 0LL;
                *(_QWORD *)(v67 + 16) = v66;
                *(_QWORD *)(v67 + 24) = Signalling;
              }
            }
            else
            {
              v66 = P;
            }
            if ( !v63[142].Header.Signalling )
              goto LABEL_134;
            if ( v66 == (_QWORD *)1936941672 )
            {
              Lock = v63[130].Header.Lock;
              if ( Lock )
                v63[130].Header.LockNV = Lock - 1;
              goto LABEL_134;
            }
            if ( !v66 )
            {
LABEL_134:
              KeSetEvent(v63 + 139, 0, 0);
              _InterlockedDecrement(&v8[114].Header.Lock);
              UsbhPostInterrupt(DeviceObject);
              LODWORD(v71) = UsbhLogMask;
              LockNV = v8[114].Header.LockNV;
              if ( (UsbhLogMask & 4) != 0 )
              {
                if ( DeviceObject )
                {
                  v73 = DeviceObject->DeviceExtension;
                  if ( v73 )
                  {
                    LODWORD(v71) = 826177385;
                    v74 = *((_QWORD *)v73 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v73 + 220) & *((_DWORD *)v73 + 221));
                    *(_DWORD *)v74 = 826177385;
                    *(_QWORD *)(v74 + 8) = 0LL;
                    *(_QWORD *)(v74 + 16) = 0LL;
                    *(_QWORD *)(v74 + 24) = LockNV;
                  }
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v71) = WPP_RECORDER_SF_d(
                                 WPP_GLOBAL_Control->DeviceExtension,
                                 0,
                                 1,
                                 37,
                                 (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
                                 v104);
              }
              return (int)v71;
            }
            v68 = v66[1];
            v69 = v66 + 1;
            if ( *(_QWORD **)(v68 + 8) == v66 + 1 )
            {
              v70 = (_QWORD *)v66[2];
              if ( (_QWORD *)*v70 == v69 )
              {
                *v70 = v68;
                *(_QWORD *)(v68 + 8) = v70;
                v66[2] = v66 + 1;
                *v69 = v69;
                ExFreePoolWithTag(v66, 0);
                goto LABEL_134;
              }
            }
LABEL_234:
            __fastfail(3u);
          }
          goto LABEL_201;
        }
      }
    }
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( DeviceObject )
      {
        v75 = DeviceObject->DeviceExtension;
        if ( v75 )
        {
          v76 = *((_QWORD *)v75 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v75 + 220) & *((_DWORD *)v75 + 221));
          *(_DWORD *)v76 = 1484224361;
          *(_QWORD *)(v76 + 8) = 0LL;
          *(_QWORD *)(v76 + 16) = 0LL;
          *(_QWORD *)(v76 + 24) = -1073741811LL;
        }
      }
    }
    UsbhException((__int64)DeviceObject, (unsigned __int8)v4, 1, 0LL, 0, -1073741811, 0, usbfile_bus_c, 3118, 0);
    KeSetEvent(v8 + 112, 0, 0);
    v9 = P;
LABEL_146:
    v77 = v8[114].Header.LockNV;
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( DeviceObject )
      {
        v78 = DeviceObject->DeviceExtension;
        if ( v78 )
        {
          v79 = *((_QWORD *)v78 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v78 + 220) & *((_DWORD *)v78 + 221));
          *(_DWORD *)v79 = 842954601;
          *(_QWORD *)(v79 + 8) = 0LL;
          *(_QWORD *)(v79 + 16) = 0LL;
          *(_QWORD *)(v79 + 24) = v77;
        }
      }
    }
    _InterlockedDecrement(&v8[114].Header.Lock);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        39,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v4);
    v80 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
    v80[142].Header.Type = 1;
    KeWaitForSingleObject(&v80[139], Executive, 0, 0, 0LL);
    v81 = v80[142].Header.Signalling;
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( DeviceObject )
      {
        v82 = DeviceObject->DeviceExtension;
        if ( v82 )
        {
          v83 = *((_QWORD *)v82 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v82 + 220) & *((_DWORD *)v82 + 221));
          *(_DWORD *)v83 = 1667581000;
          *(_QWORD *)(v83 + 8) = 0LL;
          *(_QWORD *)(v83 + 16) = v9;
          *(_QWORD *)(v83 + 24) = v81;
        }
      }
    }
    if ( v80[142].Header.Signalling )
    {
      if ( v9 == (_QWORD *)1936941672 )
      {
        v99 = v80[130].Header.Lock;
        if ( v99 )
          v80[130].Header.LockNV = v99 - 1;
      }
      else if ( v9 )
      {
        v84 = v9[1];
        v85 = v9 + 1;
        if ( *(_QWORD **)(v84 + 8) != v9 + 1 )
          goto LABEL_234;
        v86 = (_QWORD *)v9[2];
        if ( (_QWORD *)*v86 != v85 )
          goto LABEL_234;
        *v86 = v84;
        *(_QWORD *)(v84 + 8) = v86;
        v9[2] = v9 + 1;
        *v85 = v85;
        ExFreePoolWithTag(v9, 0);
      }
    }
    LODWORD(v71) = KeSetEvent(v80 + 139, 0, 0);
    return (int)v71;
  }
  v104 = 0;
  v91 = (int)UsbhQueryHubState(DeviceObject, &v104, &v105);
  Log((_DWORD)DeviceObject, 4, 1364551795, 0, v91);
  Log((_DWORD)DeviceObject, 4, 1364551779, HIWORD(v104), (unsigned __int16)v104);
  if ( (int)v91 < 0 )
    goto LABEL_222;
  v92 = 100;
  if ( (v104 & 1) == 0 )
    v92 = 500;
  v8[127].Header.LockNV = v92;
  if ( (v104 & 0x10000) != 0 )
    LODWORD(v8[126].Header.WaitListHead.Flink) = v92;
  LODWORD(v91) = UsbhHubAckHubChange(DeviceObject, &v104, &v105);
  Log((_DWORD)DeviceObject, 4, 1095263080, 0, (int)v91);
  if ( (int)v91 < 0 || (v104 & 2) != 0 || BYTE1(v8[125].Header.WaitListHead.Flink) == v93 && (v104 & 0x20000) != 0 )
  {
LABEL_222:
    KeSetEvent(v8 + 112, 0, 0);
    if ( (v104 & 2) != 0 || !BYTE1(v8[125].Header.WaitListHead.Flink) && (v104 & 0x20000) != 0 )
    {
      Log((_DWORD)DeviceObject, 4, 1749512054, 0, (int)v91);
      if ( BYTE2(v8[125].Header.WaitListHead.Flink) == (_BYTE)v98 )
      {
        BYTE2(v8[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx(
          (_DWORD)DeviceObject,
          v98 + 1,
          (unsigned int)UsbhSetHubOvercurrentDetectedKey,
          v98,
          0,
          1666340431,
          0LL);
      }
      UsbhException((__int64)DeviceObject, 0, 75, &v104, 4u, v91, v105, usbfile_bus_c, 3318, 0);
      v9 = P;
    }
    else if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v91) )
    {
      Log((_DWORD)DeviceObject, 4, 1769433138, 0, (int)v91);
      UsbhException((__int64)DeviceObject, 0, 1, v97, 0, v91, v105, usbfile_bus_c, 3331, 0);
      v9 = P;
    }
    goto LABEL_146;
  }
  if ( (v104 & 0x20000) != 0 )
  {
    UsbhException((__int64)DeviceObject, 0, 72, &v104, 4u, v91, v105, usbfile_bus_c, 3270, 0);
  }
  else if ( (v104 & 0x10000) != 0 )
  {
    UsbhException((__int64)DeviceObject, 0, 73, &v104, 4u, v91, v105, usbfile_bus_c, 3273, 0);
  }
  else
  {
    UsbhException((__int64)DeviceObject, 0, 74, &v104, 4u, v91, v105, usbfile_bus_c, 3277, 0);
  }
  v95 = P;
  _InterlockedDecrement(&v8[114].Header.Lock);
  UsbhDecHubBusy((__int64)DeviceObject, v94, v95);
  UsbhPostInterrupt(DeviceObject);
  Log((_DWORD)DeviceObject, 4, 1769422387, 0, v8[114].Header.LockNV);
  v71 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v96 )
  {
    LODWORD(v71) = WPP_RECORDER_SF_(
                     WPP_GLOBAL_Control->DeviceExtension,
                     0,
                     1,
                     38,
                     (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  }
  return (int)v71;
}
