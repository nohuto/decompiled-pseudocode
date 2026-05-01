/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1801491F8
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800354E4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180094F90 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180149378 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801498B8 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2,
        int a3)
{
  char v3; // al
  char *v4; // rsi
  __int64 v7; // r8
  __m128 v8; // xmm10
  __m128 v9; // xmm8
  float v10; // xmm9_4
  __int64 v11; // rbx
  __int64 v12; // rax
  float v13; // xmm6_4
  float v14; // xmm7_4
  __int64 v15; // rbx
  float v16; // xmm2_4
  float v17; // xmm9_4
  int v18; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v19[16]; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v20[104]; // [rsp+38h] [rbp-E0h] BYREF

  v3 = *((_BYTE *)this + 596);
  v4 = (char *)this + 576;
  v18 = a3;
  v7 = v3 != 0 ? 0x50 : 0;
  v8 = *(__m128 *)((char *)this + v7 + 232);
  v9 = *(__m128 *)((char *)this + v7 + 248);
  v10 = (float)*(int *)((char *)this + v7 + 272);
  v11 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                     (char *)this + 576,
                     v19,
                     &v18);
  v12 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
          (char *)this + 560,
          v20,
          &v18);
  v13 = *(float *)(v11 + 32);
  v14 = *(float *)(*(_QWORD *)v12 + 32LL);
  v15 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(v4, v20, &v18);
  v16 = v10 * v9.m128_f32[0];
  v17 = (float)((float)((float)(v10 * _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) / 100.0) - *(float *)(v15 + 36))
      * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                (char *)this + 560,
                                v19,
                                &v18)
                 + 36LL);
  *(float *)a2 = (float)((float)((float)(v16 / 100.0) - v13) * v14) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  *((float *)a2 + 1) = v17 + _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
}
