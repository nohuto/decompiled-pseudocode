/*
 * XREFs of ?_OnXamlContentLoaded@SharedDesktopBackgroundVisualHost@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z @ 0x18060F280
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x18060EC68 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 */

void __fastcall SharedDesktopBackgroundVisualHost::_OnXamlContentLoaded(
        RTL_SRWLOCK *this,
        const struct IInspectable *a2,
        const struct winrt::Windows::UI::Xaml::RoutedEventArgs *a3)
{
  int Ptr_high; // ebx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v7, this + 22);
  LOBYTE(this[26].Ptr) = 1;
  Ptr_high = HIDWORD(this[25].Ptr);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  try
  {
    SharedDesktopBackgroundVisualHost::SyncState((__int64)this, Ptr_high, 0);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2C2,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
      v5);
  }
}
