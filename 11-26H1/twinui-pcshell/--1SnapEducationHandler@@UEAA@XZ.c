/*
 * XREFs of ??1SnapEducationHandler@@UEAA@XZ @ 0x18059DC5C
 * Callers:
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18059D8EC (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??_GSnapEducationHandler@@UEAAPEAXI@Z @ 0x18059E470 (--_GSnapEducationHandler@@UEAAPEAXI@Z.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$32 @ 0x1806F832A (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$32.c)
 * Callees:
 *     ??1?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA@XZ @ 0x18059D770 (--1-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistory@Sn.c)
 */

void __fastcall SnapEducationHandler::~SnapEducationHandler(void **this)
{
  std::deque<SnapEducationHandler::ApplicationViewHistory>::~deque<SnapEducationHandler::ApplicationViewHistory>(this + 4);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)(this + 1));
}
