/*
 * XREFs of ?ForwardWindowMessage@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x180639600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::ForwardWindowMessage(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  int v1; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 32LL))(*((_QWORD *)this + 24));
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D1,
    (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
    (const char *)(unsigned int)v1);
  return (unsigned int)v1;
}
