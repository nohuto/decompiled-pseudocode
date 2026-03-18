/*
 * XREFs of PopPulseSystemIdleEvent @ 0x140A3C2BC
 * Callers:
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 *     PopUpdateLastUserInputTime @ 0x140A3BF2C (PopUpdateLastUserInputTime.c)
 *     PopProcessPendingSystemIdleResets @ 0x140A3BF84 (PopProcessPendingSystemIdleResets.c)
 *     PopInitializeSystemIdleDetection @ 0x140CD2F58 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPulseSystemIdleEvent(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1 > 3 )
    return (unsigned int)-1073741811;
  else
    *((_QWORD *)&unk_140E0B760 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
