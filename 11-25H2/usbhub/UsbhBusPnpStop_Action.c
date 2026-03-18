/*
 * XREFs of UsbhBusPnpStop_Action @ 0x140001FCC
 * Callers:
 *     Usbh_BS_BusRun @ 0x140001DE4 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x14000D538 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusSuspend @ 0x140041B74 (Usbh_BS_BusSuspend.c)
 * Callees:
 *     UsbhDisablePortIndicators @ 0x1400010C0 (UsbhDisablePortIndicators.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1400011A4 (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhFreeTimerObject @ 0x140001368 (UsbhFreeTimerObject.c)
 *     UsbhDecrementHubIsrWorkerReference @ 0x1400015BC (UsbhDecrementHubIsrWorkerReference.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     UsbhPCE_Close @ 0x140044124 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1400441E4 (UsbhPCE_HW_Stop.c)
 */

void __fastcall UsbhBusPnpStop_Action(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int16 v6; // r9
  __int16 v7; // r12
  unsigned __int16 v8; // bp
  int v9; // r10d
  __int64 v10; // rbx
  void *v11; // rcx
  void *v12; // rcx
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = FdoExt(a1);
  Log(a1, 2048, 1114862657, 0, 0LL);
  UsbhDisablePortIndicators(a1);
  Log(a1, 2048, 1346458929, 0, 0LL);
  v5 = *(_QWORD *)(v4 + 3056);
  v7 = v6 + 1;
  v8 = v6 + 1;
  if ( *(_BYTE *)(FdoExt(a1) + 2938) >= (unsigned __int8)(v6 + 1) )
  {
    do
    {
      v13 = 0;
      UsbhPCE_HW_Stop(a1, v8, a2);
      UsbhQueryPortState(a1, v8, &v13, 0LL);
      Log(a1, 2048, 1937010756, v5, (unsigned __int16)v13);
      if ( v9 >= 0 && (v13 & 2) != 0 )
        UsbhDisablePort(a1, v5);
      UsbhPCE_Close(a1, v5, a2);
      v5 += 2928LL;
      v8 += v7;
    }
    while ( v8 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) );
  }
  Usbh_BusPnpStop_PdoEvent(a1, a2);
  v10 = FdoExt(a1);
  Log(a1, 4, 1212764791, a1, *(int *)(v10 + 2740));
  UsbhDecrementHubIsrWorkerReference(a1);
  KeWaitForSingleObject((PVOID)(v10 + 2744), Executive, 0, 0, 0LL);
  UsbhFreeTimerObject(a1, (__int64 *)(v4 + 2720));
  UsbhFreeTimerObject(a1, (__int64 *)(v4 + 2728));
  UsbhFreeTimerObject(a1, (__int64 *)(v4 + 2768));
  UsbhFreeTimerObject(a1, (__int64 *)(v4 + 2776));
  IoFreeIrp(*(PIRP *)(v4 + 2664));
  v11 = *(void **)(v4 + 2672);
  *(_QWORD *)(v4 + 2664) = 0LL;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v4 + 2672) = 0LL;
  }
  v12 = *(void **)(v4 + 2680);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(v4 + 2680) = 0LL;
  }
}
