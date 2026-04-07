/*
 * XREFs of ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4720
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001AA10 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001D380 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001F854 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180055A78 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800AE234 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::FreezeRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rbx
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  CWindowData *v11; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v11 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v5 = v11;
  if ( v11 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
    if ( *((_QWORD *)v5 + 5) != CWindowList::GetShellWindowForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                  *((_QWORD *)v5 + 17))
      || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() == v6 )
    {
      if ( ((*((_BYTE *)v5 + 676) & 8) != 0) != v6 )
      {
        *((_BYTE *)v5 + 676) ^= (*((_BYTE *)v5 + 676) ^ (8 * v6)) & 8;
        if ( (v6 & 1) != 0 )
          CWindowData::SnapshotWindow((struct CWindowSnapshot **)v5, v7, v8);
        else
          CWindowData::ClearSnapshot(v5, 1, v8, 0);
        v9 = CWindowData::NotifyRepresentationChanged(v5);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1738u, 0LL);
      }
    }
    else
    {
      CDesktopThumbnail::FreezeDesktopThumbnail(v5, v6);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v4;
}
