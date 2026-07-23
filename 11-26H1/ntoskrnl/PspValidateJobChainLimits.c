/*
 * XREFs of PspValidateJobChainLimits @ 0x140AD398C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     PspValidateJobAssignmentProcessLimits @ 0x140AD39F4 (PspValidateJobAssignmentProcessLimits.c)
 */

__int64 __fastcall PspValidateJobChainLimits(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  BOOL v7; // edi
  __int64 result; // rax

  v7 = (a4 & 0x8000) == 0;
  while ( a1 != a2 )
  {
    result = PspValidateJobAssignmentProcessLimits(a1, a3, v7);
    if ( (int)result < 0 )
      return result;
    a1 = *(_QWORD *)(a1 + 1304);
  }
  return 0LL;
}
