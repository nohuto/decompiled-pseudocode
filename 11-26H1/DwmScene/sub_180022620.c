/*
 * XREFs of sub_180022620 @ 0x180022620
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_1800029C0 @ 0x1800029C0 (sub_1800029C0.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

__int64 __fastcall sub_180022620(__int64 a1, __int64 *a2, __int64 *a3, void *a4, void *a5)
{
  volatile signed __int64 **v6; // rdi
  volatile signed __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  void *v17; // [rsp+70h] [rbp-98h] BYREF
  void *v18; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+80h] [rbp-88h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  _BYTE *v22; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v23[144]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = (volatile signed __int64 **)(a1 + 112);
  sub_180023298(*(_QWORD *)(a1 + 112), a1 + 249);
  if ( (unsigned int)dword_1801BD1C0 > 5 && sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL) )
  {
    v10 = *v6;
    v17 = a5;
    v19 = *a3;
    v20 = *a2;
    v21 = *(_QWORD *)(a1 + 16);
    v18 = a4;
    LODWORD(v16) = 1;
    v22 = sub_180021DD4(v23, v10);
    sub_1800029C0(v11, byte_1801A0C3D, v12, v13, (void **)&v22, (__int64)&v16, &v21, &v20, &v19, &v18, &v17);
  }
  v14 = sub_180023FFC((char *)(a1 + 120));
  return sub_18002470C(v6, v14);
}
