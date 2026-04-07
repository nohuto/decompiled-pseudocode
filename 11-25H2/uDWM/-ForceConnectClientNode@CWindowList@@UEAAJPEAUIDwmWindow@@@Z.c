/*
 * XREFs of ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4340
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18000BEF0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180090B34 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceConnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rbx
  int v6; // eax
  CTopLevelWindow *v7; // rcx
  int v8; // eax
  CWindowData *v10; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v10 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = v10;
  if ( v10 )
  {
    *((_BYTE *)v5 + 676) ^= (*((_BYTE *)v5 + 676) ^ (32
                                                   * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2))) & 0x20;
    v6 = CWindowData::EnsureClientAreaVisualProxy(v5);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1916u, 0LL);
    }
    else
    {
      v7 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
      if ( v7 )
      {
        v8 = CTopLevelWindow::EnsureClientAreaNode(v7);
        v4 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x191Au, 0LL);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
