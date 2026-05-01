/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180012D28
 * Callers:
 *     HampConnectionDeserializeActivities @ 0x180005128 (HampConnectionDeserializeActivities.c)
 *     HamSetCommitProperties @ 0x18001B210 (HamSetCommitProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
  }
  else
  {
    *a3 = -1LL;
    return (unsigned int)-1073741675;
  }
  return v3;
}
