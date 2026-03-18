/*
 * XREFs of ?RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z @ 0x1400EB304
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1400EB09C (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMQueryWakeCapableProperty(struct RIMDEV *a1)
{
  int DeviceInterfacePropertyData; // eax
  int v3; // edx
  unsigned int v4; // ecx
  unsigned __int8 v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = 17;
  v7 = 1;
  v5 = 0;
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  (char *)a1 + 192,
                                  &DEVPKEY_DeviceInterface_HID_WakeScreenOnInputCapable,
                                  0LL,
                                  0LL,
                                  1,
                                  &v5,
                                  &v7,
                                  &v6);
  v3 = *((_DWORD *)a1 + 43);
  if ( DeviceInterfacePropertyData >= 0 )
    v4 = (2 * v5) ^ (v3 ^ (2 * v5)) & 0xFFFFFFFD | 4;
  else
    v4 = v3 & 0xFFFFFFF9 | 2;
  *((_DWORD *)a1 + 43) = v4;
}
