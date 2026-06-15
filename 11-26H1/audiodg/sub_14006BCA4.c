/*
 * XREFs of sub_14006BCA4 @ 0x14006BCA4
 * Callers:
 *     sub_14006C1E0 @ 0x14006C1E0 (sub_14006C1E0.c)
 * Callees:
 *     sub_14000E30C @ 0x14000E30C (sub_14000E30C.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006BCA4(__int64 a1, __int64 a2)
{
  __int64 *i; // rdx
  __int64 v5; // rax
  __int64 v6; // rax

  sub_1400B6010(a1);
  for ( i = *(__int64 **)(a1 + 16); i && i[2] != a2; i = (__int64 *)*i )
    ;
  if ( !i )
    sub_14004639C(-2147467259);
  v5 = *i;
  if ( i == *(__int64 **)(a1 + 16) )
    *(_QWORD *)(a1 + 16) = v5;
  else
    *(_QWORD *)i[1] = v5;
  v6 = i[1];
  if ( i == *(__int64 **)(a1 + 24) )
    *(_QWORD *)(a1 + 24) = v6;
  else
    *(_QWORD *)(*i + 8) = v6;
  return sub_14000E30C(a1 + 16, i);
}
