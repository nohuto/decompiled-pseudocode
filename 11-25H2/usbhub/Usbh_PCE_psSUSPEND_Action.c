/*
 * XREFs of Usbh_PCE_psSUSPEND_Action @ 0x140001774
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x140001A1C (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_psSUSPEND_Action(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  KIRQL v9; // al
  __int64 v10; // r8
  KIRQL v11; // bp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx

  FdoExt(a1);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v8 = 812660785;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = v7;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      47,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v10 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v11 = v9;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 724267376;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 18LL;
        *(_QWORD *)(v13 + 24) = v10;
      }
    }
  }
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 724267376;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = v15;
        *(_QWORD *)(v17 + 24) = v14;
      }
    }
  }
  v18 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v18;
  v19 = a2 + 32 * (v18 + 43);
  *(_DWORD *)v19 = 18;
  v20 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v19 + 8) = -1;
  *(_DWORD *)(v19 + 4) = v20;
  *(_QWORD *)(v19 + 12) = 0LL;
  *(_QWORD *)(v19 + 20) = 0LL;
  *(_DWORD *)(v19 + 28) = 0;
  UsbhFlushPortChangeQueue(a1, a2, v14, v15);
  v21 = *(unsigned __int16 *)(a2 + 4);
  v22 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 757952880;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v22;
        *(_QWORD *)(v24 + 24) = v21;
      }
    }
  }
  v25 = *(_DWORD *)(a2 + 12);
  v26 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v26 + a2 + 8) = v25;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
}
