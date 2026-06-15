/*
 * XREFs of sub_14004BF34 @ 0x14004BF34
 * Callers:
 *     sub_14004F7E4 @ 0x14004F7E4 (sub_14004F7E4.c)
 * Callees:
 *     sub_14001DED0 @ 0x14001DED0 (sub_14001DED0.c)
 *     sub_14004BBB8 @ 0x14004BBB8 (sub_14004BBB8.c)
 */

void __fastcall __noreturn sub_14004BF34(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rax
  __int64 v8; // xmm0_8
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-20h]
  unsigned int v15[6]; // [rsp+60h] [rbp-18h] BYREF

  v7 = sub_14001DED0(v15, a7);
  v8 = *(_QWORD *)v7;
  v14 = *(_DWORD *)(v7 + 8);
  v13 = v8;
  sub_14004BBB8(v11, v10, v9, v9, v12, a6, (__int64)&v13);
}
