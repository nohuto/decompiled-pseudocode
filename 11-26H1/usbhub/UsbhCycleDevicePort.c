/*
 * XREFs of UsbhCycleDevicePort @ 0x1400464FC
 * Callers:
 *     UsbhFdoCyclePdoPort @ 0x140040084 (UsbhFdoCyclePdoPort.c)
 *     UsbhIoctlCyclePort @ 0x14004CF64 (UsbhIoctlCyclePort.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     UsbhSyncResumePort @ 0x140010E74 (UsbhSyncResumePort.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhCycleDevicePort(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // ebx
  _DWORD *v7; // r15
  _DWORD *v8; // r13
  _DWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 PortData; // r12
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rcx
  bool v16; // zf
  KIRQL v17; // dl
  int v18; // eax
  __int64 v19; // r9

  v6 = -1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x51u,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  v7 = PdoExt(a2);
  v8 = FdoExt(a1);
  v9 = PdoExt(a2) + 236;
  PortData = UsbhGetPortData(a1, *((unsigned __int16 *)v7 + 714), v10, v11);
  if ( !PortData )
  {
    Log(a1, 4, 1129932081, 0LL, 0LL);
    v6 = -1073741811;
    goto LABEL_17;
  }
  v13 = v8[640];
  if ( (v13 & 0x4000) != 0 )
  {
    Log(a1, 4, 1132029234, 0LL, 0LL);
    *a3 = -1073713152;
LABEL_8:
    v6 = -1073741810;
    goto LABEL_17;
  }
  if ( (v13 & 0x10) != 0 )
  {
    Log(a1, 4, 1132029235, 0LL, 0LL);
    *a3 = -1073704960;
    v6 = -1073741630;
    goto LABEL_17;
  }
  v14 = UsbhLatchPdo(a1, *((_WORD *)v7 + 714), 0LL, 0x6C435943u);
  Log(a1, 4, 1668899692, *((unsigned __int16 *)v7 + 714), v14);
  if ( !v14 )
    goto LABEL_8;
  if ( a2 == v14 )
  {
    UsbhAcquirePdoStateLock(v15, (__int64)v9, 14);
    v16 = PdoExt(a2)[281] == 3;
    v9[34] = 0;
    qword_140070600 = 0LL;
    v9[22] = 1734964085;
    v17 = *((_BYTE *)v9 + 132);
    if ( v16 )
    {
      KeReleaseSpinLock(&HubG, v17);
      Log(a1, 8, 1668899655, *((unsigned __int16 *)v7 + 714), *((unsigned __int16 *)v7 + 714));
      _InterlockedIncrement((volatile signed __int32 *)(PortData + 412));
      v18 = UsbhSyncResumePort(a1, (__int64)v9, *((_WORD *)v7 + 714));
      Log(a1, 8, 1668895315, *((unsigned __int16 *)v7 + 714), v18);
      LOBYTE(v19) = 1;
      UsbhQueueSoftConnectChange(a1, *((_WORD *)v7 + 714), (__int64)v9, v19);
      v6 = 0;
    }
    else
    {
      v6 = -1073741810;
      KeReleaseSpinLock(&HubG, v17);
    }
  }
  UsbhUnlatchPdo(a1, v14, 0LL, 0x6C435943u);
LABEL_17:
  Log(a1, 8, 1668899655, *((unsigned __int16 *)v7 + 714), v6);
  return (unsigned int)v6;
}
