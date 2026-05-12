/*
 * XREFs of RaidUnitProcessAsyncNotification @ 0x1400A8A68
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall RaidUnitProcessAsyncNotification(__int64 a1, int a2, PIO_WORKITEM *a3)
{
  unsigned int v4; // ebx
  __int64 *Unit; // rax

  v4 = 0;
  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit && (Unit[63] & 4) != 0 && (Unit[244] & 4) != 0 )
  {
    if ( a3 && *a3 )
      IoQueueWorkItem(*a3, (PIO_WORKITEM_ROUTINE)RaUnitAsyncNotificationWorkItemRoutine, CriticalWorkQueue, a3);
    else
      return (unsigned int)-1056964602;
  }
  else
  {
    return (unsigned int)-1056964601;
  }
  return v4;
}
