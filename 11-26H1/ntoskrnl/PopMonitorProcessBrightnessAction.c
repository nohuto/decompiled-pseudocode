/*
 * XREFs of PopMonitorProcessBrightnessAction @ 0x140B27220
 * Callers:
 *     PopMonitorProcessLoop @ 0x140B27108 (PopMonitorProcessLoop.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PopMonitorProcessBrightnessAction(int a1, int a2)
{
  int v3; // ecx
  GUID *v4; // rcx
  __int64 result; // rax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  if ( a1 )
  {
    v3 = a1 - 2;
    if ( !v3 )
    {
      memset_0(Src, 0, 0x48uLL);
      Src[0] = 11;
      Src[2] = a2;
      return PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    }
    if ( v3 != 1 )
      return result;
    v4 = &GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS;
  }
  else
  {
    v4 = &GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
  }
  return PopSetPowerSettingValueAcDc((__int64)v4, 4u, (__int64)&v7);
}
