/*
 * XREFs of sub_1400249A8 @ 0x1400249A8
 * Callers:
 *     sub_1400240A0 @ 0x1400240A0 (sub_1400240A0.c)
 *     sub_140024540 @ 0x140024540 (sub_140024540.c)
 *     sub_140024940 @ 0x140024940 (sub_140024940.c)
 * Callees:
 *     sub_140024A08 @ 0x140024A08 (sub_140024A08.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400249A8(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v3 = (_QWORD *)(a1 + 360);
  if ( *(_QWORD *)(a1 + 360) || (result = sub_140024A08(a1 + 360), (int)result >= 0) )
  {
    *a2 = *v3;
    if ( *v3 )
      sub_1400B6010(*v3);
    return 0LL;
  }
  return result;
}
