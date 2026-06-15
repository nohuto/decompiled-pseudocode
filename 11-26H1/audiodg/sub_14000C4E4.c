/*
 * XREFs of sub_14000C4E4 @ 0x14000C4E4
 * Callers:
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 * Callees:
 *     sub_14000DB20 @ 0x14000DB20 (sub_14000DB20.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

unsigned __int64 __fastcall sub_14000C4E4(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rdx
  unsigned __int64 result; // rax

  v2 = a1[1];
  if ( v2 >= a1[2] && !(unsigned __int8)sub_14000DB20(a1, v2 + 1) )
    sub_14004639C(2147942414LL, v5);
  result = v2;
  *(_QWORD *)(*a1 + 8 * v2) = *a2;
  ++a1[1];
  return result;
}
