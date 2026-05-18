/*
 * XREFs of sub_180023D10 @ 0x180023D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_1800020D4 @ 0x1800020D4 (sub_1800020D4.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

__int64 __fastcall sub_180023D10(__int64 a1, __int64 *a2, __int64 a3, void *a4, __int64 a5, int *a6)
{
  volatile signed __int64 **v7; // rdi
  char v10; // r14
  volatile signed __int64 *v11; // rdx
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v18; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+84h] [rbp-7Ch] BYREF
  int v20; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+8Ch] [rbp-74h] BYREF
  int v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  void *v24; // [rsp+A0h] [rbp-60h] BYREF
  const char *v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v28; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v29[144]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = (volatile signed __int64 **)(a1 + 112);
  v10 = a3;
  sub_180023298(*(_QWORD *)(a1 + 112), a1 + 249, a3);
  if ( (unsigned int)dword_1801BD1C0 > 5 && sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL) )
  {
    v11 = *v7;
    v24 = a4;
    v22 = 1;
    v18 = a6[7];
    v19 = a6[6];
    v20 = a6[4];
    v21 = *a6;
    v23 = a5;
    v12 = "success";
    if ( !v10 )
      v12 = "fail";
    v25 = v12;
    v26 = *a2;
    v27 = *(_QWORD *)(a1 + 8);
    v28 = sub_180021DD4(v29, v11);
    sub_1800020D4(
      v13,
      byte_1801A16CA,
      v14,
      v15,
      (void **)&v28,
      (__int64)&v22,
      &v27,
      &v26,
      (void **)&v25,
      &v24,
      (__int64)&v23,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18);
  }
  v16 = sub_180023FFC((char *)(a1 + 120));
  return sub_18002470C(v7, v16);
}
