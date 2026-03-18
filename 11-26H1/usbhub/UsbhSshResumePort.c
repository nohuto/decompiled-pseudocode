/*
 * XREFs of UsbhSshResumePort @ 0x1400046E8
 * Callers:
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSshPropagateResume @ 0x1400341AC (UsbhSshPropagateResume.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x14004408C (UsbhPCE_ResumeTimeout.c)
 */

__int64 __fastcall UsbhSshResumePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // rcx
  signed __int32 v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  signed __int32 v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  KIRQL v30; // al
  KSPIN_LOCK *v31; // rcx
  int v32; // r10d
  __int64 v33; // r8
  __int64 v34; // rcx
  signed __int32 v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v39 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v8 = FdoExt(a1, a2, a3, a4);
  v9 = UsbhLatchPdo(a1, *(unsigned __int16 *)(a3 + 4), 0LL, 1399612007LL);
  v10 = *(unsigned __int16 *)(a3 + 4);
  v11 = v9;
  if ( v9 )
  {
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        v18 = *(_QWORD *)(a1 + 64);
        if ( v18 )
        {
          v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 880), 0xFFFFFFFF);
          v20 = *(_DWORD *)(v18 + 884);
          v21 = *(_QWORD *)(v18 + 888);
          v22 = 32LL * ((v19 - 1) & v20);
          *(_DWORD *)(v22 + v21) = 844264307;
          *(_QWORD *)(v22 + v21 + 8) = 0LL;
          *(_QWORD *)(v22 + v21 + 16) = v10;
          *(_QWORD *)(v22 + v21 + 24) = v11;
        }
      }
    }
    v23 = *(unsigned __int16 *)(a3 + 4);
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 880), 0xFFFFFFFF);
          v26 = *(_DWORD *)(v24 + 884);
          v27 = *(_QWORD *)(v24 + 888);
          v28 = 32LL * ((v25 - 1) & v26);
          *(_DWORD *)(v28 + v27) = 861041523;
          *(_QWORD *)(v28 + v27 + 8) = 0LL;
          *(_QWORD *)(v28 + v27 + 16) = 0LL;
          *(_QWORD *)(v28 + v27 + 24) = v23;
        }
      }
    }
    while ( 1 )
    {
      v29 = UsbhFdoCheckUpstreamConnectionState(a1, &v39, v23);
      if ( (v29 & 0xC0000000) == 0xC0000000 )
        break;
      v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4944));
      v31 = (KSPIN_LOCK *)(v8 + 4944);
      if ( *(_DWORD *)(a3 + 696) != 3 )
      {
        KeReleaseSpinLock(v31, v30);
        v32 = 0;
        goto LABEL_21;
      }
      KeReleaseSpinLock(v31, v30);
      v32 = UsbhWaitEventWithTimeoutEx(a1, a3 + 712, 500LL, 1936937556LL, 0, 0LL);
      if ( v32 != 258 )
        goto LABEL_21;
      UsbhPCE_ResumeTimeout(a1, a2, *(unsigned __int16 *)(a3 + 4));
    }
    Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(a3 + 4), v29);
LABEL_21:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PORT, *(unsigned __int16 *)(a3 + 4), v32);
    v4 = UsbhSshPropagateResume(a1, a2, v11);
    v33 = *(unsigned __int16 *)(a3 + 4);
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        v34 = *(_QWORD *)(a1 + 64);
        if ( v34 )
        {
          v35 = _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 880), 0xFFFFFFFF);
          v36 = *(_DWORD *)(v34 + 884);
          v37 = *(_QWORD *)(v34 + 888);
          v38 = 32LL * ((v35 - 1) & v36);
          *(_DWORD *)(v38 + v37) = 877818739;
          *(_QWORD *)(v38 + v37 + 8) = 0LL;
          *(_QWORD *)(v38 + v37 + 16) = v33;
          *(_QWORD *)(v38 + v37 + 24) = v11;
        }
      }
    }
    UsbhUnlatchPdo(a1, v11, 0LL, 1399612007LL);
  }
  else if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
        v14 = *(_DWORD *)(v12 + 884);
        v15 = *(_QWORD *)(v12 + 888);
        v16 = 32LL * ((v13 - 1) & v14);
        *(_DWORD *)(v16 + v15) = 894595955;
        *(_QWORD *)(v16 + v15 + 8) = 0LL;
        *(_QWORD *)(v16 + v15 + 16) = v10;
        *(_QWORD *)(v16 + v15 + 24) = 0LL;
      }
    }
  }
  return v4;
}
