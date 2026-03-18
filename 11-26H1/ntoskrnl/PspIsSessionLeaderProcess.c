/*
 * XREFs of PspIsSessionLeaderProcess @ 0x140B144C4
 * Callers:
 *     PsIsSessionLeaderProcess @ 0x1404E80D0 (PsIsSessionLeaderProcess.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspInitializeSessionGlobals @ 0x140B6AFFC (PspInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 PspIsSessionLeaderProcess()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[52].Blink;
}
