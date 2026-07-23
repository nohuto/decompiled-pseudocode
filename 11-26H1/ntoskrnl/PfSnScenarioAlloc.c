/*
 * XREFs of PfSnScenarioAlloc @ 0x140B03880
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PfSnScenarioAlloc()
{
  return ExAllocatePool2(0x100uLL);
}
