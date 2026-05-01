/*
 * XREFs of ?CreateTriggerConditionForDirectionChangeThreshold@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x180494628
 * Callers:
 *     ?DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x180494F30 (-DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPar.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180493670 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x180496718 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x180496954 (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     ?SetScalarParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@M@Z @ 0x180496A08 (-SetScalarParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@UExpressionAnimation@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerConditionForDirectionChangeThreshold(__int64 a1, _QWORD *a2)
{
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rcx
  __int64 v6[4]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+90h] [rbp+20h] BYREF
  _QWORD *v9; // [rsp+98h] [rbp+28h]
  __int64 v10; // [rsp+A0h] [rbp+30h] BYREF

  v9 = a2;
  winrt::param::hstring::hstring(
    (winrt::param::hstring *)v6,
    L"(m_compPropertySet.touchPosAtDirectionChange - operation.Position.X) * (polarity) > threshold");
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    (__int64 **)(a1 + 384),
    a2,
    v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"operation");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    a2,
    v7,
    a1 + 464);
  v4 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  if ( v4 )
  {
    v10 = 0LL;
    (**v4)(v4, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v10);
    v8 = v10;
  }
  else
  {
    v8 = 0LL;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    a2,
    v7,
    &v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"polarity");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    a2,
    v7);
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"threshold");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    a2,
    v7);
  return a2;
}
