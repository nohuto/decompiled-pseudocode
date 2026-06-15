/*
 * XREFs of sub_14004D618 @ 0x14004D618
 * Callers:
 *     sub_14004E30C @ 0x14004E30C (sub_14004E30C.c)
 *     sub_14007B9C8 @ 0x14007B9C8 (sub_14007B9C8.c)
 * Callees:
 *     sub_1400084B4 @ 0x1400084B4 (sub_1400084B4.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140038004 @ 0x140038004 (sub_140038004.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004F778 @ 0x14004F778 (sub_14004F778.c)
 *     sub_14004F8D0 @ 0x14004F8D0 (sub_14004F8D0.c)
 */

__int64 __fastcall sub_14004D618(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // edx
  _WORD v15[264]; // [rsp+40h] [rbp-238h] BYREF
  _UNKNOWN *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    sub_14004F778(a1);
  sub_1400084B4(v15, 260LL, a2);
  sub_140038004(v15, v6, (__int64)L"_p0");
  v7 = a4 >> 31;
  v8 = 1;
  v9 = a4 & 0x7FFFFFFF;
  v10 = 1LL;
  if ( v9 )
    v10 = v9;
  v12 = sub_14004F8D0(a1, v9, v10, v15);
  if ( v12 < 0 )
  {
    v13 = 136;
LABEL_7:
    sub_14000C2A8((int)retaddr, v13, (int)&unk_1400C71E8, v12);
    return (unsigned int)v12;
  }
  sub_140038004(v15, v11, (__int64)L"h");
  if ( (_DWORD)v7 )
    v8 = v7;
  v12 = sub_14004F8D0(a1 + 8, (unsigned int)v7, v8, v15);
  if ( v12 < 0 )
  {
    v13 = 141;
    goto LABEL_7;
  }
  return 0LL;
}
