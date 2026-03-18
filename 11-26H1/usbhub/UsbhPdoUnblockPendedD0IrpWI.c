/*
 * XREFs of UsbhPdoUnblockPendedD0IrpWI @ 0x14004BC70
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002B710 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14002F1E4 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhReleasePowerContext @ 0x140039970 (UsbhReleasePowerContext.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BA84 (UsbhPdoSetD0_Finish.c)
 */

void __fastcall UsbhPdoUnblockPendedD0IrpWI(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  struct _DEVICE_OBJECT *v6; // rsi
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-18h]

  Log(a1, 16, 1970291760, a3, a2);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 48);
  v7 = PdoExt((__int64)v6);
  v8 = *(_QWORD *)(a3 + 64);
  v9 = (__int64)v7;
  v10 = *(_QWORD *)(v8 + 184);
  UsbhPdoSetD0_Finish(*(_QWORD *)(a3 + 72), v6, v8);
  *(_QWORD *)(v9 + 2560) = MEMORY[0xFFFFF78000000014];
  UsbhDecHubBusy(a1, v11, *(_QWORD **)(a3 + 112));
  v12 = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a3 + 112) = 0LL;
  LODWORD(v13) = 0;
  UsbhEtwLogDevicePowerEvent(v9, v12, &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE, *(_DWORD *)(v10 + 24), v13);
  *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = 0;
  IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
  UsbhDecPdoIoCount((ULONG_PTR)v6, *(_QWORD *)(a3 + 64));
  UsbhReleasePowerContext(a1, a3);
}
