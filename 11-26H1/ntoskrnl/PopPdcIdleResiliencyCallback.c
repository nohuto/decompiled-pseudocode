/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x140A3D5AC
 * Callers:
 *     PdcPoResiliencyClient @ 0x140A3D0C0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14021B058 (PpmQueryTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14042D72C (PopAccumulateNonActivatedCpuTime.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 */

void __fastcall __noreturn PopPdcIdleResiliencyCallback(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = (unsigned __int8)a2;
  PopAcquirePolicyLock(a1, a2);
  unk_140F10DC0 = v2;
  v3 = v2;
  PopSetPowerSettingValue(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 0xFFFFFFFFLL, 0LL, 4LL, &v3);
  PopSetPowerSettingValue(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 0xFFFFFFFFLL, 1LL, 4LL, &v3);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(v2, &qword_140E26FA0, &qword_140E26FA8);
  PpmQueryTime();
}
