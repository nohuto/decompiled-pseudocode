/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1404D03DC
 * Callers:
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x1404D0390 (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1404E37D0 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  _KPROCESS **v4; // rcx
  __int64 result; // rax
  _KPROCESS **p_Process; // rcx

  v2 = MEMORY[0xFFFFF78000000008];
  v3 = 30LL;
  if ( a2 )
  {
    if ( HIDWORD(PopDirectedDripsUmLock.Queue) != 30 )
      *(_QWORD *)&PopDirectedDripsUmLock.WaitBlockFill11[64] = MEMORY[0xFFFFF78000000008];
    if ( LODWORD(PopDirectedDripsUmLock.Queue) )
      PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    p_Process = &PopDirectedDripsUmLock.SavedApcState.Process;
    do
    {
      result = *((unsigned int *)p_Process - 98);
      *(_DWORD *)p_Process += result;
      p_Process = (_KPROCESS **)((char *)p_Process + 4);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    if ( HIDWORD(PopDirectedDripsUmLock.Queue) != 30 )
    {
      *((_QWORD *)&PopDirectedDripsUmLock.WaitBlock[1].Thread + HIDWORD(PopDirectedDripsUmLock.Queue)) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)&PopDirectedDripsUmLock.WaitBlockFill11[64];
      *(_QWORD *)&PopDirectedDripsUmLock.WaitBlockFill11[64] = 0LL;
    }
    if ( LODWORD(PopDirectedDripsUmLock.Queue) )
    {
      PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink
                                                                                     + v2
                                                                                     - (unsigned __int64)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Blink);
      *(_OWORD *)&PopDirectedDripsUmLock.WaitBlockFill11[48] = (unsigned __int64)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink;
    }
    v4 = &PopDirectedDripsUmLock.SavedApcState.Process;
    do
    {
      result = *((unsigned int *)v4 - 98);
      *(_DWORD *)v4 -= result;
      v4 = (_KPROCESS **)((char *)v4 + 4);
      --v3;
    }
    while ( v3 );
  }
  PopDirectedDripsUmLock.WaitBlockFill5[40] = a2;
  return result;
}
