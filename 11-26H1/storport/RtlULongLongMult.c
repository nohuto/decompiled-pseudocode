/*
 * XREFs of RtlULongLongMult @ 0x14007A878
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  NTSTATUS v3; // r9d
  ULONGLONG v4; // rax

  v3 = 0;
  v4 = ullMultiplicand * ullMultiplier;
  if ( !is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    v3 = -1073741675;
    v4 = -1LL;
  }
  *pullResult = v4;
  return v3;
}
