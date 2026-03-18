/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x14001DE80
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x14001FE00 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x14001E924 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     UsbhPCE_psSUSPEND @ 0x14003517C (UsbhPCE_psSUSPEND.c)
 *     UsbhHubProcessTimeoutObj @ 0x1400392FC (UsbhHubProcessTimeoutObj.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_wChangeERROR @ 0x1400442FC (UsbhPCE_wChangeERROR.c)
 */

__int64 __fastcall UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _BYTE *v29; // r15
  unsigned int v30; // r13d
  int v31; // eax
  int v32; // eax
  int v33; // r12d
  int v34; // edx
  int v35; // r8d
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 result; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  struct _KEVENT *v50; // r13
  int *p_LockNV; // r15
  struct _KEVENT *v52; // rdx
  _LIST_ENTRY **p_Blink; // r9
  __int64 v54; // r8
  __int64 v55; // rcx
  int Blink; // eax
  struct _KEVENT *v57; // rcx
  struct _KEVENT **v58; // rax
  __int64 v59; // [rsp+50h] [rbp-49h] BYREF
  int v60; // [rsp+58h] [rbp-41h]
  int v61; // [rsp+5Ch] [rbp-3Dh]
  int v62; // [rsp+60h] [rbp-39h]
  int v63; // [rsp+64h] [rbp-35h]
  int v64; // [rsp+68h] [rbp-31h]
  int v65; // [rsp+6Ch] [rbp-2Dh]
  int v66; // [rsp+70h] [rbp-29h]
  int v67; // [rsp+74h] [rbp-25h] BYREF
  __int64 v68; // [rsp+78h] [rbp-21h] BYREF
  _DWORD *v69; // [rsp+80h] [rbp-19h]
  _OWORD v70[3]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v71; // [rsp+B8h] [rbp+1Fh]
  KIRQL v73; // [rsp+118h] [rbp+7Fh]

  v3 = a3;
  LODWORD(v59) = 0;
  v67 = 0;
  v69 = FdoExt(a1);
  if ( !v3 || *(_DWORD *)a2 != 1146120296 )
    UsbhTrapFatal_Dbg(a1, a1);
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 1466458992;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = v6;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      98,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      v3);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    v68 = 0LL;
    FdoExt(a1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        v11,
        74,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v9,
        v3);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          HIDWORD(v59) = 909198672;
          v13 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884))
              + *(_QWORD *)(v12 + 888);
          *(_DWORD *)v13 = HIDWORD(v59);
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 16) = 0LL;
          *(_QWORD *)(v13 + 24) = v9;
        }
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v60 = 1413771367;
          v15 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884))
              + *(_QWORD *)(v14 + 888);
          *(_DWORD *)v15 = v60;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v9;
          *(_QWORD *)(v15 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)v9 )
      goto LABEL_109;
    v16 = FdoExt(a1);
    if ( (unsigned __int16)v9 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      goto LABEL_109;
    v17 = *((_QWORD *)v16 + 382);
    if ( !v17 )
      goto LABEL_109;
    v18 = v17 + 2928 * v9 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v61 = 1044672615;
          v20 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v20 = v61;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 16) = v9;
          *(_QWORD *)(v20 + 24) = v18;
        }
      }
    }
    if ( v18 )
    {
      v21 = UsbhDispatch_PortChangeQueueEventEx(a1, v18, 16, v3, 0LL, 0, 0LL, (__int64)&v68);
      v68 = v21;
    }
    else
    {
LABEL_109:
      v21 = v68;
    }
    if ( !v21 )
      break;
    *(_QWORD *)(a2 + 376) = v3;
    v22 = v68;
    *(_QWORD *)(v3 + 24) = KeGetCurrentThread();
    v23 = v22 - 16;
    v24 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v62 = 1313891184;
          v26 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884))
              + *(_QWORD *)(v25 + 888);
          *(_DWORD *)v26 = v62;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = v24;
          *(_QWORD *)(v26 + 24) = 0LL;
        }
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v27 = *(_QWORD *)(a1 + 64);
          if ( v27 )
          {
            v63 = 1145332592;
            v28 = *(_QWORD *)(v27 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
            *(_DWORD *)v28 = v63;
            *(_QWORD *)(v28 + 8) = 0LL;
            *(_QWORD *)(v28 + 16) = a2;
            *(_QWORD *)(v28 + 24) = v23;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v23 + 8) & 0x16) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
    v29 = (_BYTE *)(a2 + 2840);
    if ( (*(_DWORD *)(v23 + 8) & 1) != 0 )
    {
      *v29 = 1;
      *(_BYTE *)(a2 + 2839) = 0;
    }
    v30 = UsbhQueryPortState(a1, *(_WORD *)(a2 + 4), (__int64)&v59, &v67);
    if ( v30 >> 30 == 3 )
      LODWORD(v59) = 0;
    v31 = *(_DWORD *)(v23 + 48);
    if ( v30 >> 30 != 3 )
    {
      if ( v31 == 2 )
        v32 = UsbhHubProcessTimeoutObj(a1, a2, v23, &v59);
      else
        v32 = UsbhHubDispatchPortEvent(a1, a2, v23, &v59);
      v33 = v32;
      goto LABEL_51;
    }
    v71 = 0LL;
    memset(v70, 0, sizeof(v70));
    if ( v31 == 2 )
    {
      UsbhHubProcessTimeoutObj(a1, a2, v23, &v59);
LABEL_113:
      UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v23 + 8), a3, 0, 0LL);
      goto LABEL_114;
    }
    if ( v31 != 1 )
      goto LABEL_113;
    UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v23 + 8), a3, 1, *(_QWORD *)(v23 + 40));
LABEL_114:
    WORD2(v70[0]) = *(_WORD *)(a2 + 4);
    LODWORD(v70[0]) = 1145332592;
    DWORD2(v70[0]) = 0x80000;
    v33 = UsbhHubDispatchPortEvent(a1, a2, v70, &v59);
    if ( !Usb_Disconnected(v30) && !*((_BYTE *)v69 + 5268) )
      UsbhException(a1, *(_WORD *)(a2 + 4), 1, (const void *)v23, 0x38u, v30, v67, usbfile_pchange_c, 6038, 1, v59);
    v29 = (_BYTE *)(a2 + 2840);
LABEL_51:
    *v29 = 0;
    if ( *(_DWORD *)(v23 + 48) == 1 )
    {
      v45 = *(_QWORD *)(v23 + 40);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v46 = *(_QWORD *)(a1 + 64);
          if ( v46 )
          {
            v64 = 1329877109;
            v47 = *(_QWORD *)(v46 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
            *(_DWORD *)v47 = v64;
            *(_QWORD *)(v47 + 8) = 0LL;
            *(_QWORD *)(v47 + 16) = v45;
            *(_QWORD *)(v47 + 24) = 1230065731LL;
          }
        }
      }
      v73 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_140070600 = (__int64)&dword_140070608;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v48 = *(_QWORD *)(a1 + 64);
          if ( v48 )
          {
            v65 = 1348891236;
            v49 = *(_QWORD *)(v48 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
            *(_DWORD *)v49 = v65;
            *(_QWORD *)(v49 + 8) = 0LL;
            *(_QWORD *)(v49 + 16) = v45;
            *(_QWORD *)(v49 + 24) = 1230065731LL;
          }
        }
      }
      v50 = (struct _KEVENT *)PdoExt(v45);
      p_LockNV = &v50[53].Header.LockNV;
      v52 = *(struct _KEVENT **)&v50[53].Header.Lock;
      if ( v52 == &v50[53] )
      {
LABEL_96:
        Blink = (int)v50[53].Header.WaitListHead.Blink;
        if ( Blink )
          LODWORD(v50[53].Header.WaitListHead.Blink) = Blink - 1;
      }
      else
      {
        while ( 1 )
        {
          p_Blink = &v52[-1].Header.WaitListHead.Blink;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( a1 )
            {
              v54 = *(_QWORD *)(a1 + 64);
              if ( v54 )
              {
                v66 = 1064591724;
                v55 = *(_QWORD *)(v54 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v54 + 880)) & *(_DWORD *)(v54 + 884));
                *(_DWORD *)v55 = v66;
                *(_QWORD *)(v55 + 8) = 0LL;
                *(_QWORD *)(v55 + 16) = v50;
                *(_QWORD *)(v55 + 24) = 1230065731LL;
              }
            }
          }
          if ( *((_DWORD *)p_Blink + 6) == 1230065731 && p_Blink[5] == (_LIST_ENTRY *)v23 )
            break;
          v52 = *(struct _KEVENT **)&v52->Header.Lock;
          if ( v52 == (struct _KEVENT *)p_LockNV )
            goto LABEL_96;
        }
        v57 = *(struct _KEVENT **)&v52->Header.Lock;
        if ( *(struct _KEVENT **)(*(_QWORD *)&v52->Header.Lock + 8LL) != v52
          || (v58 = (struct _KEVENT **)p_Blink[2], *v58 != v52) )
        {
          __fastfail(3u);
        }
        *v58 = v57;
        v57->Header.WaitListHead.Flink = (_LIST_ENTRY *)v58;
        ExFreePoolWithTag(p_Blink, 0);
      }
      if ( *(int **)&v50[53].Header.Lock == p_LockNV && !LODWORD(v50[53].Header.WaitListHead.Blink) )
        KeSetEvent(v50 + 54, 0, 0);
      qword_140070600 = 0LL;
      KeReleaseSpinLock(&HubG, v73);
    }
    ExFreePoolWithTag((PVOID)v23, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v33 == 5 )
    {
      v3 = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      break;
    }
    if ( *(int *)(a2 + 2876) > 50 )
    {
      UsbhException(a1, 0, 139, 0LL, 0, -1073741823, -1073704960, usbfile_pchange_c, 6117, 1);
LABEL_57:
      *(_DWORD *)(a2 + 400) = 4;
LABEL_58:
      FdoExt(a1);
      v3 = a3;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v34,
          v35,
          71,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          a3);
      v36 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v37 = *(_QWORD *)(a1 + 64);
          if ( v37 )
          {
            v38 = *(_QWORD *)(v37 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
            *(_DWORD *)v38 = 959530320;
            *(_QWORD *)(v38 + 8) = 0LL;
            *(_QWORD *)(v38 + 16) = 0LL;
            *(_QWORD *)(v38 + 24) = v36;
          }
        }
      }
      UsbhDispatch_PortChangeQueueNullEvent(a1, a2, 19LL, a3);
      break;
    }
    if ( v33 == 3 )
      goto LABEL_57;
    if ( v33 == 4 )
      goto LABEL_58;
    v3 = a3;
  }
  *(_DWORD *)(a2 + 8) = 0;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  v39 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v40 = *(_QWORD *)(a1 + 64);
      if ( v40 )
      {
        v41 = *(_QWORD *)(v40 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
        *(_DWORD *)v41 = 909133136;
        *(_QWORD *)(v41 + 8) = 0LL;
        *(_QWORD *)(v41 + 16) = 0LL;
        *(_QWORD *)(v41 + 24) = v39;
      }
    }
  }
  result = UsbhDispatch_PortChangeQueueNullEvent(a1, a2, 6LL, v3);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v43 = *(_QWORD *)(a1 + 64);
      if ( v43 )
      {
        result = 762017649LL;
        v44 = *(_QWORD *)(v43 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
        *(_DWORD *)v44 = 762017649;
        *(_QWORD *)(v44 + 8) = 0LL;
        *(_QWORD *)(v44 + 16) = a2;
        *(_QWORD *)(v44 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               99,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               *(_WORD *)(a2 + 4));
  }
  return result;
}
