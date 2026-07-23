/*
 * XREFs of PpmConvertTimeFrom @ 0x1402F3288
 * Callers:
 *     PpmApplyIdlePolicy @ 0x1402F3220 (PpmApplyIdlePolicy.c)
 *     PpmHvGetRuntimesForProcessor @ 0x1406149D0 (PpmHvGetRuntimesForProcessor.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407E1EF0 (PopIdleWakeConvertIntervalBucketsFrom.c)
 *     PopIdleWakeInitialize @ 0x1407E1F44 (PopIdleWakeInitialize.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AEBAB8 (PpmHvEnableQosEnlightenment.c)
 *     PopInitDripsWakeAccounting @ 0x140CD5A7C (PopInitDripsWakeAccounting.c)
 *     PpmInitIdlePolicy @ 0x140CD6020 (PpmInitIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 */

__int64 __fastcall PpmConvertTimeFrom(__int64 a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
