/*
 * XREFs of ?FindDesktop@CVirtualDesktopManager@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x18052F8B0
 * Callers:
 *     ?FindDesktop@CVirtualDesktopManager@@WBA@EAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x18052F950 (-FindDesktop@CVirtualDesktopManager@@WBA@EAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     ?FindDesktop@CVirtualDesktopManager@@WBI@EAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x18052F960 (-FindDesktop@CVirtualDesktopManager@@WBI@EAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     ?OnRemoteDesktopConnected@CVirtualDesktopManager@@AEAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Z @ 0x180530620 (-OnRemoteDesktopConnected@CVirtualDesktopManager@@AEAAJPEAUIInspectable@@PEAUIRemoteDesktopConne.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::FindDesktop(
        CVirtualDesktopManager *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 12)
                                                                                          + 88LL))(
         *((_QWORD *)this + 12),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x344,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}
