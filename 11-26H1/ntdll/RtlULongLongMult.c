/*
 * XREFs of RtlULongLongMult @ 0x1800DFE54
 * Callers:
 *     RtlpValidateRemoteDebugInformation @ 0x1800751D0 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x18016E05C (RtlpFcValidateFeatureConfigurationBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = a1 * a2;
  if ( !is_mul_ok(a1, a2) )
  {
    v3 = -1073741675;
    v4 = -1LL;
  }
  *a3 = v4;
  return v3;
}
