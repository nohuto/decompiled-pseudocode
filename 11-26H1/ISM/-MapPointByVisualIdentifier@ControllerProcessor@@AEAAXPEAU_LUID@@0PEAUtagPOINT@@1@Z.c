/*
 * XREFs of ?MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z @ 0x18017ECA8
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017CD7C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x18017EDD8 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ControllerProcessor::MapPointByVisualIdentifier(
        ControllerProcessor *this,
        struct _LUID *a2,
        struct _LUID *a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5)
{
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  ControllerProcessor *v7; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = this;
  v5 = _mm_cvtsi32_si128(a4->x);
  v6 = _mm_cvtsi32_si128(a4->y);
  v7 = 0LL;
  v8.x = _mm_cvtepi32_ps(v5).m128_u32[0];
  v8.y = _mm_cvtepi32_ps(v6).m128_u32[0];
  MapPointsByVisualIdentifier(a2, a3, 1LL, &v8, &v7);
  v8.x = (int)*(float *)&v7;
  v8.y = (int)*((float *)&v7 + 1);
  *a5 = v8;
}
