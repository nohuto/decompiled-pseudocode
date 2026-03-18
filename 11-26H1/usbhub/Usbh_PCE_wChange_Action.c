/*
 * XREFs of Usbh_PCE_wChange_Action @ 0x140020AB0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhiSignalSuspendEvent @ 0x14002394C (UsbhiSignalSuspendEvent.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1400445B0 (UsbhRemoveQueuedSuspend.c)
 */

_QWORD *__fastcall Usbh_PCE_wChange_Action(__int64 a1, __int64 a2, char a3)
{
  int v6; // r8d
  __int64 v7; // r9
  __int16 v8; // cx
  __int64 v9; // rdx
  __int64 v10; // rdx
  KIRQL v11; // al
  __int64 v12; // r8
  KIRQL v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rcx
  int *v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // r15
  int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rdx
  _QWORD *v33; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r8d
  __int64 v38; // r9
  __int64 v39; // r11
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  unsigned int *v44; // r8
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // r10
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  KIRQL v63; // [rsp+98h] [rbp+10h]
  int v64; // [rsp+A8h] [rbp+20h]

  FdoExt(a1);
  v7 = *(unsigned __int16 *)(a2 + 4);
  LOBYTE(v8) = *(_WORD *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884))
            + *(_QWORD *)(v9 + 888);
        *(_DWORD *)v10 = 812660273;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = v7;
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
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = v11;
  v63 = v11;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 724267376;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = 16LL;
        *(_QWORD *)(v15 + 24) = v12;
      }
    }
  }
  v16 = (int *)(a2 + 12);
  v17 = *(unsigned __int16 *)(a2 + 4);
  v18 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v16 = (int *)(a2 + 12);
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      v16 = (int *)(a2 + 12);
      if ( v19 )
      {
        v16 = (int *)(a2 + 12);
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = 724267376;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v18;
        *(_QWORD *)(v20 + 24) = v17;
      }
    }
  }
  v21 = (unsigned int *)(a2 + 2400);
  v22 = a2 + 456;
  v23 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v23;
  v24 = 32 * (v23 + 43);
  *(_DWORD *)(v24 + a2) = 16;
  *(_DWORD *)(v24 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v24 + a2 + 8) = -1;
  *(_QWORD *)(v24 + a2 + 12) = 0LL;
  *(_QWORD *)(v24 + a2 + 20) = 0LL;
  *(_DWORD *)(v24 + a2 + 28) = 0;
  v25 = *(_QWORD **)(a2 + 456);
  v26 = *(_DWORD *)(a2 + 12);
  v64 = v26;
  if ( v25 != (_QWORD *)(a2 + 456) )
  {
    if ( v26 != 10 )
    {
      switch ( v26 )
      {
        case 3:
        case 8:
        case 14:
          v26 = *(_DWORD *)(a2 + 12);
          goto LABEL_26;
        case 12:
        case 13:
          if ( v25[1] != v22 )
            goto LABEL_63;
          v53 = *v25;
          if ( *(_QWORD **)(*v25 + 8LL) != v25 )
            goto LABEL_63;
          *(_QWORD *)v22 = v53;
          *(_QWORD *)(v53 + 8) = v22;
          v54 = 32LL * *v21;
          *(_DWORD *)(a2 + 12) = 12;
          *(_DWORD *)(v54 + a2 + 1384) = 12;
          break;
        case 17:
          if ( v25[1] != v22 )
            goto LABEL_63;
          v56 = *v25;
          if ( *(_QWORD **)(*v25 + 8LL) != v25 )
            goto LABEL_63;
          *(_QWORD *)v22 = v56;
          *(_QWORD *)(v56 + 8) = v22;
          v57 = 32LL * *v21;
          *(_DWORD *)(a2 + 12) = 17;
          *(_DWORD *)(v57 + a2 + 1384) = 17;
          break;
        default:
          v55 = 32LL * *v21;
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v55 + a2 + 1384) = 19;
          UsbhUnlockPcqWithTag(a1, a2, v13, 0);
          return 0LL;
      }
      v33 = v25;
      UsbhUnlockPcqWithTag(a1, a2, v13, *((_DWORD *)v25 - 2));
      return v33;
    }
LABEL_26:
    if ( v25[1] != v22 )
      goto LABEL_63;
    v35 = *v25;
    if ( *(_QWORD **)(*v25 + 8LL) != v25 )
      goto LABEL_63;
    *(_QWORD *)v22 = v35;
    v33 = v25;
    *(_QWORD *)(v35 + 8) = v22;
    if ( (*(_DWORD *)(a2 + 2408) & 2) != 0 && (*(_DWORD *)(v25 - 1) & 1) != 0 )
    {
      UsbhRemoveQueuedSuspend(a1, a2);
      UsbhiSignalSuspendEvent(a1, a2);
      v58 = *(_QWORD *)v22;
      if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) == v22 )
      {
        v13 = v63;
        *v25 = v58;
        v25[1] = v22;
        *(_QWORD *)(v58 + 8) = v25;
        *(_QWORD *)v22 = v25;
        v33 = 0LL;
        v59 = 32LL * *v21;
        *(_BYTE *)(a2 + 2839) = 1;
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v59 + a2 + 1384) = 14;
LABEL_31:
        v37 = *((_DWORD *)v25 - 2);
        v38 = *(unsigned __int16 *)(a2 + 4);
        v39 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v40 = *(_QWORD *)(a1 + 64);
            if ( v40 )
            {
              v41 = *(_QWORD *)(v40 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
              *(_DWORD *)v41 = 757952880;
              *(_QWORD *)(v41 + 8) = 0LL;
              *(_QWORD *)(v41 + 16) = v39;
              *(_QWORD *)(v41 + 24) = v38;
            }
          }
        }
        v42 = *(_DWORD *)(a2 + 12);
        v43 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v43 + a2 + 8) = v42;
        if ( v37 )
          *(_DWORD *)(v43 + a2 + 12) = v37;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v13);
        return v33;
      }
LABEL_63:
      __fastfail(3u);
    }
    if ( v26 == 14 )
    {
LABEL_30:
      v36 = 32LL * *v21;
      *(_DWORD *)(a2 + 12) = 3;
      *(_DWORD *)(v36 + a2 + 1384) = 3;
      goto LABEL_31;
    }
    if ( v26 != 10 )
    {
      if ( v26 == 3 )
        goto LABEL_30;
      if ( v26 != 8 )
        goto LABEL_31;
    }
    v52 = 32LL * *v21;
    *(_DWORD *)(a2 + 12) = 8;
    *(_DWORD *)(v52 + a2 + 1384) = 8;
    goto LABEL_31;
  }
  KeResetEvent((PRKEVENT)(a2 + 496));
  if ( v64 == 12 )
    goto LABEL_18;
  v44 = (unsigned int *)(a2 + 2400);
  if ( v64 != 14 )
  {
    if ( v64 != 3 )
    {
      if ( v64 != 8 )
      {
        if ( v64 != 10 )
        {
          if ( v64 == 13 )
          {
            v61 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 12;
            *(_DWORD *)(v61 + a2 + 1384) = 12;
          }
          else
          {
            if ( v64 == 17 )
            {
              v16 = (int *)(a2 + 12);
              v21 = (unsigned int *)(a2 + 2400);
LABEL_18:
              v27 = *(unsigned __int16 *)(a2 + 4);
              v28 = *v16;
              if ( (UsbhLogMask & 0x10) != 0 )
              {
                if ( a1 )
                {
                  v29 = *(_QWORD *)(a1 + 64);
                  if ( v29 )
                  {
                    v30 = *(_QWORD *)(v29 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
                    *(_DWORD *)v30 = 757952880;
                    *(_QWORD *)(v30 + 8) = 0LL;
                    *(_QWORD *)(v30 + 16) = v28;
                    *(_QWORD *)(v30 + 24) = v27;
                  }
                }
              }
              v31 = *v16;
              v32 = 32LL * *v21;
              *(_DWORD *)(a2 + 448) = 0;
              *(_DWORD *)(v32 + a2 + 1384) = v31;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v63);
              return 0LL;
            }
            v60 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 19;
            *(_DWORD *)(v60 + a2 + 1384) = 19;
          }
          UsbhUnlockPcqWithTag(a1, a2, v63, 0);
          return 0LL;
        }
        v21 = (unsigned int *)(a2 + 2400);
      }
      v62 = 32LL * *v21;
      *(_DWORD *)(a2 + 12) = 8;
      v33 = 0LL;
      *(_DWORD *)(v62 + a2 + 1384) = 8;
      UsbhUnlockPcqWithTag(a1, a2, v63, 0);
      return v33;
    }
    v44 = (unsigned int *)(a2 + 2400);
  }
  v45 = 32LL * *v21;
  v33 = 0LL;
  *(_DWORD *)(a2 + 12) = 3;
  *(_DWORD *)(v45 + a2 + 1384) = 3;
  v46 = *(unsigned __int16 *)(a2 + 4);
  v47 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v48 = *(_QWORD *)(a1 + 64);
      if ( v48 )
      {
        v49 = *(_QWORD *)(v48 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
        *(_DWORD *)v49 = 757952880;
        *(_QWORD *)(v49 + 8) = 0LL;
        *(_QWORD *)(v49 + 16) = v47;
        *(_QWORD *)(v49 + 24) = v46;
      }
    }
  }
  v50 = *(_DWORD *)(a2 + 12);
  v51 = 32LL * *v44;
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v51 + a2 + 1384) = v50;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v63);
  return v33;
}
