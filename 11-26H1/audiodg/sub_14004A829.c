/*
 * XREFs of sub_14004A829 @ 0x14004A829
 * Callers:
 *     sub_14004A8A8 @ 0x14004A8A8 (sub_14004A8A8.c)
 *     sub_14004A8BA @ 0x14004A8BA (sub_14004A8BA.c)
 *     sub_14004A8CC @ 0x14004A8CC (sub_14004A8CC.c)
 *     sub_14004A8DE @ 0x14004A8DE (sub_14004A8DE.c)
 *     sub_14004A8F0 @ 0x14004A8F0 (sub_14004A8F0.c)
 *     sub_14004AB2E @ 0x14004AB2E (sub_14004AB2E.c)
 *     sub_14004ABEF @ 0x14004ABEF (sub_14004ABEF.c)
 *     sub_14004AC13 @ 0x14004AC13 (sub_14004AC13.c)
 *     sub_14004AC25 @ 0x14004AC25 (sub_14004AC25.c)
 *     sub_14004AC5B @ 0x14004AC5B (sub_14004AC5B.c)
 *     sub_14004AC6D @ 0x14004AC6D (sub_14004AC6D.c)
 *     sub_14004AD0A @ 0x14004AD0A (sub_14004AD0A.c)
 *     sub_14004AD2E @ 0x14004AD2E (sub_14004AD2E.c)
 *     sub_14004AD76 @ 0x14004AD76 (sub_14004AD76.c)
 *     sub_14004AD88 @ 0x14004AD88 (sub_14004AD88.c)
 *     sub_14004B901 @ 0x14004B901 (sub_14004B901.c)
 *     sub_14004B95E @ 0x14004B95E (sub_14004B95E.c)
 *     sub_14004B9FB @ 0x14004B9FB (sub_14004B9FB.c)
 *     sub_14004BA0D @ 0x14004BA0D (sub_14004BA0D.c)
 *     sub_14004BA1F @ 0x14004BA1F (sub_14004BA1F.c)
 *     sub_14004BA31 @ 0x14004BA31 (sub_14004BA31.c)
 * Callees:
 *     sub_14003D3C0 @ 0x14003D3C0 (sub_14003D3C0.c)
 */

__int64 __fastcall sub_14004A829(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_14003D3C0((__int64)&dword_1400E30B0, v4);
  return v5(a1, a2, a3, a4);
}
