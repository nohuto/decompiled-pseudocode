/*
 * XREFs of sub_14008DEA0 @ 0x14008DEA0
 * Callers:
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14004F7E4 @ 0x14004F7E4 (sub_14004F7E4.c)
 *     sub_14008DA70 @ 0x14008DA70 (sub_14008DA70.c)
 *     sub_14008DBD0 @ 0x14008DBD0 (sub_14008DBD0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14008DEA0(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int16 v12; // cx
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v16[8]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v17[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+18h]

  v8 = 0;
  v15 = 0LL;
  v9 = sub_1400B6010(a1);
  if ( v9 < 0 )
    sub_14004F7E4(
      retaddr,
      179LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v9);
  v14 = 0LL;
  v10 = sub_1400B6010(a1);
  if ( v10 < 0 )
    sub_14004F7E4(
      retaddr,
      182LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v10);
  v11 = sub_1400B6010(v14);
  if ( v11 < 0 )
    sub_14004F7E4(
      retaddr,
      190LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v11);
  v12 = *(_WORD *)a2;
  if ( *(_WORD *)a2 != 0xFFFE )
    goto LABEL_10;
  if ( *(_QWORD *)(a2 + 26) == 0x80001000000000LL && *(_DWORD *)(a2 + 34) == 939567616 && *(_WORD *)(a2 + 38) == 29083 )
    v12 = *(_WORD *)(a2 + 24);
  if ( v12 != 0xFFFE )
  {
LABEL_10:
    v16[0] = -1702713381;
    v16[1] = 1102331579;
    v16[2] = -1223116157;
    v16[3] = -65530063;
    v16[4] = v12;
    v17[0] = 590439624;
    v17[1] = 1283267372;
    v17[2] = 1907779772;
    v17[3] = 1730509416;
    v17[4] = v12;
    sub_14008DA70(v15, (__int64)v17, (__int64)v16, (__int64)a3, a4);
  }
  if ( !*a3 )
  {
    LOBYTE(v8) = 0;
    sub_14008DBD0(a1, (unsigned __int16 *)a2, v8, (__int64)a3, (__int64)a4);
  }
  sub_140003238(&v14);
  return sub_140003238(&v15);
}
