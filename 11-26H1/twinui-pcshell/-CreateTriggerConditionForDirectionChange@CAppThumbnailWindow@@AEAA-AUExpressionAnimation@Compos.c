/*
 * XREFs of ?CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x1804A544C
 * Callers:
 *     ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1804A5CB0 (-DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationT.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804A7F50 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A4520 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x1804A7528 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerConditionForDirectionChange(__int64 a1, _QWORD *a2)
{
  const unsigned __int16 *v4; // rdx
  __int64 v6[4]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v7[48]; // [rsp+48h] [rbp-30h] BYREF

  v4 = L"operation.Velocity.X < 0";
  if ( !*(_BYTE *)(a1 + 171) )
    v4 = L"operation.Velocity.X > 0";
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, v4);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    (__int64 **)(a1 + 384),
    a2,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"operation");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    a2,
    v7,
    a1 + 464);
  return a2;
}
