/*
 * XREFs of PpmUpdateProcessorPolicyCallback @ 0x1404E2640
 * Callers:
 *     <none>
 * Callees:
 *     PpmUpdateTargetProcessorPolicy @ 0x1404E266C (PpmUpdateTargetProcessorPolicy.c)
 */

__int64 __fastcall PpmUpdateProcessorPolicyCallback(__int64 a1, __int64 a2, __int64 a3)
{
  PpmUpdateTargetProcessorPolicy(*(_QWORD *)(a1 + 35264), *(_QWORD *)(a1 + 35272), a2, a3);
  return 0LL;
}
