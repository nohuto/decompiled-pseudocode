/*
 * XREFs of sub_140002080 @ 0x140002080
 * Callers:
 *     sub_14003D420 @ 0x14003D420 (sub_14003D420.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002080(int a1, int a2, __int64 a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // rax
  _QWORD v8[5]; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = *a6;
  v12 = *((_DWORD *)a6 + 2);
  v6 = *a5;
  v13 = 0;
  v8[4] = v6;
  v9 = *((_DWORD *)a5 + 2);
  v10 = 0;
  return sub_1400239C4(a1, a2, 0, 0, 4, (__int64)v8);
}
