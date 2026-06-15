/*
 * XREFs of sub_14000E9A8 @ 0x14000E9A8
 * Callers:
 *     sub_14000E4A8 @ 0x14000E4A8 (sub_14000E4A8.c)
 *     sub_14000EAC8 @ 0x14000EAC8 (sub_14000EAC8.c)
 *     sub_14000F0BC @ 0x14000F0BC (sub_14000F0BC.c)
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 */

_QWORD *__fastcall sub_14000E9A8(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdi
  _QWORD *result; // rax
  unsigned __int64 v6; // rax
  int v7; // r8d

  v2 = 24 * a2;
  if ( !is_mul_ok(a2, 0x18uLL) )
    return 0LL;
  v4 = v2 + 8;
  if ( v2 + 8 < v2 )
    return 0LL;
  v6 = sub_14000DA4C();
  result = (_QWORD *)sub_14000DF30(v4, v6, v7);
  if ( !result )
    return 0LL;
  *result = *a1;
  *a1 = result;
  return result;
}
