/*
 * XREFs of UsbhRequestPortSuspend @ 0x140021600
 * Callers:
 *     UsbhWaitConnect @ 0x1400205C0 (UsbhWaitConnect.c)
 * Callees:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSuspendPort @ 0x14002198C (UsbhSuspendPort.c)
 *     UsbhBusUnlatchPdo @ 0x140021BAC (UsbhBusUnlatchPdo.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhRequestPortSuspend(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r14d
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // ebx
  KSPIN_LOCK *v15; // rdi
  KIRQL v16; // r15
  __int64 v17; // r8
  __int64 v18; // rcx
  signed __int32 v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // rbx
  KIRQL v25; // al
  int v26; // r9d
  __int64 v27; // rdx
  KIRQL v28; // al
  KIRQL v29; // bl

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a4 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 1347646323;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = a4;
        *(_QWORD *)(v13 + v12 + 24) = 0LL;
      }
    }
  }
  FdoExt(a1);
  if ( a5 )
  {
    v24 = *(_QWORD *)(a4 + 376);
    v25 = KeAcquireSpinLockRaiseToDpc(&HubG);
    *(_DWORD *)(v24 + 136) = 1;
    *(_BYTE *)(v24 + 132) = v25;
    *(_DWORD *)(v24 + 88) = 2018460752;
    *(_DWORD *)(v24 + 92) = 19;
    qword_140070600 = v24;
    *(_QWORD *)(v24 + 24) = KeGetCurrentThread();
    if ( PdoExt(a5)[281] == 2 )
    {
      UsbhBusUnlatchPdo(a1, a5, a4, v26, v24 + 132);
      UsbhDeletePdo(a1, a5, 2, 19, *(_QWORD *)(a4 + 376));
    }
    else
    {
      v27 = *(_QWORD *)(a4 + 376);
      *(_DWORD *)(v27 + 136) = 0;
      qword_140070600 = 0LL;
      *(_DWORD *)(v27 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v27 + 132));
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        48,
        (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
        *(_WORD *)(a4 + 4));
    if ( a3 == 25 )
    {
      UsbhSuspendPort(a1, *(unsigned __int16 *)(a4 + 4));
    }
    else if ( a3 != 27 )
    {
      return v6;
    }
    return 5;
  }
  else
  {
    v14 = 0;
    v15 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
    v16 = KeAcquireSpinLockRaiseToDpc(v15);
    v17 = *(unsigned __int16 *)(a4 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
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
          *(_DWORD *)(v22 + v21) = 1431529843;
          *(_QWORD *)(v22 + v21 + 8) = 0LL;
          *(_QWORD *)(v22 + v21 + 16) = 0LL;
          *(_QWORD *)(v22 + v21 + 24) = v17;
        }
      }
    }
    if ( *(_DWORD *)(a4 + 696) == 2 )
    {
      *(_DWORD *)(a4 + 696) = 0;
      KeSetEvent((PRKEVENT)(a4 + 744), 0, 0);
      v14 = 1;
    }
    KeReleaseSpinLock(v15, v16);
    if ( v14 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
      *(_DWORD *)(a4 + 448) = 1;
      v29 = v28;
      UsbhSetPcqEventStatus(a1, a4, 0LL, 30LL);
      *(_DWORD *)(a4 + 448) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v29);
    }
  }
  return v6;
}
