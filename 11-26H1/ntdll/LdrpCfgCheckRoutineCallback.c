/*
 * XREFs of LdrpCfgCheckRoutineCallback @ 0x180077340
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

ULONG_PTR __fastcall LdrpCfgCheckRoutineCallback(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  _QWORD *v3; // r8
  ULONG_PTR result; // rax
  __int64 (__fastcall *ScpCfgCheckFunction)(_QWORD); // rcx
  __int64 (__fastcall *ScpCfgCheckESFunction)(_QWORD); // rdx

  if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(a1, a2, a1) && (v2 & 0x4000) != 0 )
  {
    result = LdrSystemDllInitBlock.ScpCfgCheckESFunction;
    ScpCfgCheckESFunction = LdrpValidateUserCallTargetES;
    if ( LdrSystemDllInitBlock.ScpCfgCheckESFunction )
      ScpCfgCheckESFunction = (__int64 (__fastcall *)(_QWORD))LdrSystemDllInitBlock.ScpCfgCheckESFunction;
    *v3 = ScpCfgCheckESFunction;
  }
  else
  {
    result = LdrSystemDllInitBlock.ScpCfgCheckFunction;
    ScpCfgCheckFunction = LdrpValidateUserCallTarget;
    if ( LdrSystemDllInitBlock.ScpCfgCheckFunction )
      ScpCfgCheckFunction = (__int64 (__fastcall *)(_QWORD))LdrSystemDllInitBlock.ScpCfgCheckFunction;
    *v3 = ScpCfgCheckFunction;
  }
  return result;
}
