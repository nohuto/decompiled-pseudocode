/*
 * XREFs of Usbh_PCE_psSUSPEND_Action @ 0x140001A0C
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x140001CC8 (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_psSUSPEND_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  KIRQL v13; // al
  __int64 v14; // r8
  KIRQL v15; // bp
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  signed __int32 v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  signed __int32 v33; // eax
  unsigned int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rdx

  v4 = a3;
  FdoExt(a1, a2, a3, a4);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v7 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v7 + v12) = 812660785;
        *(_QWORD *)(v7 + v12 + 8) = 0LL;
        *(_QWORD *)(v7 + v12 + 16) = a2;
        *(_QWORD *)(v7 + v12 + 24) = v8;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      47,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v14 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v15 = v13;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
        v18 = *(_DWORD *)(v16 + 884);
        v19 = *(_QWORD *)(v16 + 888);
        v20 = 32LL * ((v17 - 1) & v18);
        *(_DWORD *)(v20 + v19) = 724267376;
        *(_QWORD *)(v20 + v19 + 8) = 0LL;
        *(_QWORD *)(v20 + v19 + 16) = 18LL;
        *(_QWORD *)(v20 + v19 + 24) = v14;
      }
    }
  }
  v21 = *(unsigned __int16 *)(a2 + 4);
  v22 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 880), 0xFFFFFFFF);
        v25 = *(_DWORD *)(v23 + 884);
        v26 = *(_QWORD *)(v23 + 888);
        v27 = 32LL * ((v24 - 1) & v25);
        *(_DWORD *)(v27 + v26) = 724267376;
        *(_QWORD *)(v27 + v26 + 8) = 0LL;
        *(_QWORD *)(v27 + v26 + 16) = v22;
        *(_QWORD *)(v27 + v26 + 24) = v21;
      }
    }
  }
  v28 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v28;
  v29 = 32 * (v28 + 43);
  *(_DWORD *)(v29 + a2) = 18;
  *(_DWORD *)(v29 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v29 + a2 + 8) = -1;
  *(_QWORD *)(v29 + a2 + 12) = 0LL;
  *(_QWORD *)(v29 + a2 + 20) = 0LL;
  *(_DWORD *)(v29 + a2 + 28) = 0;
  UsbhFlushPortChangeQueue(a1, a2, v21, v22);
  v30 = *(unsigned __int16 *)(a2 + 4);
  v31 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v32 = *(_QWORD *)(a1 + 64);
      if ( v32 )
      {
        v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 880), 0xFFFFFFFF);
        v34 = *(_DWORD *)(v32 + 884);
        v35 = *(_QWORD *)(v32 + 888);
        v36 = 32LL * ((v33 - 1) & v34);
        *(_DWORD *)(v36 + v35) = 757952880;
        *(_QWORD *)(v36 + v35 + 8) = 0LL;
        *(_QWORD *)(v36 + v35 + 16) = v31;
        *(_QWORD *)(v36 + v35 + 24) = v30;
      }
    }
  }
  v37 = *(_DWORD *)(a2 + 12);
  v38 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v38 + a2 + 1384) = v37;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v15);
}
