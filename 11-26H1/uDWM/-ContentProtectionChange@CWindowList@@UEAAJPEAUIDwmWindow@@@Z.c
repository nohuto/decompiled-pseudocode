/*
 * XREFs of ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800DFF90
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18007B4B0 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ContentProtectionChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  char v10; // al
  CTopLevelWindow *v11; // rcx
  int v12; // eax
  CWindowData *v14; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v14 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v5 = v14;
  if ( v14 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 184LL))(a2);
    LOBYTE(v7) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 192LL))(a2);
    v10 = *((_BYTE *)v5 + 739);
    if ( ((v10 & 0x20) != 0) != v6 || ((v10 & 0x40) != 0) != (_BYTE)v7 )
    {
      *((_BYTE *)v5 + 739) = v10 ^ (v10 ^ (32 * v6)) & 0x20 ^ (v10 ^ (v10 ^ (32 * v6)) & 0x20 ^ ((_BYTE)v7 << 6)) & 0x40;
      v11 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
      if ( v11 )
        CTopLevelWindow::SetVisualProtectContent(v11, v7);
      v12 = CWindowData::NotifyRepresentationChanged(v5, v7, v8, v9);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x17DCu, 0LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v4;
}
