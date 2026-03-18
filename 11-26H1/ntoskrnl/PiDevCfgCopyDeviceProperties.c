/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x140779A34
 * Callers:
 *     PiDevCfgResetDeviceKeyCallback @ 0x1407AAFA0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14098B8E4 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140B3E4A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, a5, 0LL, a6);
}
