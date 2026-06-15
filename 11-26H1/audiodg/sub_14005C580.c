/*
 * XREFs of sub_14005C580 @ 0x14005C580
 * Callers:
 *     sub_14005C67C @ 0x14005C67C (sub_14005C67C.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_140047264 @ 0x140047264 (sub_140047264.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005C580(__int64 *a1)
{
  __int64 *v1; // r14
  unsigned int v3; // esi
  unsigned __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // edx
  __int64 v11; // [rsp+60h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v3 = -2147024882;
  v4 = sub_14000DA4C();
  try
  {
    v6 = sub_14000DF30(0x12A8uLL, v4, v5);
    v7 = v6;
    if ( v6 )
    {
      sub_140047264(v6);
      *(_QWORD *)v7 = off_1400B90C0;
      *(_QWORD *)(v7 + 8) = off_1400B9128;
      sub_1400B6010(qword_1400E8490);
    }
    v11 = v7;
  }
  catch ( ... )
  {
    v1 = a1;
    v3 = -2147024882;
    v7 = v11;
  }
  if ( v7 )
  {
    sub_1400451F4((volatile signed __int32 *)(v7 + 16));
    v8 = sub_140005600(v7 + 24);
    v9 = 0;
    if ( v8 < 0 )
      v9 = v8;
    v3 = 0;
    if ( v9 < 0 )
      v3 = v9;
    sub_1400444D0((volatile signed __int32 *)(v7 + 16));
    if ( v3 )
    {
      sub_1400B6010(v7);
      v7 = 0LL;
    }
  }
  *v1 = v7;
  return v3;
}
