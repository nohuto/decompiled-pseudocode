/*
 * XREFs of sub_140056830 @ 0x140056830
 * Callers:
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_140055E5C @ 0x140055E5C (sub_140055E5C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140056830(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  int v6; // r8d
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // rdi
  int v9; // eax
  int v10; // ecx
  volatile signed __int32 *v11; // [rsp+50h] [rbp+8h]

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147024882;
  v5 = sub_14000DA4C();
  try
  {
    v7 = (_QWORD *)sub_14000DF30(0x440uLL, v5, v6);
    if ( v7 )
      v8 = (volatile signed __int32 *)sub_140055E5C(v7);
    else
      v8 = 0LL;
    v11 = v8;
  }
  catch ( ... )
  {
    v4 = -2147024882;
    v8 = v11;
  }
  if ( v8 )
  {
    sub_1400451F4(v8 + 8);
    v9 = sub_140005600((__int64)(v8 + 10));
    v10 = 0;
    if ( v9 < 0 )
      v10 = v9;
    v4 = 0;
    if ( v10 < 0 )
      v4 = v10;
    sub_1400444D0(v8 + 8);
    if ( v4 || (v4 = sub_1400B6010(v8)) != 0 )
      sub_1400B6010(v8);
  }
  return v4;
}
