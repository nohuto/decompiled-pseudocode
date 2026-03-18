/*
 * XREFs of ACPIPepQueueWorker @ 0x1400CD730
 * Callers:
 *     ACPIPepEffectivePowerModeCallback @ 0x1400B4210 (ACPIPepEffectivePowerModeCallback.c)
 *     ACPIPepWnfCallback @ 0x1400B4A20 (ACPIPepWnfCallback.c)
 *     ACPIPepPowerSettingChangeCallback @ 0x1400CD590 (ACPIPepPowerSettingChangeCallback.c)
 * Callees:
 *     ACPISetDeviceWorker @ 0x14002AAD4 (ACPISetDeviceWorker.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall ACPIPepQueueWorker(__int64 a1)
{
  __int128 InputBuffer; // [rsp+30h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 121) )
  {
    *(_BYTE *)(a1 + 121) = 1;
    InputBuffer = 0LL;
    LODWORD(InputBuffer) = 40;
    DWORD2(InputBuffer) = 0;
    BYTE12(InputBuffer) = 1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, 0LL, 0);
    ACPISetDeviceWorker(a1 - 160, 0);
  }
}
