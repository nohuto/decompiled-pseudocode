/*
 * XREFs of RtlULongLongMult @ 0x1802C3A28
 * Callers:
 *     AslStringDuplicate @ 0x18015C594 (AslStringDuplicate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = 2 * a1;
  if ( !is_mul_ok(a1, 2uLL) )
  {
    v3 = -1073741675;
    v4 = -1LL;
  }
  *a3 = v4;
  return v3;
}
