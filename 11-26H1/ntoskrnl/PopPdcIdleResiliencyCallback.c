/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x1409F8FCC
 * Callers:
 *     PdcPoResiliencyClient @ 0x1409F8AE0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14021C9E8 (PpmQueryTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140421DFC (PopAccumulateNonActivatedCpuTime.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 */

void __fastcall __noreturn PopPdcIdleResiliencyCallback(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = (unsigned __int8)a2;
  PopAcquirePolicyLock(a1, a2);
  PopPdcIdleResiliency = v2;
  v3 = v2;
  PopSetPowerSettingValue(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 0xFFFFFFFFLL, 0LL, 4LL, &v3);
  PopSetPowerSettingValue(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 0xFFFFFFFFLL, 1LL, 4LL, &v3);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(v2, &qword_140E270E0, &qword_140E270E8);
  PpmQueryTime();
}
