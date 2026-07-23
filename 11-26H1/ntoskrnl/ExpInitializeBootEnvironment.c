/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140CB04D0
 * Callers:
 *     ExInitializeBootStructures @ 0x140578908 (ExInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall ExpInitializeBootEnvironment(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      LOBYTE(v2) = IoAddTriageDumpDataBlock((ULONG)&ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Blink, (PVOID)0x20);
  }
  else
  {
    LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
    *(_OWORD *)&ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Blink = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
    v2 = *(_QWORD *)(a1 + 240);
    ExpSysDbgLock.MutantListHead.Flink = *(struct _LIST_ENTRY **)(v2 + 2648);
  }
  return v2;
}
