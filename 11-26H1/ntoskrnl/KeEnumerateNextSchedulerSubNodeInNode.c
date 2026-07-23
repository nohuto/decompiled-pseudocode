/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x14046A570
 * Callers:
 *     KeQueryNodeActiveAffinity2 @ 0x140507BA0 (KeQueryNodeActiveAffinity2.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 *     KiDoesNodeIntersectAffinity @ 0x1405F215C (KiDoesNodeIntersectAffinity.c)
 *     PpmParkRegisterParking @ 0x1406130BC (PpmParkRegisterParking.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A74EC0 (KiSynchNumaCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140CCFB30 (KiCountNodeZeroSetBitsGroupAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextSchedulerSubNodeInNode(unsigned int *a1, _QWORD *a2)
{
  __int64 v2; // r10
  __int64 result; // rax
  __int64 v4; // r9

  v2 = a1[2];
  if ( (unsigned int)v2 >= *(_DWORD *)(*(_QWORD *)a1 + 48LL) )
    return 2147483674LL;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 8 * v2);
  a1[2] = v2 + 1;
  result = 0LL;
  *a2 = v4;
  return result;
}
