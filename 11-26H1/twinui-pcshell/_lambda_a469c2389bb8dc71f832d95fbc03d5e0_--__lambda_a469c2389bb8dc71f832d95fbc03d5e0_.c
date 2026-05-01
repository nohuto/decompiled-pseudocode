/*
 * XREFs of _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::__lambda_a469c2389bb8dc71f832d95fbc03d5e0_ @ 0x1804686AC
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180062930 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___::_CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___ @ 0x180468830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___--_CTask.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18020714C (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_a469c2389bb8dc71f832d95fbc03d5e0_::__lambda_a469c2389bb8dc71f832d95fbc03d5e0_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5));
  v2 = (std::_Ref_count_base *)a1[4];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
}
