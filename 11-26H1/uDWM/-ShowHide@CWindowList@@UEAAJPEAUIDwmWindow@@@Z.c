/*
 * XREFs of ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18003C220 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // esi
  struct CWindowData *v5; // rbp
  char v6; // r8
  CAnimationScheduler *v7; // rdi
  char v8; // bl
  char v9; // al
  int v10; // eax
  struct CWindowData *v12; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+78h] [rbp+20h]

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v12 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = v12;
  if ( v12 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
    if ( v6 != (*((_BYTE *)v5 + 736) & 1) )
    {
      *((_BYTE *)v5 + 736) ^= (v6 ^ *((_BYTE *)v5 + 736)) & 1;
      LOBYTE(v12) = 0;
      v7 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
      v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
      CAnimationScheduler::OnWindowCloakChange(v7, v5, v9, v8, (bool *)&v12);
      if ( !(_BYTE)v12 )
      {
        v10 = CWindowList::ShowHide(this, v5, 1);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xB36u, 0LL);
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
