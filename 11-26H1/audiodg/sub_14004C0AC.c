/*
 * XREFs of sub_14004C0AC @ 0x14004C0AC
 * Callers:
 *     sub_14004BB80 @ 0x14004BB80 (sub_14004BB80.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004DF60 @ 0x14004DF60 (sub_14004DF60.c)
 *     sub_14004F650 @ 0x14004F650 (sub_14004F650.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

void __fastcall __noreturn sub_14004C0AC(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v11; // [rsp+48h] [rbp-14F0h]
  int v12; // [rsp+58h] [rbp-14E0h]
  int v13; // [rsp+68h] [rbp-14D0h]
  __int64 v14[20]; // [rsp+80h] [rbp-14B8h] BYREF
  __int64 v15[128]; // [rsp+120h] [rbp-1418h] BYREF
  WCHAR OutputString[2060]; // [rsp+520h] [rbp-1018h] BYREF

  memset(v14, 0, 0x98uLL);
  sub_14004DF60(a1, a2, a3, 0, 0LL, a6, 3, a7, a8, v11, OutputString, v12, (__int64)v15, v13, 0, (__int64)v14);
  sub_14004F650(v14);
}
