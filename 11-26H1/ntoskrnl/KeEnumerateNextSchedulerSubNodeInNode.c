/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x140470DF0
 * Callers:
 *     KeQueryNodeActiveAffinity2 @ 0x14050E130 (KeQueryNodeActiveAffinity2.c)
 *     KeUpdateProcessorRestrictions @ 0x1405E9610 (KeUpdateProcessorRestrictions.c)
 *     KiDoesNodeIntersectAffinity @ 0x1405EF7EC (KiDoesNodeIntersectAffinity.c)
 *     PpmParkRegisterParking @ 0x14060FE58 (PpmParkRegisterParking.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A67EF0 (KiSynchNumaCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
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
