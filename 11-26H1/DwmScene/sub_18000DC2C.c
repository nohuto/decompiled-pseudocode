/*
 * XREFs of sub_18000DC2C @ 0x18000DC2C
 * Callers:
 *     sub_18000F25C @ 0x18000F25C (sub_18000F25C.c)
 *     sub_18000F968 @ 0x18000F968 (sub_18000F968.c)
 * Callees:
 *     sub_18000DA50 @ 0x18000DA50 (sub_18000DA50.c)
 *     sub_18000F774 @ 0x18000F774 (sub_18000F774.c)
 */

__int64 __fastcall sub_18000DC2C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = a7;
  v12[1] = sub_18000F774(a7);
  v12[2] = 0;
  return sub_18000DA50(v10, v7, v8, v9, a5, a6, (__int64)v12);
}
