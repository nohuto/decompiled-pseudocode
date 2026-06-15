/*
 * XREFs of sub_140030584 @ 0x140030584
 * Callers:
 *     sub_140084E2C @ 0x140084E2C (sub_140084E2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140030584(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = a1 * a2;
  if ( !is_mul_ok(a1, a2) )
  {
    v3 = -2147024362;
    v4 = -1LL;
  }
  *a3 = v4;
  return v3;
}
