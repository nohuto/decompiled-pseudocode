/*
 * XREFs of sub_180023110 @ 0x180023110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001C50 @ 0x180001C50 (sub_180001C50.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180022B8C @ 0x180022B8C (sub_180022B8C.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 *     sub_180024250 @ 0x180024250 (sub_180024250.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

char __fastcall sub_180023110(__int64 a1, __int64 *a2, void *a3, void *a4, void *a5, void *a6)
{
  __int64 v6; // rbx
  volatile signed __int64 **v8; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  volatile signed __int64 *v15; // rcx
  char result; // al
  volatile signed __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  void *v22; // [rsp+68h] [rbp-98h] BYREF
  void *v23; // [rsp+70h] [rbp-90h] BYREF
  void *v24; // [rsp+78h] [rbp-88h] BYREF
  void *v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v28; // [rsp+98h] [rbp-68h] BYREF
  char v29[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a1 + 120;
  v8 = (volatile signed __int64 **)(a1 + 112);
  v12 = sub_180023FFC((char *)(a1 + 120));
  sub_18002470C(v8, v12);
  sub_180023298(*v8, v6);
  v14 = sub_180022B8C(v6, v13);
  sub_18002470C(v8, v14);
  v15 = *v8;
  _InterlockedExchangeAdd64(*v8 + 18, 0LL);
  result = sub_180024250((void *)v15);
  if ( (unsigned int)dword_1801BD1C0 > 5 )
  {
    result = sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL);
    if ( result )
    {
      v17 = *v8;
      v22 = a6;
      v23 = a5;
      v26 = *a2;
      v27 = *(_QWORD *)(a1 + 16);
      v24 = a4;
      v25 = a3;
      v21 = 1;
      v28 = sub_180021DD4(v29, v17);
      return sub_180001C50(
               v18,
               byte_1801A0D83,
               v19,
               v20,
               (void **)&v28,
               (__int64)&v21,
               &v27,
               &v26,
               &v25,
               &v24,
               &v23,
               &v22);
    }
  }
  return result;
}
