/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B180
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001AF20 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B410 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18003B47C (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BC30 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18003C220 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18003C6A8 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rsi
  struct CWindowData *v5; // rcx
  struct CWindowData **v6; // rax
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  __int64 v8; // r8
  struct _LIST_ENTRY **p_Flink; // rcx
  int v10; // eax
  unsigned int v11; // ebp
  CAnimationScheduler *v12; // rdi
  char v13; // bl
  char v14; // al
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-38h]
  struct CWindowData *v18; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+78h] [rbp+20h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v18);
  v4 = v18;
  if ( !v18 )
  {
    if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2)
      || (CWindowList::GetSyncedWindowData(this, a2, 0, &v18), (v4 = v18) == 0LL) )
    {
      v11 = -2147024890;
      v17 = 2307;
      goto LABEL_21;
    }
  }
  if ( (*((_BYTE *)v4 + 736) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v4);
  if ( !(*(unsigned __int8 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2) )
  {
    v10 = CWindowData::EnsureClientAreaVisualProxy(v4);
    v11 = v10;
    if ( v10 < 0 )
    {
      v17 = 2319;
LABEL_15:
      v16 = v10;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v17, 0LL);
      goto LABEL_12;
    }
  }
  CWindowList::SyncWindowData(this, a2, v4);
  v5 = *(struct CWindowData **)v4;
  v6 = (struct CWindowData **)*((_QWORD *)v4 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
    goto LABEL_22;
  *v6 = v5;
  *((_QWORD *)v5 + 1) = v6;
  WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v4 + 17));
  if ( !WindowListForDesktopCanFail )
  {
    v11 = -2147024882;
    v17 = 2335;
LABEL_21:
    v16 = v11;
    goto LABEL_16;
  }
  p_Flink = &WindowListForDesktopCanFail->Blink->Flink;
  if ( *p_Flink != WindowListForDesktopCanFail )
LABEL_22:
    __fastfail(3u);
  *(_QWORD *)v4 = WindowListForDesktopCanFail;
  *((_QWORD *)v4 + 1) = p_Flink;
  *p_Flink = (struct _LIST_ENTRY *)v4;
  WindowListForDesktopCanFail->Blink = (struct _LIST_ENTRY *)v4;
  CWindowData::ClearSnapshot(v4, 1, v8, 1);
  v10 = CWindowList::ClipChange(this, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 2344;
    goto LABEL_15;
  }
  if ( (*((_BYTE *)v4 + 736) & 1) != 0 )
  {
    LOBYTE(v18) = 0;
    v12 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
    v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v12, v4, v14, v13, (bool *)&v18);
    if ( !(_BYTE)v18 )
    {
      v10 = CWindowList::ShowHide(this, v4, 1);
      v11 = v10;
      if ( v10 < 0 )
      {
        v17 = 2353;
        goto LABEL_15;
      }
    }
  }
LABEL_12:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v11;
}
