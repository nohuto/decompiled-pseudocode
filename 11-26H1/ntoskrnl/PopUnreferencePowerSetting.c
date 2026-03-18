/*
 * XREFs of PopUnreferencePowerSetting @ 0x140A4045C
 * Callers:
 *     PopFreeRegistration @ 0x1407CF698 (PopFreeRegistration.c)
 *     PopMarshalSettingValues @ 0x140A3CAA8 (PopMarshalSettingValues.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopCallPowerSettingCallback @ 0x140A4031C (PopCallPowerSettingCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}
