/*
 * XREFs of sub_14008E070 @ 0x14008E070
 * Callers:
 *     sub_14008DA70 @ 0x14008DA70 (sub_14008DA70.c)
 *     sub_14008DBD0 @ 0x14008DBD0 (sub_14008DBD0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14004F7E4 @ 0x14004F7E4 (sub_14004F7E4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=8
__int64 sub_14008E070()
{
  HRESULT v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+8h]
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h] BYREF

  ppv = 0LL;
  v0 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &ppv);
  if ( v0 < 0 )
    sub_14004F7E4(
      retaddr,
      83LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v0);
  v6 = 0LL;
  v1 = sub_1400B6010(ppv);
  if ( v1 < 0 )
    sub_14004F7E4(
      retaddr,
      87LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v1);
  v10 = 0LL;
  v2 = sub_1400B6010(v6);
  if ( v2 < 0 )
    sub_14004F7E4(
      retaddr,
      91LL,
      (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      (unsigned int)v2);
  v9 = 0LL;
  if ( (int)sub_1400B6010(v10) < 0 )
  {
    v4 = sub_1400B6010(v10);
    if ( v4 < 0 )
      sub_14004F7E4(
        retaddr,
        106LL,
        (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
        (unsigned int)v4);
  }
  else
  {
    v3 = sub_1400B6010(v9);
    if ( v3 < 0 )
      sub_14004F7E4(
        retaddr,
        100LL,
        (__int64)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
        (unsigned int)v3);
  }
  sub_140003238(&v9);
  sub_140003238(&v10);
  sub_140003238(&v6);
  sub_140003238((__int64 *)&ppv);
  return 0LL;
}
