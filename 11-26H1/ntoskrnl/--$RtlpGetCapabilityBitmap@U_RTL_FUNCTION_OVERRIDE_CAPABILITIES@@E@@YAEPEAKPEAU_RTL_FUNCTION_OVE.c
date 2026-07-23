/*
 * XREFs of ??$RtlpGetCapabilityBitmap@U_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@E@@YAEPEAKPEAU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEAPEAE@Z @ 0x14080F7DC
 * Callers:
 *     RtlpSetFunctionOverrideCapability @ 0x14080F99C (RtlpSetFunctionOverrideCapability.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGetCapabilityBitmap<_RTL_FUNCTION_OVERRIDE_CAPABILITIES,unsigned char>(
        unsigned int *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax

  v4 = *a1;
  *a4 = 0LL;
  if ( v4 >= 0x161 )
    return 0;
  v5 = a2 + 45;
  if ( !a3 )
    v5 = a2;
  *a4 = v5;
  if ( !v5 )
    return 0;
  *a1 = v4;
  return 1;
}
