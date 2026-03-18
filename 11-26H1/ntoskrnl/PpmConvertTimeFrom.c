/*
 * XREFs of PpmConvertTimeFrom @ 0x1403E63A8
 * Callers:
 *     PpmApplyIdlePolicy @ 0x1403E6340 (PpmApplyIdlePolicy.c)
 *     PpmHvGetRuntimesForProcessor @ 0x140611B90 (PpmHvGetRuntimesForProcessor.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407DD8C0 (PopIdleWakeConvertIntervalBucketsFrom.c)
 *     PopIdleWakeInitialize @ 0x1407DD914 (PopIdleWakeInitialize.c)
 *     PpmHvEnableQosEnlightenment @ 0x140A9CE18 (PpmHvEnableQosEnlightenment.c)
 *     PopInitDripsWakeAccounting @ 0x140CCF8CC (PopInitDripsWakeAccounting.c)
 *     PpmInitIdlePolicy @ 0x140CCFE78 (PpmInitIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x1403E63D0 (PpmConvertTime.c)
 */

__int64 __fastcall PpmConvertTimeFrom(__int64 a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
