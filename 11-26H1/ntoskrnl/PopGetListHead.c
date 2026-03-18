/*
 * XREFs of PopGetListHead @ 0x140A3E4C8
 * Callers:
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 * Callees:
 *     PopStateIsSessionSpecific @ 0x140A3E980 (PopStateIsSessionSpecific.c)
 */

volatile unsigned int *__fastcall PopGetListHead(_QWORD *a1)
{
  __int64 v2; // r11
  unsigned int i; // ecx
  GUID *v5; // r9
  __int64 v6; // rdx

  if ( !(unsigned __int8)PopStateIsSessionSpecific(a1) )
    return &stru_140F10828.ThreadTimerDelay;
  for ( i = v2; i < 2; ++i )
  {
    v5 = PopSessionSpecificGuids[i];
    v6 = *(_QWORD *)&v5->Data1 - *a1;
    if ( *(_QWORD *)&v5->Data1 == *a1 )
      v6 = *(_QWORD *)v5->Data4 - a1[1];
    if ( !v6 )
      return &stru_140F10828.ReservedPreviousReadyTimeValue + 4 * i;
  }
  return (volatile unsigned int *)v2;
}
