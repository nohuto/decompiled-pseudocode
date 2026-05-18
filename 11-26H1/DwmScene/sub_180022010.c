/*
 * XREFs of sub_180022010 @ 0x180022010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180001918 @ 0x180001918 (sub_180001918.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 */

char __fastcall sub_180022010(__int64 a1, int a2, void *a3)
{
  char result; // al
  volatile signed __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-C8h] BYREF
  int v12; // [rsp+54h] [rbp-C4h] BYREF
  void *v13; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE *v15; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v16[144]; // [rsp+70h] [rbp-A8h] BYREF

  result = sub_180023298(*(_QWORD *)(a1 + 112), a1 + 120);
  if ( (unsigned int)dword_1801BD1C0 > 5 )
  {
    result = sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL);
    if ( result )
    {
      v7 = *(volatile signed __int64 **)(a1 + 112);
      v14 = *(_QWORD *)(a1 + 8);
      v13 = a3;
      v11 = a2;
      v12 = 1;
      v15 = sub_180021DD4(v16, v7);
      return sub_180001918(v8, byte_1801A1816, v9, v10, (void **)&v15, (__int64)&v12, &v14, (__int64)&v11, &v13);
    }
  }
  return result;
}
