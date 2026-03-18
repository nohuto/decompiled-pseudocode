/*
 * XREFs of HUBDSM_SettingVersionFlagInEnumerating @ 0x140024AA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_SetDeviceVersionFlag @ 0x1400338D8 (HUBMISC_SetDeviceVersionFlag.c)
 */

__int64 __fastcall HUBDSM_SettingVersionFlagInEnumerating(__int64 a1)
{
  HUBMISC_SetDeviceVersionFlag(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
