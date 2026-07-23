/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1404C9E0C
 * Callers:
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x1404C9DC0 (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1404DCD70 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int8 *v4; // rcx
  __int64 result; // rax
  unsigned __int8 *p_WaitType; // rcx

  v2 = MEMORY[0xFFFFF78000000008];
  v3 = 30LL;
  if ( a2 )
  {
    if ( PopDirectedDripsDiagLock.ExpectedRunTime != 30 )
      PopDirectedDripsDiagLock.Queue = (_DISPATCHER_HEADER *volatile)MEMORY[0xFFFFF78000000008];
    if ( PopDirectedDripsDiagLock.CurrentRunTime )
      PopDirectedDripsDiagLock.WaitListEntry.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    p_WaitType = &PopDirectedDripsDiagLock.WaitBlock[3].WaitType;
    do
    {
      result = *((unsigned int *)p_WaitType - 98);
      *(_DWORD *)p_WaitType += result;
      p_WaitType += 4;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    if ( PopDirectedDripsDiagLock.ExpectedRunTime != 30 )
    {
      *((_QWORD *)&PopDirectedDripsDiagLock.Teb + PopDirectedDripsDiagLock.ExpectedRunTime) += MEMORY[0xFFFFF78000000008]
                                                                                             - (unsigned __int64)PopDirectedDripsDiagLock.Queue;
      PopDirectedDripsDiagLock.Queue = 0LL;
    }
    if ( PopDirectedDripsDiagLock.CurrentRunTime )
    {
      PopDirectedDripsDiagLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)PopDirectedDripsDiagLock.WaitListEntry.Flink
                                                                          + v2
                                                                          - (unsigned __int64)PopDirectedDripsDiagLock.WaitListEntry.Blink);
      PopDirectedDripsDiagLock.216 = ($9F5D72EF54BCA79AE5AD03946D2C2FEF)(unsigned __int64)PopDirectedDripsDiagLock.WaitListEntry.Flink;
    }
    v4 = &PopDirectedDripsDiagLock.WaitBlock[3].WaitType;
    do
    {
      result = *((unsigned int *)v4 - 98);
      *(_DWORD *)v4 -= result;
      v4 += 4;
      --v3;
    }
    while ( v3 );
  }
  LOBYTE(PopDirectedDripsDiagLock.WaitBlockList) = a2;
  return result;
}
