/*
 * XREFs of ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C43A0
 * Callers:
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x1800C41E0 (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0UwpWindowWrapperBase@@QEAA@XZ @ 0x1801E7EA0 (--0UwpWindowWrapperBase@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x1801F6D24 (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180239E84 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??0UndockedSearchAppExperienceManager@@QEAA@XZ @ 0x18023ADA8 (--0UndockedSearchAppExperienceManager@@QEAA@XZ.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x180363A94 (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x180371458 (--0CortanaSharedExperienceManager@@QEAA@XZ.c)
 *     ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x18037B5C8 (--0CToastCenterExperienceManager@@QEAA@XZ.c)
 *     ??0SearchAppExperienceManager@@QEAA@XZ @ 0x1803A2A20 (--0SearchAppExperienceManager@@QEAA@XZ.c)
 *     ??0WindowWrapperBase@@QEAA@XZ @ 0x18042C2B8 (--0WindowWrapperBase@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        RTL_SRWLOCK *a1)
{
  a1->Ptr = 0LL;
  InitializeSRWLock(a1 + 1);
  InitializeSRWLock(a1 + 2);
  return a1;
}
