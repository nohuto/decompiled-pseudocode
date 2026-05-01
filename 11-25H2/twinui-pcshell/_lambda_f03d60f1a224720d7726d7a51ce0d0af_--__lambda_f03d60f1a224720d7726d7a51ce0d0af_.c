/*
 * XREFs of _lambda_f03d60f1a224720d7726d7a51ce0d0af_::__lambda_f03d60f1a224720d7726d7a51ce0d0af_ @ 0x18035A2C4
 * Callers:
 *     _winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_3fbd826b401420cff0a83bf4ce7975f8____::_1_::dtor$0 @ 0x1806BE00D (_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable_--EventHandle.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_f03d60f1a224720d7726d7a51ce0d0af____::_1_::dtor$0 @ 0x1806C896A (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--CloudDesktop--Tr.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$31 @ 0x1806C8A16 (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$31.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_f03d60f1a224720d7726d7a51ce0d0af_::__lambda_f03d60f1a224720d7726d7a51ce0d0af_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
