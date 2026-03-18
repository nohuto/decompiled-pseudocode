/*
 * XREFs of UsbhBusPnpStop_Action @ 0x140011CAC
 * Callers:
 *     Usbh_BS_BusRun @ 0x140011EF8 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x140012DBC (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusSuspend @ 0x1400416B0 (Usbh_BS_BusSuspend.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     UsbhDecrementHubIsrWorkerReference @ 0x1400304E4 (UsbhDecrementHubIsrWorkerReference.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1400386BC (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhDisablePortIndicators @ 0x140038C64 (UsbhDisablePortIndicators.c)
 *     UsbhFreeTimerObject @ 0x140038E30 (UsbhFreeTimerObject.c)
 *     UsbhPCE_Close @ 0x140043C48 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x140043D08 (UsbhPCE_HW_Stop.c)
 */

void __fastcall UsbhBusPnpStop_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r9
  __int16 v9; // r12
  unsigned __int16 v10; // bp
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r10d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  void *v21; // rcx
  void *v22; // rcx
  int v23; // [rsp+60h] [rbp+18h] BYREF

  v6 = FdoExt(a1, a2, a3, a4);
  Log(a1, 2048, 1114862657, 0LL, 0LL);
  UsbhDisablePortIndicators(a1);
  Log(a1, 2048, 1346458929, 0LL, 0LL);
  v7 = *(_QWORD *)(v6 + 3056);
  v9 = v8 + 1;
  v10 = v8 + 1;
  if ( *(_BYTE *)(FdoExt(a1, v11, v12, v8) + 2938) >= (unsigned __int8)(v8 + 1) )
  {
    do
    {
      v23 = 0;
      UsbhPCE_HW_Stop(a1, v10, a2);
      UsbhQueryPortState(a1, v10, &v23, 0LL);
      Log(a1, 2048, 1937010756, v7, (unsigned __int16)v23);
      if ( v13 >= 0 && (v23 & 2) != 0 )
        UsbhDisablePort(a1, v7);
      UsbhPCE_Close(a1, v7, a2);
      v7 += 2928LL;
      v10 += v9;
    }
    while ( v10 <= *(unsigned __int8 *)(FdoExt(a1, v14, v15, v16) + 2938) );
  }
  Usbh_BusPnpStop_PdoEvent(a1, a2);
  v20 = FdoExt(a1, v17, v18, v19);
  Log(a1, 4, 1212764791, a1, *(int *)(v20 + 2740));
  UsbhDecrementHubIsrWorkerReference(a1);
  KeWaitForSingleObject((PVOID)(v20 + 2744), Executive, 0, 0, 0LL);
  UsbhFreeTimerObject(a1, v6 + 2720);
  UsbhFreeTimerObject(a1, v6 + 2728);
  UsbhFreeTimerObject(a1, v6 + 2768);
  UsbhFreeTimerObject(a1, v6 + 2776);
  IoFreeIrp(*(PIRP *)(v6 + 2664));
  v21 = *(void **)(v6 + 2672);
  *(_QWORD *)(v6 + 2664) = 0LL;
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(v6 + 2672) = 0LL;
  }
  v22 = *(void **)(v6 + 2680);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(v6 + 2680) = 0LL;
  }
}
