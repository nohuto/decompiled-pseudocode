/*
 * XREFs of ?SwitchDesktopAndMoveForegroundView@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180533560
 * Callers:
 *     ?SwitchDesktopAndMoveForegroundView@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@@Z @ 0x180533610 (-SwitchDesktopAndMoveForegroundView@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopAndMoveForegroundView@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z @ 0x180533620 (-SwitchDesktopAndMoveForegroundView@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180533630 (-SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopAndMoveForegroundView(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 19);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 32LL))(
           *((_QWORD *)this + 12),
           a2) )
    {
      v7 = CVirtualDesktopManager::SwitchDesktopAndMoveForegroundViewInternal(this, a2);
      v8 = v7;
      if ( v7 >= 0 )
      {
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A6,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
        result = v8;
      }
    }
    else
    {
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
      result = 2147942487LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2A9,
                           (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                           v5);
  }
  return result;
}
