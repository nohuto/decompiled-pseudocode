/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1405BABF0
 * Callers:
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 *     PopHiberCheckResume @ 0x140C008A0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140C04024 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x14048DA10 (HvlpSetRegister64.c)
 */

void __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  if ( (HvlpFlags & 0x40000) != 0 )
    HvlpSetRegister64(624, a1 != 0);
}
