/*
 * XREFs of ??$?0VMultitaskingViewGestureHandler@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@23456@@Z@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVMultitaskingViewGestureHandler@@P84@EAAXAEBUInputGestureOperation@Input@Internal@UI@23@AEBUInputGestureOperationEventArgs@67823@@Z@Z @ 0x180487F20
 * Callers:
 *     _lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_winrt::Windows::UI::Internal::Input::InputGestureOperation_const_&_ @ 0x180487FC4 (_lambda_e058c550b9a0e8fe978c38ba0103cacb_--operator()_winrt--Windows--UI--Internal--Input--Input.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __m128d *a3)
{
  __m128d v4; // xmm6
  __int64 v5; // rdx
  _QWORD *result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-38h]
  char *v8; // [rsp+60h] [rbp+8h]

  v4 = *a3;
  *(_QWORD *)v7 = a2;
  *(__m128d *)&v7[8] = *a3;
  v8 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v8 + 8));
  *(_OWORD *)(v5 + 16) = *(_OWORD *)v7;
  *(_QWORD *)(v5 + 32) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>,_lambda_3cffccd3a732e2bf8b36cc1d5bf830f1_>::`vftable';
  result = a1;
  *a1 = v5;
  return result;
}
