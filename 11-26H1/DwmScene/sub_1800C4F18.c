/*
 * XREFs of sub_1800C4F18 @ 0x1800C4F18
 * Callers:
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001E154 @ 0x18001E154 (sub_18001E154.c)
 *     sub_180020570 @ 0x180020570 (sub_180020570.c)
 *     sub_180020794 @ 0x180020794 (sub_180020794.c)
 *     sub_1800208F4 @ 0x1800208F4 (sub_1800208F4.c)
 *     sub_18002110C @ 0x18002110C (sub_18002110C.c)
 *     sub_1800C2C44 @ 0x1800C2C44 (sub_1800C2C44.c)
 *     sub_1800C4FE4 @ 0x1800C4FE4 (sub_1800C4FE4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C4F18(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v13[32]; // [rsp+130h] [rbp-48h] BYREF

  sub_180020794((__int64)v11);
  v6 = sub_180020570((__int64)v12, (__int64)"desc=");
  v7 = sub_1800C2C44(v6, a2);
  v8 = sub_180020570(v7, (__int64)", subresourceData=");
  v9 = sub_1800C4FE4(v13, a3);
  sub_18001E154(v8, v9);
  sub_1800129D0((__int64)v13);
  sub_18002110C((__int64)v11, a1);
  sub_1800208F4((__int64)v11);
  return a1;
}
