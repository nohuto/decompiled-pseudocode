/*
 * XREFs of PnpCallAddDevice @ 0x14096F278
 * Callers:
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x14049B304 (PnpSetDeviceAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x1404E12E4 (PpvUtilCallAddDevice.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x140526B50 (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1405CCEE4 (McTemplateK0q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PnpEnableWatchdog @ 0x140A19C80 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x140A1B0D4 (PnpDisableWatchdog.c)
 */

__int64 __fastcall PnpCallAddDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // eax
  int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+40h] [rbp-78h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  PreviousAffinity = 0LL;
  v13[0] = 0LL;
  if ( (byte_140EF412B & 0x10) != 0 )
    McTemplateK0qhzr1z_EtwWriteTransfer(
      *(_WORD *)(a2 + 56) >> 1,
      a2,
      a3,
      a4,
      *(_WORD *)(a2 + 56) >> 1,
      *(_QWORD *)(a2 + 64),
      *(const wchar_t **)(a1 + 48));
  v6 = PnpSetDeviceAffinityThread(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v13[1] = a1;
  v13[2] = a2;
  v7 = v6;
  v8 = *(_QWORD *)(a2 + 48);
  v13[3] = KeGetCurrentThread();
  v9 = PnpEnableWatchdog(4LL, v13, v8 + 24);
  v10 = PpvUtilCallAddDevice(*(PDEVICE_OBJECT *)(a1 + 32), (struct _DRIVER_OBJECT *)a2);
  if ( v9 )
    PnpDisableWatchdog(v9);
  if ( v7 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140EF412B & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      MS_KernelPnP_Provider_Context,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceAdd_Stop,
      v11,
      v10);
  return v10;
}
