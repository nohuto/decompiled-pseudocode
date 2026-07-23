/*
 * XREFs of MiUseThreads @ 0x1403CD544
 * Callers:
 *     MiProcessPageGroupInfo @ 0x1403CDA40 (MiProcessPageGroupInfo.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiGroupZeroHugeRange @ 0x140709CF4 (MiGroupZeroHugeRange.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140711F9C (MiChangePageAttributeAndZeroBatch.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 * Callees:
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     MiInitializeThreadGroup @ 0x1404FA804 (MiInitializeThreadGroup.c)
 *     MiDoParentWork @ 0x1404FD268 (MiDoParentWork.c)
 *     MiLaunchChildWorkers @ 0x140510D28 (MiLaunchChildWorkers.c)
 */

__int64 __fastcall MiUseThreads(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax

  MiInitializeThreadGroup();
  if ( *(_DWORD *)(a1 + 32) )
    v2 = MiLaunchChildWorkers(a1);
  else
    v2 = 0;
  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x20) != 0 || !*(_DWORD *)(a1 + 32) )
    result = MiDoParentWork(a1);
  if ( v2 )
    return KeWaitForGate(a1 + 96, 0LL);
  return result;
}
