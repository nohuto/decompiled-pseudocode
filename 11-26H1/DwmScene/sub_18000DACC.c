/*
 * XREFs of sub_18000DACC @ 0x18000DACC
 * Callers:
 *     sub_180010F4C @ 0x180010F4C (sub_180010F4C.c)
 * Callees:
 *     sub_18000DAA0 @ 0x18000DAA0 (sub_18000DAA0.c)
 *     sub_18000F25C @ 0x18000F25C (sub_18000F25C.c)
 *     sub_18000F774 @ 0x18000F774 (sub_18000F774.c)
 */

void __fastcall __noreturn sub_18000DACC(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // eax
  int v9; // r9d
  int v10; // [rsp+20h] [rbp-48h]
  _DWORD v11[6]; // [rsp+50h] [rbp-18h] BYREF

  v8 = sub_18000F25C(a1, a2, (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", a4);
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  v11[0] = v8;
  v11[1] = sub_18000F774((unsigned int)v8);
  v11[2] = 0;
  sub_18000DAA0(a1, a2, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", v9, v10, a6, (__int64)v11);
}
