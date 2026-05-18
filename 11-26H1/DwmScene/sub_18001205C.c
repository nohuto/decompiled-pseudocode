/*
 * XREFs of sub_18001205C @ 0x18001205C
 * Callers:
 *     sub_180011D1C @ 0x180011D1C (sub_180011D1C.c)
 *     sub_18001C5B0 @ 0x18001C5B0 (sub_18001C5B0.c)
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_1800636CC @ 0x1800636CC (sub_1800636CC.c)
 *     sub_180065618 @ 0x180065618 (sub_180065618.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18008B770 @ 0x18008B770 (sub_18008B770.c)
 *     sub_18008DF20 @ 0x18008DF20 (sub_18008DF20.c)
 *     sub_1800942A4 @ 0x1800942A4 (sub_1800942A4.c)
 * Callees:
 *     <none>
 */

float __fastcall sub_18001205C(float a1, float a2, float a3)
{
  float v3; // xmm0_4

  v3 = fmaxf(a1, a2);
  return fminf(v3, a3);
}
