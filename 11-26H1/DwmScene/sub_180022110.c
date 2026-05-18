/*
 * XREFs of sub_180022110 @ 0x180022110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001B4C @ 0x180001B4C (sub_180001B4C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 */

char __fastcall sub_180022110(_QWORD *a1, void *a2)
{
  char result; // al
  volatile signed __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+50h] [rbp-D8h] BYREF
  void *v10; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE *v13; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v14[144]; // [rsp+80h] [rbp-A8h] BYREF

  result = sub_180023298(a1[14], a1 + 15);
  if ( (unsigned int)dword_1801BD1C0 > 5 )
  {
    result = sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL);
    if ( result )
    {
      v5 = (volatile signed __int64 *)a1[14];
      v11 = a1[3];
      v12 = a1[1];
      v10 = a2;
      v9 = 1;
      v13 = sub_180021DD4(v14, v5);
      return sub_180001B4C(v6, byte_1801A10A5, v7, v8, (void **)&v13, (__int64)&v9, &v12, &v11, &v10);
    }
  }
  return result;
}
