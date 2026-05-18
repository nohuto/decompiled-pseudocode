/*
 * XREFs of sub_18000DC90 @ 0x18000DC90
 * Callers:
 *     sub_18000EC94 @ 0x18000EC94 (sub_18000EC94.c)
 *     sub_18001C4A8 @ 0x18001C4A8 (sub_18001C4A8.c)
 * Callees:
 *     sub_18000DAA0 @ 0x18000DAA0 (sub_18000DAA0.c)
 *     sub_18000ED68 @ 0x18000ED68 (sub_18000ED68.c)
 */

void __fastcall __noreturn sub_18000DC90(
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
  _BYTE v15[24]; // [rsp+60h] [rbp-18h] BYREF

  v7 = sub_18000ED68(v15, a7, a3, a3);
  v8 = *(_QWORD *)v7;
  v14 = *(_DWORD *)(v7 + 8);
  v13 = v8;
  sub_18000DAA0(v11, v10, v9, v9, v12, a6, (__int64)&v13);
}
