/*
 * XREFs of ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x18022B660
 * Callers:
 *     ?CopyDesktopState@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@0@Z @ 0x180552440 (-CopyDesktopState@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@0@Z.c)
 *     ?CopyDesktopState@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@0@Z @ 0x180552450 (-CopyDesktopState@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180132568 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1801328B0 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CopyDesktopState(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  char *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *CurrentDesktopCollection; // rax
  int updated; // eax
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF

  v6 = (char *)this - 8;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &SRWLock);
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *))(**((_QWORD **)this + 14)
                                                                                               + 96LL))(
         *((_QWORD *)this + 14),
         a2,
         a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)v6, v12);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)v6, (__int64)a2, CurrentDesktopCollection);
    v8 = updated;
    if ( updated >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A8,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)updated);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&SRWLock);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return v8;
}
