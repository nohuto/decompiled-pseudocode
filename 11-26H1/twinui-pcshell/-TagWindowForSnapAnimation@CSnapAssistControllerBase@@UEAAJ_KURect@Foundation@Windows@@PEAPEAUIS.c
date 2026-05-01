/*
 * XREFs of ?TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUISnapAnimationTag@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A82D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x1801F87E0 (-copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z.c)
 *     ??$make@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEA_KAEAURect@Foundation@67@PEAUIPrivilegedPresentationOperations@@@winrt@@YA?A_PAEA_KAEAURect@Foundation@Windows@0@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1805A6018 (--$make@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEA_KAEAUR.c)
 */

__int64 __fastcall CSnapAssistControllerBase::TagWindowForSnapAnimation(
        __int64 a1,
        unsigned __int64 a2,
        __int128 *a3,
        const struct IUnknown *a4)
{
  void **v5; // r8
  const char *v6; // r9
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknownVtbl *v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  struct IPrivilegedPresentationOperations *v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  v8 = *a3;
  v12 = *(struct IPrivilegedPresentationOperations **)(a1 + 64);
  try
  {
    winrt::make<winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag,unsigned __int64 &,winrt::Windows::Foundation::Rect &,IPrivilegedPresentationOperations *>(
      &v10,
      &v11,
      (const struct winrt::Windows::Foundation::Rect *)&v8,
      &v12);
    winrt::copy_to_abi(&v10, a4, v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x240,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                           v6);
  }
  return result;
}
