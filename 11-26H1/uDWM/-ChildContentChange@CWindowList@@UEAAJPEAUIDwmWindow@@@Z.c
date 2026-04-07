/*
 * XREFs of ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180062C70
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180025564 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ChildContentChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  CWindowData *v6; // rbx
  char v7; // al
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rdx
  CDesktopManager *v11; // rbp
  int v13; // eax
  CWindowData *v14; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+78h] [rbp+20h]

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0;
  v14 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v6 = v14;
  if ( v14 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
    LOBYTE(v10) = *((_BYTE *)v6 + 737);
    if ( ((v10 & 0x10) != 0) == v7
      || (*((_BYTE *)v6 + 737) = v10 ^ (v10 ^ (16 * v7)) & 0x10,
          v13 = CWindowData::NotifyRepresentationChanged(v6, v10, v8, v9),
          v5 = v13,
          v13 >= 0) )
    {
      v11 = CDesktopManager::s_pDesktopManagerInstance;
      if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 310) )
      {
        do
          CDesktopThumbnailBase::RecloneWindow(*(CDesktopThumbnailBase **)(*((_QWORD *)v11 + 152) + 8LL * v4++), v6);
        while ( v4 < *((_DWORD *)v11 + 310) );
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x17B2u, 0LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
