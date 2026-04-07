/*
 * XREFs of ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18001EB40
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800DF464 (--1CWindowList@@UEAA@XZ.c)
 *     ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800E4660 (-SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     ?SynchronizedCommit@CCompositor@@QEAAJPEAX@Z @ 0x18001EB20 (-SynchronizedCommit@CCompositor@@QEAAJPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CWindowList::CommitAndCloseResizeCompSyncObject(CWindowList *this)
{
  void *v1; // rdx
  void *v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (void *)*((_QWORD *)this + 75);
  if ( v1 )
  {
    if ( *((_BYTE *)this + 634) )
    {
      v4 = CCompositor::SynchronizedCommit(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), v1);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB90,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v4,
          v5);
      *((_BYTE *)this + 634) = 0;
    }
    NtDCompositionCommitSynchronizationObject(*((_QWORD *)this + 75));
    ConfirmResizeCommit(*((_QWORD *)this + 76));
    v3 = (void *)*((_QWORD *)this + 75);
    *((_QWORD *)this + 76) = 0LL;
    CloseHandle(v3);
    *((_QWORD *)this + 75) = 0LL;
  }
}
