/*
 * XREFs of sub_18000DCEC @ 0x18000DCEC
 * Callers:
 *     sub_18000DAA0 @ 0x18000DAA0 (sub_18000DAA0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F968 @ 0x18000F968 (sub_18000F968.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 */

void __fastcall __noreturn sub_18000DCEC(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v10; // [rsp+48h] [rbp-14F0h]
  int v11; // [rsp+58h] [rbp-14E0h]
  int v12; // [rsp+68h] [rbp-14D0h]
  __int64 v13[20]; // [rsp+80h] [rbp-14B8h] BYREF
  __int64 v14[128]; // [rsp+120h] [rbp-1418h] BYREF
  WCHAR OutputString[2060]; // [rsp+520h] [rbp-1018h] BYREF

  memset(v13, 0, 0x98uLL);
  sub_18000F968(a1, a2, a3, 0, 0LL, a6, 3, a7, 0LL, v10, OutputString, v11, (__int64)v14, v12, 0, (__int64)v13);
  sub_180010D50(v13);
}
