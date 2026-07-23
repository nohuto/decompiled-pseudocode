/*
 * XREFs of WdInstrDestroyInstruction @ 0x1405A78A4
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x140599EB0 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     WdHwDestroyHardwareRegister @ 0x1405A77DC (WdHwDestroyHardwareRegister.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset_0(a1, 0, 0x40uLL);
}
