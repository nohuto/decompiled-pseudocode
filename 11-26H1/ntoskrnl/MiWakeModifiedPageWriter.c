/*
 * XREFs of MiWakeModifiedPageWriter @ 0x1403E4038
 * Callers:
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiFlushAllPagesWorker @ 0x1403E3C5C (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1403E3DAC (MiFlushAllStoreSwapPages.c)
 *     MiAdjustModifiedPageLoad @ 0x1404B5B78 (MiAdjustModifiedPageLoad.c)
 *     MiObtainFreePages @ 0x140533DBC (MiObtainFreePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 820) )
      KeSetEvent((PRKEVENT)(a1 + 824), 0, 0);
    if ( *(_DWORD *)(a1 + 848) != 20 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1080)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1072), 20LL, v4);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1080));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 856) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 864), 0, 0);
}
