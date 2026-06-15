/*
 * XREFs of sub_14008C100 @ 0x14008C100
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008AC38 @ 0x14008AC38 (sub_14008AC38.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008C100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)(a1 + 48) )
    v4 = sub_1400B6010(*(_QWORD *)(a1 + 88));
  v11 = v4;
  v12 = *(_DWORD *)(a1 + 48);
  v6 = sub_14008AC38((_QWORD *)(a1 - 48), (__int64)&v9, a3, a4);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 183, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v6);
  return v7;
}
