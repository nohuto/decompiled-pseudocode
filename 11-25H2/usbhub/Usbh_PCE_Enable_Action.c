/*
 * XREFs of Usbh_PCE_Enable_Action @ 0x140032DA0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhUnlockPcqWithTag @ 0x140024D80 (UsbhUnlockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_Enable_Action(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  KIRQL v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  KIRQL v33; // bp
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  KIRQL v37; // dl
  KSPIN_LOCK *v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // r9d

  FdoExt(a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v5 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v6 = v4;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 724267376;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 1LL;
        *(_QWORD *)(v8 + 24) = v5;
      }
    }
  }
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = *(int *)(a2 + 12);
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
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = v9;
      }
    }
  }
  v13 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v13;
  v14 = a2 + 32 * (v13 + 43);
  *(_DWORD *)v14 = 1;
  *(_DWORD *)(v14 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v14 + 8) = -1;
  *(_QWORD *)(v14 + 12) = 0LL;
  *(_QWORD *)(v14 + 20) = 0LL;
  *(_DWORD *)(v14 + 28) = 0;
  v15 = *(int *)(a2 + 12);
  v16 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 812658992;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = v15;
        *(_QWORD *)(v18 + 24) = v16;
      }
    }
  }
  if ( (_DWORD)v15 != 1 )
  {
    switch ( (int)v15 )
    {
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 10:
      case 14:
      case 15:
      case 16:
      case 17:
      case 20:
        v49 = *(unsigned __int16 *)(a2 + 4);
        if ( (UsbhLogMask & 0x200) != 0 )
        {
          if ( a1 )
          {
            v50 = *(_QWORD *)(a1 + 64);
            if ( v50 )
            {
              v51 = *(_QWORD *)(v50 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
              *(_DWORD *)v51 = 846213424;
              *(_QWORD *)(v51 + 8) = 0LL;
              *(_QWORD *)(v51 + 16) = v15;
              *(_QWORD *)(v51 + 24) = v49;
            }
          }
        }
        v52 = *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v15;
        *(_DWORD *)(32 * v52 + a2 + 1384) = v15;
        v53 = *(unsigned __int16 *)(a2 + 4);
        v54 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v55 = *(_QWORD *)(a1 + 64);
            if ( v55 )
            {
              v56 = *(_QWORD *)(v55 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v55 + 880)) & *(_DWORD *)(v55 + 884));
              *(_DWORD *)v56 = 757952880;
              *(_QWORD *)(v56 + 8) = 0LL;
              *(_QWORD *)(v56 + 16) = v54;
              *(_QWORD *)(v56 + 24) = v53;
            }
          }
        }
        v38 = (KSPIN_LOCK *)(a2 + 440);
        v57 = *(_DWORD *)(a2 + 12);
        v58 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v58 + a2 + 8) = v57;
        v37 = v6;
        goto LABEL_37;
      case 18:
        break;
      default:
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
              *(_DWORD *)v41 = 1483747632;
              *(_QWORD *)(v41 + 8) = 0LL;
              *(_QWORD *)(v41 + 16) = v15;
              *(_QWORD *)(v41 + 24) = v39;
            }
          }
        }
        v42 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v42 + a2 + 1384) = 19;
        v43 = *(unsigned __int16 *)(a2 + 4);
        v44 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v45 = *(_QWORD *)(a1 + 64);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
              *(_DWORD *)v46 = 757952880;
              *(_QWORD *)(v46 + 8) = 0LL;
              *(_QWORD *)(v46 + 16) = v44;
              *(_QWORD *)(v46 + 24) = v43;
            }
          }
        }
        v37 = v6;
        v47 = *(_DWORD *)(a2 + 12);
        v48 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v48 + a2 + 8) = v47;
        v38 = (KSPIN_LOCK *)(a2 + 440);
        goto LABEL_37;
    }
  }
  KeResetEvent((PRKEVENT)(a2 + 472));
  v20 = *(unsigned __int16 *)(a2 + 4);
  v21 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v22 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v22 = 1986359664;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = v21;
        *(_QWORD *)(v22 + 24) = v20;
      }
    }
  }
  *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
  if ( *(_QWORD *)(a2 + 456) == a2 + 456 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        v20,
        14,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    Log(a1, 512, 1701727572, 0LL, *(unsigned __int16 *)(a2 + 4));
    v59 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v59 + a2 + 1384) = 2;
    UsbhUnlockPcqWithTag(a1, a2, v6, v60);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        v20,
        15,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    v23 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_DWORD *)v25 = 1196650085;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = 0LL;
          *(_QWORD *)(v25 + 24) = v23;
        }
      }
    }
    v26 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 4;
    *(_DWORD *)(v26 + a2 + 1384) = 4;
    v27 = *(unsigned __int16 *)(a2 + 4);
    v28 = *(int *)(a2 + 12);
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
    v31 = *(_DWORD *)(a2 + 12);
    v32 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v32 + a2 + 8) = v31;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
    v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
    if ( *(_DWORD *)(a2 + 2412) != 1 )
    {
      *(_DWORD *)(a2 + 2412) = 1;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v34 = *(_QWORD *)(a2 + 16);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 64);
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
            *(_DWORD *)v36 = 1464029265;
            *(_QWORD *)(v36 + 8) = 0LL;
            *(_QWORD *)(v36 + 16) = a2;
            *(_QWORD *)(v36 + 24) = 0LL;
          }
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
      IoQueueWorkItem(
        *(PIO_WORKITEM *)(a2 + 2456),
        (PIO_WORKITEM_ROUTINE)UsbhHubProcessChangeWorker,
        DelayedWorkQueue,
        (PVOID)a2);
    }
    v37 = v33;
    v38 = (KSPIN_LOCK *)(a2 + 2448);
LABEL_37:
    KeReleaseSpinLock(v38, v37);
  }
}
