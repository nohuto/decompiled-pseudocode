/*
 * XREFs of Usbh_PCE_wRun_Action @ 0x14001FE00
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhHubRunPortChangeQueue @ 0x14001DE80 (UsbhHubRunPortChangeQueue.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_wRun_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      33,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = v8;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 724267376;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 5LL;
        *(_QWORD *)(v12 + 24) = v9;
      }
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 724267376;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = v14;
        *(_QWORD *)(v16 + 24) = v13;
      }
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = 32 * (v17 + 43);
  *(_DWORD *)(v18 + a2) = 5;
  *(_DWORD *)(v18 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + a2 + 8) = -1;
  *(_QWORD *)(v18 + a2 + 12) = 0LL;
  *(_QWORD *)(v18 + a2 + 20) = 0LL;
  *(_DWORD *)(v18 + a2 + 28) = 0;
  v19 = *(int *)(a2 + 12);
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884))
            + *(_QWORD *)(v21 + 888);
        *(_DWORD *)v22 = 812660063;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = v19;
        *(_QWORD *)(v22 + 24) = v20;
      }
    }
  }
  if ( (_DWORD)v19 == 4 )
  {
    v32 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v33 = *(_QWORD *)(a1 + 64);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
          *(_DWORD *)v34 = 862991711;
          *(_QWORD *)(v34 + 8) = 0LL;
          *(_QWORD *)(v34 + 16) = 4LL;
          *(_QWORD *)(v34 + 24) = v32;
        }
      }
    }
    v35 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 3;
    *(_DWORD *)(v35 + a2 + 1384) = 3;
  }
  else
  {
    if ( (_DWORD)v19 != 5 )
    {
      switch ( (int)v19 )
      {
        case 3:
          Log(a1, 512, 1597337650, v19, *(unsigned __int16 *)(a2 + 4));
          v56 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v56 + a2 + 1384) = 14;
          goto LABEL_57;
        case 6:
        case 20:
          KeResetEvent((PRKEVENT)(a2 + 496));
          goto LABEL_23;
        case 8:
          Log(a1, 512, 1597337650, v19, *(unsigned __int16 *)(a2 + 4));
          v57 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 10;
          *(_DWORD *)(v57 + a2 + 1384) = 10;
          goto LABEL_57;
        case 9:
          v42 = *(unsigned __int16 *)(a2 + 4);
          if ( (UsbhLogMask & 0x200) != 0 )
          {
            if ( a1 )
            {
              v43 = *(_QWORD *)(a1 + 64);
              if ( v43 )
              {
                v44 = 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884))
                    + *(_QWORD *)(v43 + 888);
                *(_DWORD *)v44 = 879768927;
                *(_QWORD *)(v44 + 8) = 0LL;
                *(_QWORD *)(v44 + 16) = v19;
                *(_QWORD *)(v44 + 24) = v42;
              }
            }
          }
          v45 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 8;
          *(_DWORD *)(v45 + a2 + 1384) = 8;
          v46 = *(unsigned __int16 *)(a2 + 4);
          v47 = *(int *)(a2 + 12);
          *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
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
          v51 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 448) = 0;
          *(_DWORD *)(v51 + a2 + 1384) = v50;
          goto LABEL_38;
        case 10:
        case 14:
          Log(a1, 512, 1597337649, v19, *(unsigned __int16 *)(a2 + 4));
          goto LABEL_57;
        case 12:
          Log(a1, 512, 1597337650, v19, *(unsigned __int16 *)(a2 + 4));
          v58 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 13;
          *(_DWORD *)(v58 + a2 + 1384) = 13;
          goto LABEL_57;
        case 16:
          Log(a1, 512, 1597337655, v19, *(unsigned __int16 *)(a2 + 4));
          v60 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 17;
          *(_DWORD *)(v60 + a2 + 1384) = 17;
          *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
          UsbhUnlockPcqWithTag(a1, a2, v10, 0);
          goto LABEL_39;
        case 17:
          Log(a1, 512, 1597337654, v19, *(unsigned __int16 *)(a2 + 4));
          v59 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 17;
          *(_DWORD *)(v59 + a2 + 1384) = 17;
          goto LABEL_57;
        case 19:
          KeResetEvent((PRKEVENT)(a2 + 496));
          v61 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v61 + a2 + 1384) = 19;
LABEL_57:
          UsbhUnlockPcqWithTag(a1, a2, v10, 0);
          break;
        default:
          v23 = *(unsigned __int16 *)(a2 + 4);
          if ( (UsbhLogMask & 0x200) != 0 )
          {
            if ( a1 )
            {
              v24 = *(_QWORD *)(a1 + 64);
              if ( v24 )
              {
                v25 = 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884))
                    + *(_QWORD *)(v24 + 888);
                *(_DWORD *)v25 = 946877791;
                *(_QWORD *)(v25 + 8) = 0LL;
                *(_QWORD *)(v25 + 16) = v19;
                *(_QWORD *)(v25 + 24) = v23;
              }
            }
          }
LABEL_23:
          v26 = *(int *)(a2 + 12);
          v27 = *(unsigned __int16 *)(a2 + 4);
          if ( (UsbhLogMask & 0x10) != 0 && a1 )
          {
            v28 = *(_QWORD *)(a1 + 64);
            if ( v28 )
            {
              v29 = *(_QWORD *)(v28 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
              *(_DWORD *)v29 = 757952880;
              *(_QWORD *)(v29 + 8) = 0LL;
              *(_QWORD *)(v29 + 16) = v26;
              *(_QWORD *)(v29 + 24) = v27;
            }
          }
          v30 = *(_DWORD *)(a2 + 12);
          v31 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 448) = 0;
          *(_DWORD *)(v31 + a2 + 1384) = v30;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
          break;
      }
      return;
    }
    v52 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v53 = *(_QWORD *)(a1 + 64);
        if ( v53 )
        {
          v54 = *(_QWORD *)(v53 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
          *(_DWORD *)v54 = 896546143;
          *(_QWORD *)(v54 + 8) = 0LL;
          *(_QWORD *)(v54 + 16) = 5LL;
          *(_QWORD *)(v54 + 24) = v52;
        }
      }
    }
    v55 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 12;
    *(_DWORD *)(v55 + a2 + 1384) = 12;
  }
  v36 = *(int *)(a2 + 12);
  v37 = *(unsigned __int16 *)(a2 + 4);
  *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v38 = *(_QWORD *)(a1 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 757952880;
        *(_QWORD *)(v39 + 24) = v37;
        *(_QWORD *)(v39 + 16) = v36;
        *(_QWORD *)(v39 + 8) = 0LL;
      }
    }
  }
  v40 = *(_DWORD *)(a2 + 12);
  v41 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v41 + a2 + 1384) = v40;
LABEL_38:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
LABEL_39:
  UsbhHubRunPortChangeQueue(a1, a2, a3);
}
