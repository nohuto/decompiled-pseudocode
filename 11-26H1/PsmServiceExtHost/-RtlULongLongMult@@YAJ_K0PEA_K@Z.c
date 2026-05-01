/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800479D0
 * Callers:
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x18001B9E0 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x180066CA4 (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18008073C (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 *     ?RmpCommitValuesMultiply@@YAJ_K0PEA_K@Z @ 0x180080850 (-RmpCommitValuesMultiply@@YAJ_K0PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
    return 0LL;
  }
  else
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
}
