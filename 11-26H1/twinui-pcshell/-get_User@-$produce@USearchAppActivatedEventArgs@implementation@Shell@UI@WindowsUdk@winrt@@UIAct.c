/*
 * XREFs of ?get_User@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803D0310
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>::get_User(
        __int64 a1,
        _QWORD *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  *a2 = 0LL;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x7C,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappactivatedeventargs.cpp",
    (const char *)0x80004001LL);
  v5 = 0LL;
  *a2 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  return 0LL;
}
