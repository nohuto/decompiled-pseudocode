/*
 * XREFs of sub_140090D20 @ 0x140090D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008FCB0 @ 0x14008FCB0 (sub_14008FCB0.c)
 */

__int64 __fastcall sub_140090D20(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v9 = 0LL;
  v6 = sub_14008FCB0((_QWORD *)(a1 - 112), (__int64)&v9, (__int64)a3, a4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *a2 = v11;
    *a3 = HIDWORD(v11);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      129,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
      v6);
    return v7;
  }
}
