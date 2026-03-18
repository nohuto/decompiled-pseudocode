/*
 * XREFs of ConPrompt @ 0x14006E910
 * Callers:
 *     Debugger @ 0x14006F69C (Debugger.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

ULONG __fastcall ConPrompt(__int64 a1, CHAR *a2)
{
  if ( (gDebugger & 0xFFFDFFFF) != 0 && KeGetCurrentIrql() < 2u )
  {
    _InterlockedOr(&gDebugger, 0x20000u);
    DbgSetDebugFilterState(0x19u, 0xFFFFFFFF, 1u);
  }
  if ( qword_14008ED28 )
    return ((__int64 (__fastcall *)(const CHAR *, CHAR *, __int64, __int64))qword_14008ED28)(
             "\nAMLI(? for help)-> ",
             a2,
             256LL,
             qword_14008ED30);
  else
    return DbgPrompt("\nAMLI(? for help)-> ", a2, 0x100u);
}
