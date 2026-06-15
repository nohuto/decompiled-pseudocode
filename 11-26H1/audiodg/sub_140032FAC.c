/*
 * XREFs of sub_140032FAC @ 0x140032FAC
 * Callers:
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_1400330E4 @ 0x1400330E4 (sub_1400330E4.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall sub_140032FAC(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  int v9; // edx

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v3 = -2147024882;
  v4 = sub_14000DA4C();
  v6 = sub_14000DF30(0x340uLL, v4, v5);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    sub_1400330E4(v6);
    *v7 = off_1400BA4E0;
    v7[1] = off_1400BA4A8;
    v7[2] = off_1400BA488;
    sub_1400B6010(qword_1400E8490);
  }
  if ( v7 )
  {
    sub_1400451F4(v7 + 3);
    v8 = sub_140005600((__int64)(v7 + 4));
    v9 = 0;
    if ( v8 < 0 )
      v9 = v8;
    v3 = 0;
    if ( v9 < 0 )
      v3 = v9;
    sub_1400444D0(v7 + 3);
    if ( v3 || (v3 = sub_1400B6010(v7)) != 0 )
      sub_1400B6010(v7);
  }
  return v3;
}
