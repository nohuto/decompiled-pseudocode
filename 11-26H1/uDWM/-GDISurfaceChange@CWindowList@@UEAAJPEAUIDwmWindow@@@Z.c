/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180019094 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001912C (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  struct CWindowData *v5; // rsi
  char v6; // al
  CWindowList *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  int v11; // eax
  HWND v12; // rbx
  int updated; // eax
  struct CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+20h]

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v15 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v5 = v15;
  if ( v15 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 328LL))(a2);
    LOBYTE(v7) = *((_BYTE *)v5 + 737);
    *((_BYTE *)v5 + 737) = (unsigned __int8)v7 ^ ((unsigned __int8)v7 ^ (32 * v6)) & 0x20;
    CWindowList::OnGDISurfaceChange(v7, v5);
    v11 = CWindowData::NotifyRepresentationChanged(v5, v8, v9, v10);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x17F5u, 0LL);
    }
    else
    {
      v12 = (HWND)*((_QWORD *)v5 + 5);
      if ( v12 == CWindowList::GetShellWindowForDesktop(this, *((_QWORD *)v5 + 17)) )
      {
        updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v5 + 17));
        v4 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x17FAu, 0LL);
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
