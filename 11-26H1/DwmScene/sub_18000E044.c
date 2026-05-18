/*
 * XREFs of sub_18000E044 @ 0x18000E044
 * Callers:
 *     sub_18000DA50 @ 0x18000DA50 (sub_18000DA50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F968 @ 0x18000F968 (sub_18000F968.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 */

__int64 __fastcall sub_18000E044(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  __int64 result; // rax
  int v15; // [rsp+48h] [rbp-1530h]
  _BYTE v16[160]; // [rsp+80h] [rbp-14F8h] BYREF
  __int64 v17[128]; // [rsp+120h] [rbp-1458h] BYREF
  WCHAR OutputString[2048]; // [rsp+520h] [rbp-1058h] BYREF

  memset(v16, 0, 0x98uLL);
  LOBYTE(v15) = 0;
  result = sub_18000F968(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             2,
             a7,
             a8,
             v15,
             OutputString,
             2048,
             (__int64)v17,
             1024,
             a10,
             (__int64)v16);
  if ( (v16[4] & 1) != 0 )
    sub_180010D50(v16);
  return result;
}
