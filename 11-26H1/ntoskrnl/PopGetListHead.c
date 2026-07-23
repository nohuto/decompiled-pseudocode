/*
 * XREFs of PopGetListHead @ 0x1409F9EE8
 * Callers:
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1409FA3F0 (PopFindPowerSettingConfiguration.c)
 * Callees:
 *     PopStateIsSessionSpecific @ 0x1409FA3A0 (PopStateIsSessionSpecific.c)
 */

PVOID *__fastcall PopGetListHead(_QWORD *a1)
{
  __int64 v2; // r11
  unsigned int i; // ecx
  GUID *v5; // r9
  __int64 v6; // rdx

  if ( !(unsigned __int8)PopStateIsSessionSpecific(a1) )
    return &PopPowerSettings;
  for ( i = v2; i < 2; ++i )
  {
    v5 = PopSessionSpecificGuids[i];
    v6 = *(_QWORD *)&v5->Data1 - *a1;
    if ( *(_QWORD *)&v5->Data1 == *a1 )
      v6 = *(_QWORD *)v5->Data4 - a1[1];
    if ( !v6 )
      return (PVOID *)((char *)&PopSessionSpecificLists + 16 * i);
  }
  return (PVOID *)v2;
}
