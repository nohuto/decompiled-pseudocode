/*
 * XREFs of sub_180023EB0 @ 0x180023EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001B4C @ 0x180001B4C (sub_180001B4C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180022B8C @ 0x180022B8C (sub_180022B8C.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 *     sub_180024250 @ 0x180024250 (sub_180024250.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

char __fastcall sub_180023EB0(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx
  char result; // al
  volatile signed __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+50h] [rbp-E8h] BYREF
  void *v19; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE *v22; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v23[144]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = a1 + 120;
  v5 = (__int64 *)(a1 + 112);
  v8 = sub_180023FFC((char *)(a1 + 120));
  sub_18002470C(v5, v8);
  sub_180023298(*v5, v3, v9);
  v11 = sub_180022B8C(v3, v10);
  sub_18002470C(v5, v11);
  v12 = (void *)*v5;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*v5 + 144), 0LL);
  result = sub_180024250(v12);
  if ( (unsigned int)dword_1801BD1C0 > 5 )
  {
    result = sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL);
    if ( result )
    {
      v14 = (volatile signed __int64 *)*v5;
      v20 = *a2;
      v21 = *(_QWORD *)(a1 + 8);
      v19 = a3;
      v18 = 1;
      v22 = sub_180021DD4(v23, v14);
      return sub_180001B4C(v15, byte_1801A1468, v16, v17, (void **)&v22, (__int64)&v18, &v21, &v20, &v19);
    }
  }
  return result;
}
