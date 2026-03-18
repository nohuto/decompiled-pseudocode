/*
 * XREFs of KiDecodeTolerableDelayValue @ 0x1403ACEEC
 * Callers:
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403AC190 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1403AC590 (KeSetTimer.c)
 *     KiTimerWaitTest @ 0x1403ACF4C (KiTimerWaitTest.c)
 *     KeCancelTimerInternal @ 0x1404B95AC (KeCancelTimerInternal.c)
 * Callees:
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403AE1FC (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiDecodeTolerableDelayValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  char v5; // dl
  char v6; // cl

  v4 = (unsigned __int8)a1;
  if ( !(unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline(a1, a2, a3, a4) )
    return (unsigned int)(v4 << 18);
  v5 = ((unsigned __int8)v4 >> 3) & 7;
  v6 = v5 + 2;
  if ( !v5 )
    v6 = 3;
  return 10000 * ((unsigned __int16)((v4 & 7 | (v5 != 0 ? 8 : 0)) << v6) >> 3);
}
