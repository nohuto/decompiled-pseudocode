/*
 * XREFs of ?RmpCommitValuesMultiply@@YAJ_K0PEA_K@Z @ 0x180080850
 * Callers:
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18008073C (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800479D0 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall RmpCommitValuesMultiply(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax

  v3 = -1LL;
  if ( a1 == -1LL || a2 == -1LL )
  {
    result = 0LL;
  }
  else
  {
    result = RtlULongLongMult(a1, a2, a3);
    if ( (int)result >= 0 )
      return 0LL;
  }
  *a3 = v3;
  return result;
}
