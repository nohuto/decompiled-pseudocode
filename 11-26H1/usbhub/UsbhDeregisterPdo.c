/*
 * XREFs of UsbhDeregisterPdo @ 0x1400467AC
 * Callers:
 *     Usbh_Disconnect_PdoEvent @ 0x14002350C (Usbh_Disconnect_PdoEvent.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1400081E4 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhResetPortData @ 0x1400087E4 (UsbhResetPortData.c)
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1400333B4 (UsbhBusIoInvalidateDeviceRelations.c)
 *     SET_PDO_HWPNPSTATE @ 0x140033458 (SET_PDO_HWPNPSTATE.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhSetPdo_FailIo @ 0x140048260 (UsbhSetPdo_FailIo.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall UsbhDeregisterPdo(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _DWORD *v7; // r13
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 PortData; // rax
  __int64 v13; // r14
  int v14; // r10d
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  KIRQL v19; // dl
  __int64 v20; // r9
  __int64 v21; // [rsp+20h] [rbp-38h]

  v7 = FdoExt(a1);
  v8 = PdoExt(a2);
  v11 = (__int64)v8;
  if ( *((_BYTE *)v8 + 2740)
    || (PortData = UsbhGetPortData(a1, *((unsigned __int16 *)v8 + 714), v9, v10), (v13 = PortData) == 0) )
  {
    *(_DWORD *)(a5 + 136) = 0;
    qword_140070600 = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a5 + 132));
  }
  else
  {
    Log(a1, 4, 1685219152, PortData, a2);
    v15 = (_QWORD *)(v11 + 1320);
    v16 = *(_QWORD *)(v11 + 1320);
    if ( *(_QWORD *)(v16 + 8) != v11 + 1320 )
      goto LABEL_11;
    v17 = *(_QWORD **)(v11 + 1328);
    if ( (_QWORD *)*v17 != v15 )
      goto LABEL_11;
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v21 = *(unsigned int *)(v11 + 1420);
    *v15 = 0LL;
    *(_QWORD *)(v11 + 1328) = 0LL;
    Log(a1, v14, 1685219122, v11, v21);
    UsbhResetPortData(a1, a2, a5 + 132);
    v18 = (_QWORD *)*((_QWORD *)v7 + 604);
    if ( (_DWORD *)*v18 != v7 + 1206 )
LABEL_11:
      __fastfail(3u);
    *(_QWORD *)(v11 + 1328) = v18;
    *v15 = v7 + 1206;
    *v18 = v15;
    *((_QWORD *)v7 + 604) = v15;
    SET_PDO_HWPNPSTATE(a2, 4, a4);
    UsbhSetPdo_FailIo(a2);
    v7[226] = 1;
    *(_DWORD *)(a5 + 136) = 0;
    qword_140070600 = 0LL;
    v19 = *(_BYTE *)(a5 + 132);
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v19);
    UsbhSignalSyncDeviceReset(a1, a2, v13, 3221225486LL);
    UsbhSshSetPortsBusyState(a1, *(unsigned __int16 *)(v11 + 1428), 1LL, 0LL);
    LOBYTE(v20) = 1;
    UsbhUnlinkPdoDeviceHandle(a1, a2, 2017740851LL, v20);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0x46u,
          (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
    }
    UsbhBusIoInvalidateDeviceRelations(a1, a5);
  }
}
