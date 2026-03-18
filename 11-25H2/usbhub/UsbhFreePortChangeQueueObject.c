/*
 * XREFs of UsbhFreePortChangeQueueObject @ 0x140001AF4
 * Callers:
 *     UsbhFlushPortChangeQueue @ 0x140001A1C (UsbhFlushPortChangeQueue.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x140002204 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140026210 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1400283A0 (Usbh_PCE_Disable_Action.c)
 *     UsbhCancelQueuedTimeout @ 0x140039E24 (UsbhCancelQueuedTimeout.c)
 *     UsbhFlushQueuedDriverReset @ 0x140047204 (UsbhFlushQueuedDriverReset.c)
 * Callees:
 *     UsbhSignalPauseEvent @ 0x140001668 (UsbhSignalPauseEvent.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     UsbhiSignalResumeEvent @ 0x1400130A0 (UsbhiSignalResumeEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x14001EB0C (UsbhiSignalSuspendEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140043A1C (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x140049E24 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall UsbhFreePortChangeQueueObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // ecx
  __int16 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1129343349;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = v6;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      54,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  FdoExt(a1);
  v12 = *(_DWORD *)(a3 + 8);
  v13 = *(_WORD *)(a2 + 420);
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v15 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v14;
  v16 = a2 + 32 * (v14 + 27);
  *(_DWORD *)v16 = v15;
  *(_DWORD *)(v16 + 4) = v12;
  *(_WORD *)(v16 + 18) = 256;
  *(_WORD *)(v16 + 16) = v13;
  *(_QWORD *)(v16 + 8) = 0LL;
  *(_DWORD *)(v16 + 20) = 0;
  *(_DWORD *)(v16 + 28) = 1;
  if ( a4 )
  {
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalResumeEvent(a1, a2);
    if ( *(_DWORD *)(a3 + 8) == 0x80000 )
      UsbhSignalPauseEvent(a1, a2);
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalSuspendEvent(a1, a2);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
    if ( a4 )
      Usbh_iSignalSyncDeviceReset(a1, *(_QWORD *)(a3 + 40), a2);
  }
  else if ( *(_DWORD *)(a3 + 48) == 2 )
  {
    v19 = *(_QWORD *)(a3 + 40);
    LOBYTE(v11) = a4;
    *(_QWORD *)(a3 + 40) = 0LL;
    UsbhFreePortChangeQueueTimeoutObject(a1, a2, v19, v11);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    UsbhUnlatchPdo(a1, *(_QWORD *)(a3 + 40), a3, 1230065731LL);
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
        *(_DWORD *)v18 = 1146122854;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = a2;
        *(_QWORD *)(v18 + 24) = a3;
      }
    }
  }
  ExFreePoolWithTag((PVOID)a3, 0);
}
