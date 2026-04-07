/*
 * XREFs of ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180034A5C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800AD934 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::FreezeRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rbx
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  int v12; // eax
  CWindowData *v14; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h]

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v14 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v5 = v14;
  if ( v14 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
    if ( *((HWND *)v5 + 5) != CWindowList::GetShellWindowForDesktop(
                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                *((_QWORD *)v5 + 17))
      || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() == v6 )
    {
      if ( ((*((_BYTE *)v5 + 740) & 8) != 0) != v6 )
      {
        *((_BYTE *)v5 + 740) ^= (*((_BYTE *)v5 + 740) ^ (8 * v6)) & 8;
        if ( (v6 & 1) != 0 )
          CWindowData::SnapshotWindow((struct CWindowSnapshot **)v5, v7, v8);
        else
          CWindowData::ClearSnapshot(v5, 1, v8, 0);
        v12 = CWindowData::NotifyRepresentationChanged(v5, v9, v10, v11);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1859u, 0LL);
      }
    }
    else
    {
      CDesktopThumbnail::FreezeDesktopThumbnail(v5, v6);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
