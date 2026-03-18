/*
 * XREFs of MiUseThreads @ 0x1403C3644
 * Callers:
 *     MiProcessPageGroupInfo @ 0x1403C3B34 (MiProcessPageGroupInfo.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406EE130 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiGroupZeroHugeRange @ 0x140705024 (MiGroupZeroHugeRange.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x14070D2EC (MiChangePageAttributeAndZeroBatch.c)
 *     MiCreateDynamicPfns @ 0x140865E98 (MiCreateDynamicPfns.c)
 * Callees:
 *     KeWaitForGate @ 0x1403C26D0 (KeWaitForGate.c)
 *     MiInitializeThreadGroup @ 0x140501014 (MiInitializeThreadGroup.c)
 *     MiDoParentWork @ 0x140503998 (MiDoParentWork.c)
 *     MiLaunchChildWorkers @ 0x1405172B8 (MiLaunchChildWorkers.c)
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
