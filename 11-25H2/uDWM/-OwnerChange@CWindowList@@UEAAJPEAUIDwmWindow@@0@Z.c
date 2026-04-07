/*
 * XREFs of ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180083CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18001B438 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OwnerChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // edi
  struct CWindowData *v7; // rbx
  struct CWindowData *v9; // r8
  int v10; // eax
  struct CWindowData *v11; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h]

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v11 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, a3 == 0LL, &v11);
  v7 = v11;
  if ( v11 )
  {
    v9 = 0LL;
    v11 = 0LL;
    if ( a3 )
    {
      CWindowList::GetSyncedWindowData(this, a3, 0, &v11);
      v9 = v11;
    }
    v10 = CWindowList::SetOwner(this, v7, v9);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x10F4u, 0LL);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
