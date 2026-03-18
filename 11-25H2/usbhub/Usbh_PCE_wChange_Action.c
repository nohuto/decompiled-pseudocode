/*
 * XREFs of Usbh_PCE_wChange_Action @ 0x140024610
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhiSignalSuspendEvent @ 0x14001EB0C (UsbhiSignalSuspendEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x140024D80 (UsbhUnlockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x140044A8C (UsbhRemoveQueuedSuspend.c)
 */

_QWORD *__fastcall Usbh_PCE_wChange_Action(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int16 v8; // cx
  __int64 v9; // rcx
  KIRQL v10; // al
  __int64 v11; // r8
  KIRQL v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v15; // r14
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int *v20; // r12
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // r15
  int v25; // r13d
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rdx
  _QWORD *v32; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r8d
  __int64 v37; // r9
  __int64 v38; // r11
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  unsigned int *v43; // r8
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r10
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  KIRQL v63; // [rsp+98h] [rbp+10h]

  FdoExt(a1);
  v7 = *(unsigned __int16 *)(a2 + 4);
  LOBYTE(v8) = *(_WORD *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v9 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v9 = 812660273;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v7;
        v8 = *(_WORD *)(a2 + 4);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)WPP_GLOBAL_Control,
      v6,
      43,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      a3);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = v10;
  v63 = v10;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 724267376;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = 16LL;
        *(_QWORD *)(v14 + 24) = v11;
      }
    }
  }
  v15 = (int *)(a2 + 12);
  v16 = *(unsigned __int16 *)(a2 + 4);
  v17 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = (int *)(a2 + 12);
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      v15 = (int *)(a2 + 12);
      if ( v18 )
      {
        v15 = (int *)(a2 + 12);
        v19 = *(_QWORD *)(v18 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
        *(_DWORD *)v19 = 724267376;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = v17;
        *(_QWORD *)(v19 + 24) = v16;
      }
    }
  }
  v20 = (unsigned int *)(a2 + 2400);
  v21 = (_QWORD *)(a2 + 456);
  v22 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v22;
  v23 = a2 + 32 * (v22 + 43);
  *(_DWORD *)v23 = 16;
  *(_DWORD *)(v23 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v23 + 8) = -1;
  *(_QWORD *)(v23 + 12) = 0LL;
  *(_QWORD *)(v23 + 20) = 0LL;
  *(_DWORD *)(v23 + 28) = 0;
  v24 = *(_QWORD **)(a2 + 456);
  v25 = *(_DWORD *)(a2 + 12);
  if ( v24 != (_QWORD *)(a2 + 456) )
  {
    if ( v25 != 10 )
    {
      v16 = 0x140000000uLL;
      switch ( v25 )
      {
        case 3:
        case 8:
        case 14:
          goto LABEL_26;
        case 12:
        case 13:
          v32 = *(_QWORD **)(a2 + 456);
          if ( (_QWORD *)v24[1] != v21 )
            goto LABEL_62;
          v52 = *v24;
          if ( *(_QWORD **)(*v24 + 8LL) != v24 )
            goto LABEL_62;
          *v21 = v52;
          *(_QWORD *)(v52 + 8) = v21;
          v53 = 32LL * *v20;
          *(_DWORD *)(a2 + 12) = 12;
          *(_DWORD *)(v53 + a2 + 1384) = 12;
          break;
        case 17:
          v32 = *(_QWORD **)(a2 + 456);
          if ( (_QWORD *)v24[1] != v21 )
            goto LABEL_62;
          v55 = *v24;
          if ( *(_QWORD **)(*v24 + 8LL) != v24 )
            goto LABEL_62;
          *v21 = v55;
          *(_QWORD *)(v55 + 8) = v21;
          v56 = 32LL * *v20;
          *(_DWORD *)(a2 + 12) = 17;
          *(_DWORD *)(v56 + a2 + 1384) = 17;
          break;
        default:
          v54 = 32LL * *v20;
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v54 + a2 + 1384) = 19;
          UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
          return 0LL;
      }
      UsbhUnlockPcqWithTag(a1, a2, v12, *((unsigned int *)v24 - 2));
      return v32;
    }
LABEL_26:
    if ( (_QWORD *)v24[1] != v21 )
      goto LABEL_62;
    v34 = *v24;
    if ( *(_QWORD **)(*v24 + 8LL) != v24 )
      goto LABEL_62;
    *v21 = v34;
    v32 = v24;
    *(_QWORD *)(v34 + 8) = v21;
    if ( (*(_DWORD *)(a2 + 2408) & 2) != 0 && (*(_DWORD *)(v24 - 1) & 1) != 0 )
    {
      UsbhRemoveQueuedSuspend(a1, a2, v16, v17);
      UsbhiSignalSuspendEvent(a1, a2);
      v57 = (_QWORD *)(a2 + 456);
      v58 = *(_QWORD *)(a2 + 456);
      if ( *(_QWORD *)(v58 + 8) == a2 + 456 )
      {
        v12 = v63;
        v24[1] = v57;
        v32 = 0LL;
        *v24 = v58;
        *(_QWORD *)(v58 + 8) = v24;
        *v57 = v24;
        v59 = 32LL * *v20;
        *(_BYTE *)(a2 + 2839) = 1;
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v59 + a2 + 1384) = 14;
LABEL_31:
        v36 = *((_DWORD *)v24 - 2);
        v37 = *(unsigned __int16 *)(a2 + 4);
        v38 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v39 = *(_QWORD *)(a1 + 64);
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
              *(_DWORD *)v40 = 757952880;
              *(_QWORD *)(v40 + 8) = 0LL;
              *(_QWORD *)(v40 + 16) = v38;
              *(_QWORD *)(v40 + 24) = v37;
            }
          }
        }
        v41 = *(_DWORD *)(a2 + 12);
        v42 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v42 + a2 + 8) = v41;
        if ( v36 )
          *(_DWORD *)(v42 + a2 + 12) = v36;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
        return v32;
      }
LABEL_62:
      __fastfail(3u);
    }
    if ( v25 == 14 )
    {
LABEL_30:
      v35 = 32LL * *v20;
      *(_DWORD *)(a2 + 12) = 3;
      *(_DWORD *)(v35 + a2 + 1384) = 3;
      goto LABEL_31;
    }
    if ( v25 != 10 )
    {
      if ( v25 == 3 )
        goto LABEL_30;
      if ( v25 != 8 )
        goto LABEL_31;
    }
    v51 = 32LL * *v20;
    *(_DWORD *)(a2 + 12) = 8;
    *(_DWORD *)(v51 + a2 + 1384) = 8;
    goto LABEL_31;
  }
  KeResetEvent((PRKEVENT)(a2 + 496));
  if ( v25 == 12 )
    goto LABEL_18;
  v43 = (unsigned int *)(a2 + 2400);
  if ( v25 != 14 )
  {
    if ( v25 != 3 )
    {
      if ( v25 != 8 )
      {
        if ( v25 != 10 )
        {
          if ( v25 == 13 )
          {
            v61 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 12;
            *(_DWORD *)(v61 + a2 + 1384) = 12;
          }
          else
          {
            if ( v25 == 17 )
            {
              v15 = (int *)(a2 + 12);
              v20 = (unsigned int *)(a2 + 2400);
LABEL_18:
              v26 = *(unsigned __int16 *)(a2 + 4);
              v27 = *v15;
              if ( (UsbhLogMask & 0x10) != 0 )
              {
                if ( a1 )
                {
                  v28 = *(_QWORD *)(a1 + 64);
                  if ( v28 )
                  {
                    v29 = *(_QWORD *)(v28 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
                    *(_DWORD *)v29 = 757952880;
                    *(_QWORD *)(v29 + 8) = 0LL;
                    *(_QWORD *)(v29 + 16) = v27;
                    *(_QWORD *)(v29 + 24) = v26;
                  }
                }
              }
              v30 = *v15;
              v31 = 32 * (*v20 + 43LL);
              *(_DWORD *)(a2 + 448) = 0;
              *(_DWORD *)(v31 + a2 + 8) = v30;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v63);
              return 0LL;
            }
            v60 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 19;
            *(_DWORD *)(v60 + a2 + 1384) = 19;
          }
          UsbhUnlockPcqWithTag(a1, a2, v63, 0LL);
          return 0LL;
        }
        v20 = (unsigned int *)(a2 + 2400);
      }
      v62 = 32LL * *v20;
      *(_DWORD *)(a2 + 12) = 8;
      v32 = 0LL;
      *(_DWORD *)(v62 + a2 + 1384) = 8;
      UsbhUnlockPcqWithTag(a1, a2, v63, 0LL);
      return v32;
    }
    v43 = (unsigned int *)(a2 + 2400);
  }
  v44 = 32LL * *v20;
  v32 = 0LL;
  *(_DWORD *)(a2 + 12) = 3;
  *(_DWORD *)(v44 + a2 + 1384) = 3;
  v45 = *(unsigned __int16 *)(a2 + 4);
  v46 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v47 = *(_QWORD *)(a1 + 64);
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
        *(_DWORD *)v48 = 757952880;
        *(_QWORD *)(v48 + 8) = 0LL;
        *(_QWORD *)(v48 + 16) = v46;
        *(_QWORD *)(v48 + 24) = v45;
      }
    }
  }
  v49 = *(_DWORD *)(a2 + 12);
  v50 = 32 * (*v43 + 43LL);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v50 + a2 + 8) = v49;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v63);
  return v32;
}
