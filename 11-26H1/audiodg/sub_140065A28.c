/*
 * XREFs of sub_140065A28 @ 0x140065A28
 * Callers:
 *     sub_140065780 @ 0x140065780 (sub_140065780.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005F24C @ 0x14005F24C (sub_14005F24C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_140065A28(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-18h]

  v8[0] = (__int64)a2;
  sub_140021954((__int64)v9, a3);
  sub_14005F24C((_QWORD *)(a1 + 24), v8, v9);
  if ( v10 > 7 )
    sub_1400453E4(v9[0], 2 * v10 + 2);
  v5 = v8[0];
  if ( v8[0] == *(_QWORD *)(a1 + 32) )
    goto LABEL_7;
  v8[0] = 0LL;
  if ( (int)sub_140026F50(*(_QWORD *)(v5 + 48), (__int64)&dword_1400C6A80, v8) < 0 )
  {
    sub_140003238(v8);
LABEL_7:
    *a2 = 0LL;
    return a2;
  }
  v6 = v8[0];
  v8[0] = 0LL;
  *a2 = v6;
  sub_140003238(v8);
  return a2;
}
