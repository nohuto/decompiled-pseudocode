/*
 * XREFs of _lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_::__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_ @ 0x18045C2B4
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18006BDAC (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___::_CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___ @ 0x18045C440 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0___--_CTask.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802149BC (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_::__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5));
  v2 = (std::_Ref_count_base *)a1[4];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
}
