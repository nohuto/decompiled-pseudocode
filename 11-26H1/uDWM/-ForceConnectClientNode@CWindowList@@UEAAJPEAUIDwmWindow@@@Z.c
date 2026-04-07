/*
 * XREFs of ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180022B00 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18003C6A8 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceConnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  struct CWindowData *v5; // rbx
  int v6; // eax
  CTopLevelWindow *v7; // rcx
  int v9; // eax
  struct CWindowData *v10; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+68h] [rbp+20h]

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v10 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = v10;
  if ( v10 )
  {
    *((_BYTE *)v5 + 740) ^= (*((_BYTE *)v5 + 740) ^ (32
                                                   * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2))) & 0x20;
    v6 = CWindowData::EnsureClientAreaVisualProxy(v5);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1A37u, 0LL);
    }
    else
    {
      v7 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
      if ( v7 )
      {
        v9 = CTopLevelWindow::EnsureClientAreaNode(v7);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1A3Bu, 0LL);
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
