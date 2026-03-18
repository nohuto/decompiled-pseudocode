/*
 * XREFs of ?ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z @ 0x180279EF0
 * Callers:
 *     ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@@Z @ 0x1801D85C0 (-EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@@Z @ 0x180289BF0 (-EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@@.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CKeyframeAnimation::ReplaceLastKeyframeValueConstant(
        CKeyframeAnimation *this,
        struct CExpressionValue *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // r8
  _DWORD *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 38);
  v5 = *(_DWORD **)(*(_QWORD *)(v4 + 96) + 24LL * (unsigned int)(*(_DWORD *)(v4 + 104) - 1) + 8);
  if ( v5[5] != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
      a4);
  if ( v5[4] != *((_DWORD *)a2 + 16) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x72,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
      a4);
  CExpressionValue::CopyFrom((CExpressionValue *)(v5 + 6), a2, v4, a4);
}
