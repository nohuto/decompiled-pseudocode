/*
 * XREFs of sub_140090E70 @ 0x140090E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008FF90 @ 0x14008FF90 (sub_14008FF90.c)
 */

__int64 __fastcall sub_140090E70(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v9 = 0LL;
  v10 = 0;
  v8 = 0LL;
  v5 = sub_14008FF90((_QWORD *)(a1 - 112), (__int64)&v8, a3, a4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *a2 = v10;
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      167,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
      v5);
    return v6;
  }
}
