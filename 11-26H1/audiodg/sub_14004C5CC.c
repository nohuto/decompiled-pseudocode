/*
 * XREFs of sub_14004C5CC @ 0x14004C5CC
 * Callers:
 *     sub_14004BB2C @ 0x14004BB2C (sub_14004BB2C.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004DF60 @ 0x14004DF60 (sub_14004DF60.c)
 *     sub_14004F650 @ 0x14004F650 (sub_14004F650.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

__int64 __fastcall sub_14004C5CC(
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
  result = sub_14004DF60(
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
    sub_14004F650(v16);
  return result;
}
