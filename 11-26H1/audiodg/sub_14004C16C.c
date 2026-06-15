/*
 * XREFs of sub_14004C16C @ 0x14004C16C
 * Callers:
 *     sub_14004BBB8 @ 0x14004BBB8 (sub_14004BBB8.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004DF60 @ 0x14004DF60 (sub_14004DF60.c)
 *     sub_14004F4E8 @ 0x14004F4E8 (sub_14004F4E8.c)
 *     sub_14004F650 @ 0x14004F650 (sub_14004F650.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall __noreturn sub_14004C16C(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  bool v9; // r14
  int v11; // [rsp+48h] [rbp-1500h]
  int v12; // [rsp+58h] [rbp-14F0h]
  int v13; // [rsp+68h] [rbp-14E0h]
  _BYTE v14[160]; // [rsp+80h] [rbp-14C8h] BYREF
  __int64 v15[128]; // [rsp+120h] [rbp-1428h] BYREF
  WCHAR OutputString[2068]; // [rsp+520h] [rbp-1028h] BYREF

  v9 = qword_1400E83A0 != 0;
  memset(v14, 0, 0x98uLL);
  sub_14004DF60(a1, a2, a3, 0, 0LL, a6, 0, a7, 0LL, v11, OutputString, v12, (__int64)v15, v13, 0, (__int64)v14);
  if ( (v14[4] & 1) != 0 )
    sub_14004F650(v14);
  if ( v9 )
    sub_1400B6010(v14);
  sub_14004F4E8(v14);
  sub_14004F650(v14);
}
