/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x140005E40
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x140023E60 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhPCE_psSUSPEND @ 0x140036F5C (UsbhPCE_psSUSPEND.c)
 *     UsbhHubProcessTimeoutObj @ 0x140039CB0 (UsbhHubProcessTimeoutObj.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_wChangeERROR @ 0x1400447D8 (UsbhPCE_wChangeERROR.c)
 */

__int64 __fastcall UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _BYTE *v30; // r15
  unsigned int v31; // r13d
  int v32; // edx
  int v33; // eax
  int v34; // r12d
  int v35; // edx
  int v36; // r8d
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 result; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  KIRQL v49; // r13
  __int64 v50; // r8
  __int64 v51; // rdx
  struct _KEVENT *v52; // r15
  struct _KEVENT *v53; // rdx
  _LIST_ENTRY **p_Blink; // r10
  __int64 v55; // r8
  __int64 v56; // rcx
  int Blink; // eax
  struct _KEVENT *v58; // rcx
  _LIST_ENTRY *Flink; // rax
  int v60; // [rsp+70h] [rbp-29h] BYREF
  __int64 v61; // [rsp+78h] [rbp-21h] BYREF
  __int64 v62; // [rsp+80h] [rbp-19h]
  _OWORD v63[3]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v64; // [rsp+B8h] [rbp+1Fh]
  int v66; // [rsp+118h] [rbp+7Fh] BYREF
  int v67; // [rsp+11Ch] [rbp+83h]

  v67 = HIDWORD(a4);
  v4 = a3;
  v66 = 0;
  v60 = 0;
  v62 = FdoExt(a1);
  if ( !v4 || *(_DWORD *)a2 != 1146120296 )
    UsbhTrapFatal_Dbg(a1, a1);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1466458992;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v7;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v7,
      98,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    v61 = 0LL;
    FdoExt(a1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        v12,
        74,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v10,
        v4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v14 = 909198672;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 16) = 0LL;
          *(_QWORD *)(v14 + 24) = v10;
        }
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
          *(_DWORD *)v16 = 1413771367;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 16) = v10;
          *(_QWORD *)(v16 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)v10 )
      goto LABEL_109;
    v17 = FdoExt(a1);
    if ( (unsigned __int16)v10 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
      goto LABEL_109;
    v18 = *(_QWORD *)(v17 + 3056);
    if ( !v18 )
      goto LABEL_109;
    v19 = v18 + 2928 * v10 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v21 = 1044672615;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 16) = v10;
          *(_QWORD *)(v21 + 24) = v19;
        }
      }
    }
    if ( v19 )
    {
      v22 = UsbhDispatch_PortChangeQueueEventEx(a1, v19, 16, v4, 0LL, 0, 0LL, (__int64)&v61);
      v61 = v22;
    }
    else
    {
LABEL_109:
      v22 = v61;
    }
    if ( !v22 )
      break;
    *(_QWORD *)(a2 + 376) = v4;
    v23 = v61;
    *(_QWORD *)(v4 + 24) = KeGetCurrentThread();
    v24 = v23 - 16;
    v25 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 1313891184;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = v25;
          *(_QWORD *)(v27 + 24) = 0LL;
        }
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v28 = *(_QWORD *)(a1 + 64);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
            *(_DWORD *)v29 = 1145332592;
            *(_QWORD *)(v29 + 8) = 0LL;
            *(_QWORD *)(v29 + 16) = a2;
            *(_QWORD *)(v29 + 24) = v24;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v24 + 8) & 0x16) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
    v30 = (_BYTE *)(a2 + 2840);
    if ( (*(_DWORD *)(v24 + 8) & 1) != 0 )
    {
      *v30 = 1;
      *(_BYTE *)(a2 + 2839) = 0;
    }
    v31 = UsbhQueryPortState(a1, *(unsigned __int16 *)(a2 + 4), &v66, &v60);
    if ( v31 >> 30 == 3 )
      v66 = 0;
    v32 = *(_DWORD *)(v24 + 48);
    if ( v31 >> 30 != 3 )
    {
      if ( v32 == 2 )
        v33 = UsbhHubProcessTimeoutObj(a1, a2, v24, &v66);
      else
        v33 = UsbhHubDispatchPortEvent(a1, a2, v24, (unsigned __int16 *)&v66);
      v34 = v33;
      goto LABEL_51;
    }
    v64 = 0LL;
    memset(v63, 0, sizeof(v63));
    if ( v32 == 2 )
    {
      UsbhHubProcessTimeoutObj(a1, a2, v24, &v66);
LABEL_112:
      UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v24 + 8), a3, 0, 0LL);
      goto LABEL_113;
    }
    if ( v32 != 1 )
      goto LABEL_112;
    UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v24 + 8), a3, 1, *(_QWORD *)(v24 + 40));
LABEL_113:
    WORD2(v63[0]) = *(_WORD *)(a2 + 4);
    LODWORD(v63[0]) = 1145332592;
    DWORD2(v63[0]) = 0x80000;
    v34 = UsbhHubDispatchPortEvent(a1, a2, (__int64)v63, (unsigned __int16 *)&v66);
    if ( !(unsigned __int8)Usb_Disconnected(v31) && !*(_BYTE *)(v62 + 5268) )
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v24, 56, v31, v60, (__int64)usbfile_pchange_c, 6038, 1);
    v30 = (_BYTE *)(a2 + 2840);
LABEL_51:
    *v30 = 0;
    if ( *(_DWORD *)(v24 + 48) == 1 )
    {
      v46 = *(_QWORD *)(v24 + 40);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v47 = *(_QWORD *)(a1 + 64);
          if ( v47 )
          {
            v48 = *(_QWORD *)(v47 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
            *(_DWORD *)v48 = 1329877109;
            *(_QWORD *)(v48 + 8) = 0LL;
            *(_QWORD *)(v48 + 16) = v46;
            *(_QWORD *)(v48 + 24) = 1230065731LL;
          }
        }
      }
      v49 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_14006F5A0 = (__int64)&dword_14006F5A8;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v50 = *(_QWORD *)(a1 + 64);
          if ( v50 )
          {
            v51 = *(_QWORD *)(v50 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
            *(_DWORD *)v51 = 1348891236;
            *(_QWORD *)(v51 + 8) = 0LL;
            *(_QWORD *)(v51 + 16) = v46;
            *(_QWORD *)(v51 + 24) = 1230065731LL;
          }
        }
      }
      v52 = (struct _KEVENT *)PdoExt(v46);
      v53 = *(struct _KEVENT **)&v52[53].Header.Lock;
      if ( v53 == &v52[53] )
      {
LABEL_96:
        Blink = (int)v52[53].Header.WaitListHead.Blink;
        if ( Blink )
          LODWORD(v52[53].Header.WaitListHead.Blink) = Blink - 1;
      }
      else
      {
        while ( 1 )
        {
          p_Blink = &v53[-1].Header.WaitListHead.Blink;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( a1 )
            {
              v55 = *(_QWORD *)(a1 + 64);
              if ( v55 )
              {
                v56 = *(_QWORD *)(v55 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v55 + 880)) & *(_DWORD *)(v55 + 884));
                *(_DWORD *)v56 = 1064591724;
                *(_QWORD *)(v56 + 8) = 0LL;
                *(_QWORD *)(v56 + 16) = v52;
                *(_QWORD *)(v56 + 24) = 1230065731LL;
              }
            }
          }
          if ( *((_DWORD *)p_Blink + 6) == 1230065731 && p_Blink[5] == (_LIST_ENTRY *)v24 )
            break;
          v53 = *(struct _KEVENT **)&v53->Header.Lock;
          if ( v53 == &v52[53] )
            goto LABEL_96;
        }
        v58 = *(struct _KEVENT **)&v53->Header.Lock;
        if ( *(struct _KEVENT **)(*(_QWORD *)&v53->Header.Lock + 8LL) != v53
          || (Flink = v53->Header.WaitListHead.Flink, (struct _KEVENT *)Flink->Flink != v53) )
        {
          __fastfail(3u);
        }
        Flink->Flink = (_LIST_ENTRY *)v58;
        v58->Header.WaitListHead.Flink = Flink;
        ExFreePoolWithTag(p_Blink, 0);
      }
      if ( *(struct _KEVENT **)&v52[53].Header.Lock == &v52[53] && !LODWORD(v52[53].Header.WaitListHead.Blink) )
        KeSetEvent(v52 + 54, 0, 0);
      qword_14006F5A0 = 0LL;
      KeReleaseSpinLock(&HubG, v49);
    }
    ExFreePoolWithTag((PVOID)v24, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v34 == 5 )
    {
      v4 = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      break;
    }
    if ( *(int *)(a2 + 2876) > 50 )
    {
      UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, (__int64)usbfile_pchange_c, 6117, 1);
LABEL_57:
      *(_DWORD *)(a2 + 400) = 4;
LABEL_58:
      FdoExt(a1);
      v4 = a3;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v35,
          v36,
          71,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          a3);
      v37 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v38 = *(_QWORD *)(a1 + 64);
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
            *(_DWORD *)v39 = 959530320;
            *(_QWORD *)(v39 + 8) = 0LL;
            *(_QWORD *)(v39 + 16) = 0LL;
            *(_QWORD *)(v39 + 24) = v37;
          }
        }
      }
      UsbhDispatch_PortChangeQueueNullEvent(a1, a2, 19LL, a3);
      break;
    }
    if ( v34 == 3 )
      goto LABEL_57;
    if ( v34 == 4 )
      goto LABEL_58;
    v4 = a3;
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
  v40 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v41 = *(_QWORD *)(a1 + 64);
      if ( v41 )
      {
        v42 = *(_QWORD *)(v41 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
        *(_DWORD *)v42 = 909133136;
        *(_QWORD *)(v42 + 8) = 0LL;
        *(_QWORD *)(v42 + 16) = 0LL;
        *(_QWORD *)(v42 + 24) = v40;
      }
    }
  }
  result = UsbhDispatch_PortChangeQueueNullEvent(a1, a2, 6LL, v4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v44 = *(_QWORD *)(a1 + 64);
      if ( v44 )
      {
        result = 762017649LL;
        v45 = *(_QWORD *)(v44 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
        *(_DWORD *)v45 = 762017649;
        *(_QWORD *)(v45 + 8) = 0LL;
        *(_QWORD *)(v45 + 16) = a2;
        *(_QWORD *)(v45 + 24) = 0LL;
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
