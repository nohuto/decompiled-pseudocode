/*
 * XREFs of DeviceSlot_Initialize @ 0x1400071AC
 * Callers:
 *     DeviceSlot_D0Entry @ 0x140007150 (DeviceSlot_D0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1400469B8 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     XilCoreDeviceSlot_Initialize @ 0x1400075D4 (XilCoreDeviceSlot_Initialize.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x140046F18 (XilDeviceSlot_InitializeSecureResources.c)
 */

__int64 __fastcall DeviceSlot_Initialize(__int64 a1)
{
  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 3221225666LL;
  if ( *(_BYTE *)(a1 + 80) )
    return XilDeviceSlot_InitializeSecureResources();
  return XilCoreDeviceSlot_Initialize();
}
