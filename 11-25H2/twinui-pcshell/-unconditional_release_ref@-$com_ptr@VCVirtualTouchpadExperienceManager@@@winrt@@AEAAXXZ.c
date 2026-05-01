/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ @ 0x180392790
 * Callers:
 *     ??1?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ @ 0x18038EBE0 (--1-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ.c)
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18038FAF0 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803918D0 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<CVirtualTouchpadExperienceManager>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::Release(v2);
}
