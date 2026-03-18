/*
 * XREFs of PiDevCfgConfigureDeviceDriverConfiguration @ 0x14098C258
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14098B138 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x14098C5F0 (PiDevCfgConfigureDeviceDriver.c)
 * Callees:
 *     PiDevCfgConfigureDeviceKeys @ 0x140988AF0 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x14098BB38 (PiDevCfgCopyObjectProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriverConfiguration(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 result; // rax
  unsigned int v13; // [rsp+20h] [rbp-48h]

  if ( (a4 & 1) == 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  result = PiDevCfgCopyObjectProperties(
             *(__int64 *)&PiPnpRtlCtx,
             0,
             0,
             (__int64)a3,
             v13,
             *(_QWORD *)(a1 + 48),
             1u,
             *(void **)(a2 + 16),
             a5,
             a6,
             (*(_DWORD *)a2 & 1u) << 17);
  if ( (int)result >= 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  return result;
}
