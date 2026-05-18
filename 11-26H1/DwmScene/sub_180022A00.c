/*
 * XREFs of sub_180022A00 @ 0x180022A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180002B08 @ 0x180002B08 (sub_180002B08.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180022B8C @ 0x180022B8C (sub_180022B8C.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 *     sub_180024250 @ 0x180024250 (sub_180024250.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

char __fastcall sub_180022A00(__int64 a1, __int64 *a2, __int64 *a3, void *a4, void *a5, void *a6)
{
  __int64 v6; // rbx
  volatile signed __int64 **v8; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  volatile signed __int64 *v14; // rcx
  char result; // al
  volatile signed __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  void *v21; // [rsp+68h] [rbp-98h] BYREF
  void *v22; // [rsp+70h] [rbp-90h] BYREF
  void *v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v27; // [rsp+98h] [rbp-68h] BYREF
  char v28[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a1 + 120;
  v8 = (volatile signed __int64 **)(a1 + 112);
  v12 = sub_180023FFC((char *)(a1 + 120));
  sub_18002470C(v8, v12);
  sub_180023298(*v8, v6);
  v13 = sub_180022B8C(v6);
  sub_18002470C(v8, v13);
  v14 = *v8;
  _InterlockedExchangeAdd64(*v8 + 18, 0LL);
  result = sub_180024250((void *)v14);
  if ( (unsigned int)dword_1801BD1C0 > 5 )
  {
    result = sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL);
    if ( result )
    {
      v16 = *v8;
      v21 = a6;
      v22 = a5;
      v24 = *a3;
      v25 = *a2;
      v26 = *(_QWORD *)(a1 + 16);
      v23 = a4;
      v20 = 1;
      v27 = sub_180021DD4(v28, v16);
      return sub_180002B08(
               v17,
               byte_1801A0E50,
               v18,
               v19,
               (void **)&v27,
               (__int64)&v20,
               &v26,
               &v25,
               &v24,
               &v23,
               &v22,
               &v21);
    }
  }
  return result;
}
