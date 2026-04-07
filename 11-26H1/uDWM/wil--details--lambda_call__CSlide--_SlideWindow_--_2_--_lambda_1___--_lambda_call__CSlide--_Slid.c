/*
 * XREFs of wil::details::lambda_call__CSlide::_SlideWindow_::_2_::_lambda_1___::_lambda_call__CSlide::_SlideWindow_::_2_::_lambda_1___ @ 0x1800C02BC
 * Callers:
 *     _CSlide::_SlideWindow_::_1_::dtor$1 @ 0x1800E9165 (_CSlide--_SlideWindow_--_1_--dtor$1.c)
 * Callees:
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800C44A4 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__CSlide::_SlideWindow_::_2_::_lambda_1___::_lambda_call__CSlide::_SlideWindow_::_2_::_lambda_1___(
        __int64 a1)
{
  struct CAnimationComponent **v1; // rcx
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(*(_QWORD **)a1) )
      CStoryboard::_RemoveAnimationComponent(*(CStoryboard **)(v2 + 8), *v1);
  }
}
