/*
 * XREFs of PspValidateJobChainLimits @ 0x140AD6C7C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140984FA8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 * Callees:
 *     PspValidateJobAssignmentProcessLimits @ 0x140AD6CE4 (PspValidateJobAssignmentProcessLimits.c)
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
