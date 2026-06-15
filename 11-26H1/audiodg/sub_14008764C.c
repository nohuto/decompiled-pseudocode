/*
 * XREFs of sub_14008764C @ 0x14008764C
 * Callers:
 *     sub_140088D3C @ 0x140088D3C (sub_140088D3C.c)
 * Callees:
 *     sub_14000253C @ 0x14000253C (sub_14000253C.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008764C(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rcx
  int v7; // ebx
  int v8; // edx
  int v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+4Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  v11 = 1LL;
  v5 = *(_DWORD **)(a1 + 88);
  v14 = 0LL;
  v12 = 0LL;
  v13 = 28;
  if ( *v5 > 5u )
  {
    v10 = 1;
    sub_14000253C((__int64)v5, (__int64)&unk_1400D297C, a3, a4, (__int64)&v10);
  }
  v7 = sub_1400B6010(*(_QWORD *)(a1 + 104));
  if ( v7 < 0 )
  {
    v8 = 241;
LABEL_5:
    sub_14000C2A8(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
      v7);
    return (unsigned int)v7;
  }
  if ( (_DWORD)v11 != 1 )
  {
    v7 = -2147024809;
    v8 = 242;
    goto LABEL_5;
  }
  v7 = HIDWORD(v11);
  if ( v11 < 0 )
  {
    v8 = 243;
    goto LABEL_5;
  }
  *a2 = HIDWORD(v14);
  return 0LL;
}
