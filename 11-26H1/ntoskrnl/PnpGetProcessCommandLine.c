/*
 * XREFs of PnpGetProcessCommandLine @ 0x140B3F148
 * Callers:
 *     PnpLogVetoInformation @ 0x140B45874 (PnpLogVetoInformation.c)
 * Callees:
 *     PsQueryProcessCommandLine @ 0x1404B54B0 (PsQueryProcessCommandLine.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

unsigned __int16 *__fastcall PnpGetProcessCommandLine(PRKPROCESS PROCESS)
{
  unsigned __int16 *Pool2; // rbx
  int ProcessCommandLine; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v5) = 0;
  Pool2 = 0LL;
  ProcessCommandLine = PsQueryProcessCommandLine(PROCESS, 0LL, 0, 0, (unsigned int *)&v5);
  if ( ProcessCommandLine == -1073741820 )
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return Pool2;
    ProcessCommandLine = PsQueryProcessCommandLine(PROCESS, Pool2, v5, 0, (unsigned int *)&v5);
  }
  if ( ProcessCommandLine < 0 && Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x4F706E50u);
    return 0LL;
  }
  return Pool2;
}
