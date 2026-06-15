/*
 * XREFs of sub_140088960 @ 0x140088960
 * Callers:
 *     sub_140087460 @ 0x140087460 (sub_140087460.c)
 * Callees:
 *     sub_14000253C @ 0x14000253C (sub_14000253C.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140088960(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rcx
  int v6; // ebx
  int v7; // edx
  int v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v10 = 2LL;
  v5 = *(_DWORD **)(a1 + 88);
  v12 = 28LL;
  v11 = 0LL;
  v13 = a2;
  if ( *v5 > 5u )
  {
    v9 = 2;
    sub_14000253C((__int64)v5, (__int64)&unk_1400D29B5, a3, a4, (__int64)&v9);
  }
  v6 = sub_1400B6010(*(_QWORD *)(a1 + 104));
  if ( v6 < 0 )
  {
    v7 = 259;
LABEL_5:
    sub_14000C2A8(
      (int)retaddr,
      v7,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
      v6);
    return (unsigned int)v6;
  }
  if ( (_DWORD)v10 != 2 )
  {
    v6 = -2147024809;
    v7 = 260;
    goto LABEL_5;
  }
  v6 = HIDWORD(v10);
  if ( v10 < 0 )
  {
    v7 = 261;
    goto LABEL_5;
  }
  return 0LL;
}
