/*
 * XREFs of sub_18006C198 @ 0x18006C198
 * Callers:
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_18001874C @ 0x18001874C (sub_18001874C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006C198(__int64 a1)
{
  signed int v2; // esi
  _BYTE *v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE v10[32]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-40h] BYREF

  sub_18000D81C(a1, 40LL, 64LL, (__int64 (__fastcall *)(__int64))sub_18006C170);
  v2 = 0;
  v3 = (_BYTE *)a1;
  v4 = a1 + 8;
  v5 = 31LL;
  do
  {
    v6 = sub_180028AE4(v11, v2);
    v7 = sub_18001C928((__int64)v10, (__int64)"System", v6);
    sub_18001874C(v4, v7);
    sub_1800129D0((__int64)v10);
    sub_1800129D0((__int64)v11);
    *v3 = 1;
    ++v2;
    v4 += 40LL;
    v3 += 40;
  }
  while ( v2 <= 31 );
  sub_18001490C(a1 + 8, "System0_Enable", 0xEuLL);
  sub_18001490C(a1 + 48, "System1_Visible", 0xFuLL);
  sub_18001490C(a1 + 88, "System2_VisibleTree", 0x13uLL);
  sub_18001490C(a1 + 128, "System3_Renderable", 0x12uLL);
  sub_18001490C(a1 + 168, "System4_Debug", 0xDuLL);
  sub_18001490C(a1 + 208, "System5_Loading", 0xFuLL);
  sub_18001490C(a1 + 328, "System8_Transparent", 0x13uLL);
  sub_18001490C(a1 + 368, "System9_OpaqueMask", 0x12uLL);
  sub_18001490C(a1 + 648, "System16_ShadowCaster", 0x15uLL);
  v8 = (_BYTE *)(a1 + 1280);
  do
  {
    *v8 = 0;
    v8 += 40;
    --v5;
  }
  while ( v5 );
  return a1;
}
