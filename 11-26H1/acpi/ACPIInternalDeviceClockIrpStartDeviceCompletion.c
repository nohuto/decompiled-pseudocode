/*
 * XREFs of ACPIInternalDeviceClockIrpStartDeviceCompletion @ 0x140061C00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalWaitWakeLoop @ 0x140061C80 (ACPIInternalWaitWakeLoop.c)
 */

void __fastcall ACPIInternalDeviceClockIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  int v4; // eax
  POWER_STATE v5; // r8d
  struct _DEVICE_OBJECT *v6; // rcx
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+30h] [rbp-18h] BYREF

  HIDWORD(IoStatus.Pointer) = 0;
  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 368) = 2;
    if ( (*(_QWORD *)&v4 & 0x10000LL) != 0 )
    {
      v5.SystemState = *(_SYSTEM_POWER_STATE *)(a1 + 536);
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 768);
      IoStatus.Status = 0;
      IoStatus.Information = 0LL;
      ACPIInternalWaitWakeLoop(v6, 0, v5, 0LL, &IoStatus);
    }
  }
  IofCompleteRequest(a2, 0);
}
