/*
 * XREFs of ?ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4ViewVisibility@3UI@WindowsUdk@6@@Z @ 0x1805F6B40
 * Callers:
 *     ?ReportFlyoutVisibility@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAH_N@Z @ 0x1805F6B10 (-ReportFlyoutVisibility@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 *     ?UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F7FFC (-UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x18023821C (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ??$ReportFlyoutVisibility@_N@MeetAndChatTelemetry@@SAX$$QEA_N@Z @ 0x1805F1D88 (--$ReportFlyoutVisibility@_N@MeetAndChatTelemetry@@SAX$$QEA_N@Z.c)
 */

int __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ReportFlyoutVisibility(
        __int64 a1,
        unsigned int a2)
{
  HWND WindowW; // rax
  int result; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  if ( a2 == 1 )
  {
    wil::AcquireSRWLockExclusive(&v9, (RTL_SRWLOCK *)(a1 + 112));
    *(_BYTE *)(a1 + 208) = 0;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  }
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B8,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)0x8000FFFFLL,
      v6);
  result = PostMessageW(WindowW, 0x4F6u, a2 == 0, 0LL);
  if ( *(_QWORD *)(a1 + 120) )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (__int64 *)(a1 + 120),
      &v8);
    LOBYTE(v8) = a2 == 0;
    return MeetAndChatTelemetry::ReportFlyoutVisibility<bool>((char *)&v8);
  }
  return result;
}
