/*
 * XREFs of PoSetUserPresent @ 0x140427200
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PopDiagTraceSetSystemState @ 0x140427310 (PopDiagTraceSetSystemState.c)
 *     PopUserPresentSet @ 0x1404273D4 (PopUserPresentSet.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
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
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
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
