/*
 * XREFs of ?erase@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@@Z @ 0x1800DFC28
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXI@Z @ 0x1800DEBB4 (-RemoveAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18002AA10 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

_QWORD *__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbp
  winrt::Windows::Foundation::IUnknown *i; // rdi
  _QWORD *result; // rax

  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  for ( i = (winrt::Windows::Foundation::IUnknown *)(a3 + 8);
        i != v3;
        i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
  {
    winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(
      (winrt::Windows::Foundation::IUnknown *)((char *)i - 8),
      i);
  }
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
