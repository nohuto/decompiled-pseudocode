/*
 * XREFs of ?GetPathValue@CExpressionValue@@QEBAPEBVCPathData@@XZ @ 0x18004F358
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18004B094 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18004EE50 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18021A844 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

const struct CPathData *__fastcall CExpressionValue::GetPathValue(
        CExpressionValue *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 16) != 11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1EF,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
      a4);
  return *(const struct CPathData **)this;
}
