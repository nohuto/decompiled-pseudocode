/*
 * XREFs of ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x18023C1B0
 * Callers:
 *     ?CopyDesktopState@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@0@Z @ 0x18052F090 (-CopyDesktopState@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@0@Z.c)
 *     ?CopyDesktopState@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@0@Z @ 0x18052F0A0 (-CopyDesktopState@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800F4048 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F4380 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CopyDesktopState(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD *CurrentDesktopCollection; // rax
  int updated; // eax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &SRWLock);
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *))(**((_QWORD **)this + 14)
                                                                                               + 96LL))(
         *((_QWORD *)this + 14),
         a2,
         a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this - 8, v11);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, (__int64)a2, CurrentDesktopCollection);
    v7 = updated;
    if ( updated >= 0 )
      v7 = 0;
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
      (const char *)(unsigned int)v6);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return v7;
}
