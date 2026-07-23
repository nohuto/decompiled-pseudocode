/*
 * XREFs of PopPulseSystemIdleEvent @ 0x1409F7CDC
 * Callers:
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 *     PopUpdateLastUserInputTime @ 0x1409F794C (PopUpdateLastUserInputTime.c)
 *     PopProcessPendingSystemIdleResets @ 0x1409F79A4 (PopProcessPendingSystemIdleResets.c)
 *     PopInitializeSystemIdleDetection @ 0x140CD90F8 (PopInitializeSystemIdleDetection.c)
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
    *((_QWORD *)&unk_140E0B770 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
