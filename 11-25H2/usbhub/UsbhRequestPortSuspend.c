/*
 * XREFs of UsbhRequestPortSuspend @ 0x14001C704
 * Callers:
 *     UsbhWaitConnect @ 0x140004380 (UsbhWaitConnect.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhSuspendPort @ 0x14001CA88 (UsbhSuspendPort.c)
 *     UsbhBusUnlatchPdo @ 0x14001CCB0 (UsbhBusUnlatchPdo.c)
 *     UsbhSetPcqEventStatus @ 0x140033F60 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhRequestPortSuspend(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  KSPIN_LOCK *v12; // rdi
  KIRQL v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rbx
  KIRQL v19; // al
  int v20; // r9d
  __int64 v21; // rdx
  KIRQL v22; // al
  KIRQL v23; // bl

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
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1347646323;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a4;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
    }
  }
  FdoExt(a1);
  if ( a5 )
  {
    v18 = *(_QWORD *)(a4 + 376);
    v19 = KeAcquireSpinLockRaiseToDpc(&HubG);
    *(_DWORD *)(v18 + 136) = 1;
    *(_BYTE *)(v18 + 132) = v19;
    *(_DWORD *)(v18 + 88) = 2018460752;
    *(_DWORD *)(v18 + 92) = 19;
    qword_14006F5A0 = v18;
    *(_QWORD *)(v18 + 24) = KeGetCurrentThread();
    if ( PdoExt(a5)[281] == 2 )
    {
      UsbhBusUnlatchPdo(a1, a5, a4, v20, v18 + 132);
      UsbhDeletePdo(a1, a5, 2, 19, *(_QWORD *)(a4 + 376));
    }
    else
    {
      v21 = *(_QWORD *)(a4 + 376);
      *(_DWORD *)(v21 + 136) = 0;
      qword_14006F5A0 = 0LL;
      *(_DWORD *)(v21 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v21 + 132));
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
    v11 = 0;
    v12 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
    v13 = KeAcquireSpinLockRaiseToDpc(v12);
    v14 = *(unsigned __int16 *)(a4 + 4);
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
          *(_DWORD *)v16 = 1431529843;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 16) = 0LL;
          *(_QWORD *)(v16 + 24) = v14;
        }
      }
    }
    if ( *(_DWORD *)(a4 + 696) == 2 )
    {
      *(_DWORD *)(a4 + 696) = 0;
      KeSetEvent((PRKEVENT)(a4 + 744), 0, 0);
      v11 = 1;
    }
    KeReleaseSpinLock(v12, v13);
    if ( v11 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
      *(_DWORD *)(a4 + 448) = 1;
      v23 = v22;
      UsbhSetPcqEventStatus(a1, a4, 0LL);
      *(_DWORD *)(a4 + 448) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v23);
    }
  }
  return v6;
}
