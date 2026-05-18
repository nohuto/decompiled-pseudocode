/*
 * XREFs of sub_180023360 @ 0x180023360
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001B4C @ 0x180001B4C (sub_180001B4C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

__int64 __fastcall sub_180023360(__int64 a1, __int64 *a2, void *a3)
{
  volatile signed __int64 **v4; // rdi
  volatile signed __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v13; // [rsp+50h] [rbp-D8h] BYREF
  void *v14; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE *v17; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v18[144]; // [rsp+80h] [rbp-A8h] BYREF

  v4 = (volatile signed __int64 **)(a1 + 112);
  sub_180023298(*(_QWORD *)(a1 + 112), a1 + 249, (__int64)a3);
  if ( (unsigned int)dword_1801BD1C0 > 5 && sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL) )
  {
    v7 = *v4;
    v15 = *a2;
    v16 = *(_QWORD *)(a1 + 8);
    v14 = a3;
    v13 = 1;
    v17 = sub_180021DD4(v18, v7);
    sub_180001B4C(v8, byte_1801A188B, v9, v10, (void **)&v17, (__int64)&v13, &v16, &v15, &v14);
  }
  v11 = sub_180023FFC((char *)(a1 + 120));
  return sub_18002470C(v4, v11);
}
