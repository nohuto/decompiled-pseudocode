/*
 * XREFs of PoSetUserPresent @ 0x1404382E0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     PopDiagTraceSetSystemState @ 0x1404383F0 (PopDiagTraceSetSystemState.c)
 *     PopUserPresentSet @ 0x1404384B4 (PopUserPresentSet.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(unsigned int a1)
{
  char v2; // bl
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock();
    v2 = 1;
  }
  if ( (xmmword_140FBFC10 & 0x8000) != 0 )
  {
    v4[0] = 0LL;
    v4[1] = 0LL;
    EtwTraceKernelEvent((int)v4, 1, 0x80008000, 4673, 5249026);
  }
  PopDiagTraceSetSystemState(4LL, a1);
  result = PopUserPresentSet(a1);
  if ( v2 )
    return PopReleasePolicyLock();
  return result;
}
