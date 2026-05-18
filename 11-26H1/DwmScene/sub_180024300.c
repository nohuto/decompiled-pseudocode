/*
 * XREFs of sub_180024300 @ 0x180024300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001A18 @ 0x180001A18 (sub_180001A18.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 */

char __fastcall sub_180024300(__int64 a1, int a2, void *a3, void *a4)
{
  char result; // al
  volatile signed __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  void *v15; // [rsp+58h] [rbp-A8h] BYREF
  void *v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v18; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF

  result = sub_180023298(*(_QWORD *)(a1 + 112), a1 + 120, (__int64)a3);
  if ( (unsigned int)dword_1801BD1C0 > 5 )
  {
    result = sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL);
    if ( result )
    {
      v9 = *(volatile signed __int64 **)(a1 + 112);
      v17 = *(_QWORD *)(a1 + 16);
      v15 = a4;
      v16 = a3;
      v13 = a2;
      v14 = 1;
      v18 = sub_180021DD4(v19, v9);
      return sub_180001A18(v10, byte_1801A1329, v11, v12, (void **)&v18, (__int64)&v14, &v17, (__int64)&v13, &v16, &v15);
    }
  }
  return result;
}
