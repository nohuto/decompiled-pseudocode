/*
 * XREFs of WdInstrDestroyInstruction @ 0x1405A5094
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x140597730 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     WdHwDestroyHardwareRegister @ 0x1405A4FCC (WdHwDestroyHardwareRegister.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset_0(a1, 0, 0x40uLL);
}
