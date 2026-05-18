/*
 * XREFs of sub_180024410 @ 0x180024410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001774 @ 0x180001774 (sub_180001774.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 */

char __fastcall sub_180024410(__int64 a1, char a2, void *a3, void *a4, void *a5)
{
  char result; // al
  void *v10; // rax
  volatile signed __int64 *v11; // rdx
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  void *v17; // [rsp+68h] [rbp-98h] BYREF
  void *v18; // [rsp+70h] [rbp-90h] BYREF
  void *v19; // [rsp+78h] [rbp-88h] BYREF
  void *v20; // [rsp+80h] [rbp-80h] BYREF
  const char *v21; // [rsp+88h] [rbp-78h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v23; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v24[144]; // [rsp+A0h] [rbp-60h] BYREF

  result = sub_180023298(*(_QWORD *)(a1 + 112), a1 + 120, (__int64)a3);
  if ( (unsigned int)dword_1801BD1C0 > 5 )
  {
    result = sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL);
    if ( result )
    {
      v17 = a5;
      v18 = a4;
      v10 = (void *)sub_1800148EC(a1 + 48);
      v11 = *(volatile signed __int64 **)(a1 + 112);
      v19 = v10;
      v12 = "fail";
      v20 = a3;
      if ( a2 )
        v12 = "success";
      v16 = 1;
      v21 = v12;
      v22 = *(_QWORD *)(a1 + 16);
      v23 = sub_180021DD4(v24, v11);
      return sub_180001774(
               v13,
               byte_1801A13B9,
               v14,
               v15,
               (void **)&v23,
               (__int64)&v16,
               &v22,
               (void **)&v21,
               &v20,
               &v19,
               &v18,
               &v17);
    }
  }
  return result;
}
