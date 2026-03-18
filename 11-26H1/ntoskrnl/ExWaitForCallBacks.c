/*
 * XREFs of ExWaitForCallBacks @ 0x140B5EF7C
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1405CB4D0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405E4820 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1406CD094 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
