/*
 * XREFs of sub_14008DA70 @ 0x14008DA70
 * Callers:
 *     sub_14008DEA0 @ 0x14008DEA0 (sub_14008DEA0.c)
 * Callees:
 *     sub_14004F7E4 @ 0x14004F7E4 (sub_14004F7E4.c)
 *     sub_14008E070 @ 0x14008E070 (sub_14008E070.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall sub_14008DA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+68h] [rbp+28h]

  *(_OWORD *)pvar = 0LL;
  v12 = 0LL;
  v7 = sub_1400B6010(a1);
  if ( v7 < 0 )
    sub_14004F7E4(
      retaddr,
      160LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v7);
  if ( LOWORD(pvar[0]) != 19 )
    sub_14004F7E4(
      retaddr,
      161LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      2147943568LL);
  *a5 = LOWORD(pvar[1]);
  PropVariantClear(pvar);
  *(_OWORD *)pvar = 0LL;
  v12 = 0LL;
  v8 = sub_1400B6010(a1);
  if ( v8 < 0 )
    sub_14004F7E4(
      retaddr,
      169LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v8);
  if ( LOWORD(pvar[0]) != 31 )
    sub_14004F7E4(
      retaddr,
      170LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      2147943568LL);
  v9 = sub_14008E070(pvar[1], a4);
  if ( v9 < 0 )
    sub_14004F7E4(
      retaddr,
      171LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v9);
  return PropVariantClear(pvar);
}
