/*
 * XREFs of LdrpCfgCheckRoutineCallback @ 0x18007FFA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 __fastcall LdrpCfgCheckRoutineCallback(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  _QWORD *v3; // r8
  __int64 result; // rax
  __int64 (__fastcall *v5)(_QWORD); // rcx
  __int64 (__fastcall *v6)(_QWORD); // rdx

  if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(a1, a2, a1) && (v2 & 0x4000) != 0 )
  {
    result = qword_1801E3558;
    v6 = LdrpValidateUserCallTargetES;
    if ( qword_1801E3558 )
      v6 = (__int64 (__fastcall *)(_QWORD))qword_1801E3558;
    *v3 = v6;
  }
  else
  {
    result = qword_1801E3550;
    v5 = LdrpValidateUserCallTarget;
    if ( qword_1801E3550 )
      v5 = (__int64 (__fastcall *)(_QWORD))qword_1801E3550;
    *v3 = v5;
  }
  return result;
}
