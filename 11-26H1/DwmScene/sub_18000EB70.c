/*
 * XREFs of sub_18000EB70 @ 0x18000EB70
 * Callers:
 *     sub_18000FD08 @ 0x18000FD08 (sub_18000FD08.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_18001086C @ 0x18001086C (sub_18001086C.c)
 *     sub_1800108BC @ 0x1800108BC (sub_1800108BC.c)
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_180011004 @ 0x180011004 (sub_180011004.c)
 */

__int64 __fastcall sub_18000EB70(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rdx
  _BYTE v15[528]; // [rsp+40h] [rbp-238h] BYREF
  void *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    sub_180010F3C(a1);
  sub_1800108BC(v15, a2, a2);
  sub_18001086C(v15, v6, L"_p0");
  v7 = a4 >> 31;
  v8 = 1;
  v9 = a4 & 0x7FFFFFFF;
  v10 = 1LL;
  if ( v9 )
    v10 = v9;
  v12 = sub_180011004(a1, v9, v10, v15);
  if ( v12 < 0 )
  {
    v13 = 136LL;
LABEL_7:
    sub_1800102C4(retaddr, v13, "wil", (unsigned int)v12);
    return (unsigned int)v12;
  }
  sub_18001086C(v15, v11, L"h");
  if ( (_DWORD)v7 )
    v8 = v7;
  v12 = sub_180011004(a1 + 8, (unsigned int)v7, v8, v15);
  if ( v12 < 0 )
  {
    v13 = 141LL;
    goto LABEL_7;
  }
  return 0LL;
}
