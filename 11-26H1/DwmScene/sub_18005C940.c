/*
 * XREFs of sub_18005C940 @ 0x18005C940
 * Callers:
 *     sub_18002DA34 @ 0x18002DA34 (sub_18002DA34.c)
 *     sub_18002DA70 @ 0x18002DA70 (sub_18002DA70.c)
 *     sub_18002DB0C @ 0x18002DB0C (sub_18002DB0C.c)
 *     sub_18005BFA0 @ 0x18005BFA0 (sub_18005BFA0.c)
 *     sub_180079498 @ 0x180079498 (sub_180079498.c)
 *     sub_1800905CC @ 0x1800905CC (sub_1800905CC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005C940(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_1800181BC((_QWORD *)(a1 + 24), a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_1800143C0(a1 + 72);
  *(_DWORD *)(a1 + 104) = 1;
  sub_1800129D0(a2);
  return a1;
}
