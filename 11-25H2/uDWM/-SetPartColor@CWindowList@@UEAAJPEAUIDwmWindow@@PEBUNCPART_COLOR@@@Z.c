/*
 * XREFs of ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z @ 0x1800E82F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180019C6C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetPartColor(CWindowList *this, struct IDwmWindow *a2, const struct NCPART_COLOR *a3)
{
  int v6; // edx
  int v7; // r8d
  CWindowData *v8; // rcx
  int v9; // edx
  CWindowData *v11; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = v11;
  if ( v11 )
  {
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 )
      {
        if ( v9 == 1 && *((_DWORD *)v11 + 49) != v7 )
        {
          *((_DWORD *)v11 + 49) = v7;
LABEL_11:
          CWindowData::OnColorizationUpdated(v8);
        }
      }
      else if ( *((_DWORD *)v11 + 48) != v7 )
      {
        *((_DWORD *)v11 + 48) = v7;
        goto LABEL_11;
      }
    }
    else if ( *((_DWORD *)v11 + 47) != v7 )
    {
      *((_DWORD *)v11 + 47) = v7;
      goto LABEL_11;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return 0LL;
}
