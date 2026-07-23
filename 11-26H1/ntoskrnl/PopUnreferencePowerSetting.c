/*
 * XREFs of PopUnreferencePowerSetting @ 0x1409FBE7C
 * Callers:
 *     PopFreeRegistration @ 0x1407D2738 (PopFreeRegistration.c)
 *     PopMarshalSettingValues @ 0x1409F84C8 (PopMarshalSettingValues.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopCallPowerSettingCallback @ 0x1409FBD3C (PopCallPowerSettingCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}
