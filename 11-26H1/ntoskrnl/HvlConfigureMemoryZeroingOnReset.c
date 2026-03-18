/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1405B8380
 * Callers:
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 *     PopHiberCheckResume @ 0x140BFA8A0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140BFDFD4 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140493EC0 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624, a1 != 0);
  return result;
}
