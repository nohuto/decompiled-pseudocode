/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140CAA4D0
 * Callers:
 *     ExInitializeBootStructures @ 0x140576458 (ExInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall ExpInitializeBootEnvironment(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      LOBYTE(v2) = IoAddTriageDumpDataBlock((ULONG)&ExpSysDbgLock.SchedulerApcFill5[48], (PVOID)0x20);
  }
  else
  {
    *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
    *(_OWORD *)&ExpSysDbgLock.SchedulerApcFill5[48] = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
    v2 = *(_QWORD *)(a1 + 240);
    ExpSysDbgLock.SchedulerApc.SystemArgument2 = *(PVOID *)(v2 + 2648);
  }
  return v2;
}
