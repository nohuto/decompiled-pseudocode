/*
 * XREFs of ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@W4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18028C0B0
 * Callers:
 *     ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@@Z @ 0x1801D85C0 (-EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@@Z @ 0x180289BF0 (-EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@@.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4OutputCoordinate@@PEA_NPEAM@Z @ 0x18013B1A4 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4Outp.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::TryProcessInertiaModifier(
        __int64 a1,
        struct CExpressionValueStack *a2,
        int a3,
        const char *a4,
        CExpressionValue *a5)
{
  CConditionalExpression *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  CExpressionValue *v10; // rbx
  float v11[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v13; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( a3 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x81,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        a4);
    v6 = (CConditionalExpression *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 472) + 528LL))(
                                     *(_QWORD *)(a1 + 472),
                                     (unsigned int)a4);
  }
  else
  {
    v6 = (CConditionalExpression *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 472) + 520LL))(
                                     *(_QWORD *)(a1 + 472),
                                     (unsigned int)a4);
  }
  v13 = 0;
  if ( v6 )
  {
    v11[0] = 0.0;
    v7 = CConditionalExpression::ProcessConditionalExpression(v6, a2, 0, &v13, v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    if ( v13 )
    {
      v10 = a5;
      CExpressionValue::DestroyCurrent(a5);
      *(float *)v10 = v11[0];
      *((_DWORD *)v10 + 16) = 18;
    }
  }
  return 0LL;
}
