/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180083E90
 * Callers:
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800930F0 (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180019984 (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180050A50 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // bl
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // eax
  CWindowData *v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h]

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 0, &v9);
  v4 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
  if ( v9 && !CWindowData::IsImmersiveWindow(v9) )
  {
    if ( (*((_BYTE *)v9 + 674) & 2) != 0 )
    {
      if ( !v4 )
        DynArray<CStoryboard const *,0>::Remove((__int64 *)this + 62, (__int64 *)&v9);
    }
    else if ( v4 )
    {
      v5 = *((_DWORD *)this + 130);
      v6 = v5 + 1;
      if ( v5 + 1 < v5 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
      }
      else if ( v6 > *((_DWORD *)this + 129) )
      {
        v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 496, 8, 1, &v9);
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xBEu, 0LL);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 62) + 8LL * v5) = v9;
        *((_DWORD *)this + 130) = v6;
      }
    }
    *((_BYTE *)v9 + 674) ^= (*((_BYTE *)v9 + 674) ^ (2 * v4)) & 2;
    CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(
      *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
      v9);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
