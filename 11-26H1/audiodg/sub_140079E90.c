/*
 * XREFs of sub_140079E90 @ 0x140079E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14007B3B0 @ 0x14007B3B0 (sub_14007B3B0.c)
 *     sub_14007B908 @ 0x14007B908 (sub_14007B908.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140079E90(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  sub_14007B3B0(&v7);
  v4 = sub_14007B908(a1 - 16, &v7);
  if ( v4 >= 0 )
  {
    v5 = v7;
    if ( v7 )
      sub_1400B6010(v7);
    *a2 = v5;
  }
  sub_14007B3B0(&v7);
  return (unsigned int)v4;
}
