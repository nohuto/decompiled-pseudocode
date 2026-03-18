/*
 * XREFs of UsbhFreePortChangeQueueObject @ 0x140001DA0
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1400011C0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFlushPortChangeQueue @ 0x140001CC8 (UsbhFlushPortChangeQueue.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140003290 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x140005470 (Usbh_PCE_Disable_Action.c)
 *     UsbhCancelQueuedTimeout @ 0x140023F64 (UsbhCancelQueuedTimeout.c)
 *     UsbhFlushQueuedDriverReset @ 0x140046D48 (UsbhFlushQueuedDriverReset.c)
 * Callees:
 *     UsbhSignalPauseEvent @ 0x140001008 (UsbhSignalPauseEvent.c)
 *     UsbhiSignalResumeEvent @ 0x14000B4D8 (UsbhiSignalResumeEvent.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhiSignalSuspendEvent @ 0x14002394C (UsbhiSignalSuspendEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140043540 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1400499D8 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall UsbhFreePortChangeQueueObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bp
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // ecx
  __int16 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8

  v5 = a4;
  v6 = *(unsigned __int16 *)(a2 + 4);
  v7 = a2;
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
        a2 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(a2 + v12) = 1129343349;
        *(_QWORD *)(a2 + v12 + 8) = 0LL;
        *(_QWORD *)(a2 + v12 + 16) = 0LL;
        *(_QWORD *)(a2 + v12 + 24) = v6;
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
      *(_WORD *)(v7 + 4));
  FdoExt(a1, a2, v6, a4);
  v14 = *(_DWORD *)(a3 + 8);
  v15 = *(_WORD *)(v7 + 420);
  v16 = ((unsigned __int8)*(_DWORD *)(v7 + 856) + 1) & 0xF;
  v17 = *(_DWORD *)(v7 + 400);
  *(_DWORD *)(v7 + 856) = v16;
  v18 = 32 * (v16 + 27);
  *(_DWORD *)(v18 + v7) = v17;
  *(_DWORD *)(v18 + v7 + 4) = v14;
  *(_WORD *)(v18 + v7 + 18) = 256;
  *(_WORD *)(v18 + v7 + 16) = v15;
  *(_QWORD *)(v18 + v7 + 8) = 0LL;
  *(_DWORD *)(v18 + v7 + 20) = 0;
  *(_DWORD *)(v18 + v7 + 28) = 1;
  if ( v5 )
  {
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalResumeEvent(a1, v7);
    if ( *(_DWORD *)(a3 + 8) == 0x80000 )
      UsbhSignalPauseEvent(a1, v7);
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalSuspendEvent(a1, v7);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
    if ( v5 )
      Usbh_iSignalSyncDeviceReset(a1, *(_QWORD *)(a3 + 40), v7);
  }
  else if ( *(_DWORD *)(a3 + 48) == 2 )
  {
    v24 = *(_QWORD *)(a3 + 40);
    LOBYTE(v13) = v5;
    *(_QWORD *)(a3 + 40) = 0LL;
    UsbhFreePortChangeQueueTimeoutObject(a1, v7, v24, v13);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    UsbhUnlatchPdo(a1, *(_QWORD *)(a3 + 40), a3, 1230065731LL);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
        v21 = *(_DWORD *)(v19 + 884);
        v22 = *(_QWORD *)(v19 + 888);
        v23 = 32LL * ((v20 - 1) & v21);
        *(_DWORD *)(v23 + v22) = 1146122854;
        *(_QWORD *)(v23 + v22 + 8) = 0LL;
        *(_QWORD *)(v23 + v22 + 16) = v7;
        *(_QWORD *)(v23 + v22 + 24) = a3;
      }
    }
  }
  ExFreePoolWithTag((PVOID)a3, 0);
}
