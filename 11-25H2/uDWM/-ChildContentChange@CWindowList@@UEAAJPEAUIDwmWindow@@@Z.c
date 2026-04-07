/*
 * XREFs of ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180084720
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001D380 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18004BD18 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ChildContentChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  CWindowData *v6; // rbx
  char v7; // al
  int v8; // eax
  CDesktopManager *v9; // rbp
  CWindowData *v11; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+78h] [rbp+20h]

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0;
  v11 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v6 = v11;
  if ( v11 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
    if ( ((*((_BYTE *)v6 + 673) & 0x10) != 0) == v7
      || (*((_BYTE *)v6 + 673) ^= (*((_BYTE *)v6 + 673) ^ (16 * v7)) & 0x10,
          v8 = CWindowData::NotifyRepresentationChanged(v6),
          v5 = v8,
          v8 >= 0) )
    {
      v9 = CDesktopManager::s_pDesktopManagerInstance;
      if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 318) )
      {
        do
          CDesktopThumbnailBase::RecloneWindow(
            *(CDesktopThumbnailBase **)(*((_QWORD *)v9 + 156) + 8LL * v4++),
            (const struct CTopLevelWindow **)v6);
        while ( v4 < *((_DWORD *)v9 + 318) );
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1691u, 0LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
