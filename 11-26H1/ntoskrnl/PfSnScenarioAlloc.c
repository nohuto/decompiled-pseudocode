/*
 * XREFs of PfSnScenarioAlloc @ 0x140B01B50
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PfSnScenarioAlloc()
{
  return ExAllocatePool2(0x100uLL);
}
