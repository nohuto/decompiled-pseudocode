/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x14077C964
 * Callers:
 *     PiDevCfgResetDeviceKeyCallback @ 0x1407ADFC0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140A46004 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140A496A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, a5, 0LL, a6);
}
