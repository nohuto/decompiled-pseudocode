/*
 * XREFs of sub_180022210 @ 0x180022210
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001600 @ 0x180001600 (sub_180001600.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 */

char __fastcall sub_180022210(__int64 a1, char a2, void *a3, void *a4)
{
  char result; // al
  void *v9; // rax
  volatile signed __int64 *v10; // rdx
  const char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  void *v16; // [rsp+68h] [rbp-98h] BYREF
  void *v17; // [rsp+70h] [rbp-90h] BYREF
  void *v18; // [rsp+78h] [rbp-88h] BYREF
  const char *v19; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v21; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v22[144]; // [rsp+A0h] [rbp-60h] BYREF

  result = sub_180023298(*(_QWORD *)(a1 + 112), a1 + 120);
  if ( (unsigned int)dword_1801BD1C0 > 5 )
  {
    result = sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL);
    if ( result )
    {
      v16 = a4;
      v9 = (void *)sub_1800148EC(a1 + 48);
      v10 = *(volatile signed __int64 **)(a1 + 112);
      v17 = v9;
      v11 = "fail";
      v18 = a3;
      if ( a2 )
        v11 = "success";
      v15 = 1;
      v19 = v11;
      v20 = *(_QWORD *)(a1 + 8);
      v21 = sub_180021DD4(v22, v10);
      return sub_180001600(
               v12,
               byte_1801A1978,
               v13,
               v14,
               (void **)&v21,
               (__int64)&v15,
               &v20,
               (void **)&v19,
               &v18,
               &v17,
               &v16);
    }
  }
  return result;
}
