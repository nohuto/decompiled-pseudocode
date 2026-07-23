/*
 * XREFs of PspIsSessionLeaderProcess @ 0x140B165C4
 * Callers:
 *     PsIsSessionLeaderProcess @ 0x1404E1490 (PsIsSessionLeaderProcess.c)
 *     PspInitializeSessionGlobals @ 0x140A098DC (PspInitializeSessionGlobals.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 PspIsSessionLeaderProcess()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[52].Blink;
}
