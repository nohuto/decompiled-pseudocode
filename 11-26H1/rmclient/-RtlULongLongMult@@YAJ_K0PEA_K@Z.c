/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800116DC
 * Callers:
 *     HampConnectionDeserializeActivities @ 0x180004FF4 (HampConnectionDeserializeActivities.c)
 *     HamSetCommitProperties @ 0x1800198F0 (HamSetCommitProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rax

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
