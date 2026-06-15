/*
 * XREFs of sub_140035DA0 @ 0x140035DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140048178 @ 0x140048178 (sub_140048178.c)
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140035DA0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v6; // xmm6
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v11; // eax
  int v12; // eax
  _BYTE v13[16]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  sub_1400B6010(a2);
  v6 = *(__m128i *)sub_140052748(v13, &v15, a1);
  if ( v15 )
  {
    v7 = sub_1400B6010(a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      sub_14000C2A8((int)retaddr, 129, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v7);
      if ( *(_QWORD *)v6.m128i_i64[0] )
        sub_1400B6010(_mm_srli_si128(v6, 8).m128i_u64[0]);
      if ( v15 )
        sub_1400B6010(v15);
      return v8;
    }
  }
  if ( a3 )
  {
    v11 = sub_140048178(*(_QWORD *)(a1 + 80));
    v8 = v11;
    if ( v11 < 0 )
    {
      sub_14000C2A8((int)retaddr, 136, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v11);
      if ( *(_QWORD *)v6.m128i_i64[0] )
        sub_1400B6010(_mm_srli_si128(v6, 8).m128i_u64[0]);
    }
    else
    {
      v12 = sub_1400B6010(a2);
      v8 = v12;
      if ( v12 >= 0 )
        goto LABEL_5;
      sub_14000C2A8((int)retaddr, 138, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v12);
      if ( *(_QWORD *)v6.m128i_i64[0] )
        sub_1400B6010(_mm_srli_si128(v6, 8).m128i_u64[0]);
    }
    goto LABEL_23;
  }
  v9 = sub_1400B6010(a2);
  v8 = v9;
  if ( v9 < 0 )
  {
    sub_14000C2A8((int)retaddr, 145, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v9);
    if ( *(_QWORD *)v6.m128i_i64[0] )
      sub_1400B6010(_mm_srli_si128(v6, 8).m128i_u64[0]);
LABEL_23:
    sub_140003238(&v15);
    return v8;
  }
LABEL_5:
  if ( v15 )
    sub_1400B6010(v15);
  return 0LL;
}
