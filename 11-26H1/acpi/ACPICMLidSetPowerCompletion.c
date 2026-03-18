/*
 * XREFs of ACPICMLidSetPowerCompletion @ 0x14004AC10
 * Callers:
 *     ACPICMLidSetPower @ 0x140049A60 (ACPICMLidSetPower.c)
 * Callees:
 *     ACPIBusIrpSetSystemPower @ 0x14001BB34 (ACPIBusIrpSetSystemPower.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonEvent @ 0x14002F6EC (ACPIButtonEvent.c)
 *     ACPICMButtonSetPower @ 0x14004AD00 (ACPICMButtonSetPower.c)
 */

__int64 __fastcall ACPICMLidSetPowerCompletion(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  struct _DEVICE_OBJECT *v7; // rsi
  __int64 DeviceExtension; // rax
  int v9; // ebp
  int v10; // r14d
  __int64 v11; // r13
  KSPIN_LOCK *v13; // rbx
  KIRQL v14; // al
  int v15; // edi

  v4 = a4[23];
  v7 = *(struct _DEVICE_OBJECT **)(v4 + 40);
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v7);
  v9 = *(_DWORD *)(v4 + 16);
  v10 = 0;
  *(_DWORD *)(v4 + 16) = 0;
  v11 = DeviceExtension;
  if ( a2 < 0 )
    return ACPIBusIrpSetSystemPower(v7, a4, v4);
  v13 = (KSPIN_LOCK *)(DeviceExtension + 184);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
  v15 = *(_BYTE *)(v11 + 192) != 0;
  *(_BYTE *)(v11 + 192) = v9 != 0;
  KeReleaseSpinLock(v13, v14);
  LOBYTE(v10) = v9 != 0;
  if ( v10 != v15 )
    ACPIButtonEvent((ULONG_PTR)v7, v9 != 0 ? -2146697216 : 786432);
  return ACPICMButtonSetPower(v7);
}
