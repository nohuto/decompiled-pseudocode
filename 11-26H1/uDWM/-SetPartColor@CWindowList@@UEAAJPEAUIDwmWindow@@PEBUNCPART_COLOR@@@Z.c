/*
 * XREFs of ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z @ 0x18004E360
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18004E89C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetPartColor(CWindowList *this, struct IDwmWindow *a2, const struct NCPART_COLOR *a3)
{
  int v6; // edx
  int v7; // r8d
  CWindowData *v8; // rcx
  int v9; // edx
  struct CWindowData *v11; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+20h]

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = v11;
  if ( v11 )
  {
    if ( !v6 )
    {
      if ( *((_DWORD *)v11 + 47) == v7 )
        goto LABEL_8;
      *((_DWORD *)v11 + 47) = v7;
      goto LABEL_7;
    }
    v9 = v6 - 1;
    if ( !v9 )
    {
      if ( *((_DWORD *)v11 + 48) == v7 )
        goto LABEL_8;
      *((_DWORD *)v11 + 48) = v7;
      goto LABEL_7;
    }
    if ( v9 == 1 && *((_DWORD *)v11 + 49) != v7 )
    {
      *((_DWORD *)v11 + 49) = v7;
LABEL_7:
      CWindowData::OnColorizationUpdated(v8);
    }
  }
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
