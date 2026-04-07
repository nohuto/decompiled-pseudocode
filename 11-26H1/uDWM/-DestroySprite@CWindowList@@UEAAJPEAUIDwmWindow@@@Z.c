/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180042F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001AF20 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x1800430D0 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180074F8C (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007FEC0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // ebx
  CWindowData *v5; // rdi
  CTopLevelWindow3D *v6; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // [rsp+20h] [rbp-28h]
  CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h]

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v12 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = v12;
  if ( !v12 )
  {
    v4 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0x9B5u, 0LL);
    goto LABEL_5;
  }
  LOBYTE(v12) = 1;
  v6 = (CTopLevelWindow3D *)*((_QWORD *)v5 + 56);
  if ( !v6 )
    goto LABEL_3;
  v8 = CTopLevelWindow3D::BeginDestroySprite(v6, (bool *)&v12);
  v4 = v8;
  if ( v8 < 0 )
  {
    v11 = 2490;
    goto LABEL_15;
  }
  if ( (_BYTE)v12 )
  {
LABEL_3:
    CWindowList::ImmediateDestroySprite(this, v5);
    goto LABEL_4;
  }
  *((_BYTE *)v5 + 736) |= 4u;
  if ( !*((_QWORD *)v5 + 60)
    && !CWindowData::IsImmersiveWindow(v5)
    && (int)CWindowData::SnapshotWindow((struct CWindowSnapshot **)v5, v9, v10) >= 0 )
  {
    v8 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v4 = v8;
    if ( v8 < 0 )
    {
      v11 = 2513;
      goto LABEL_15;
    }
  }
  v8 = CGenericSet<CWindowData *>::Add((char *)this + 312, v5);
  v4 = v8;
  if ( v8 < 0 )
  {
    v11 = 2517;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v11, 0LL);
    goto LABEL_5;
  }
LABEL_4:
  if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    v8 = CWindowList::DestroyWindow(this, a2);
    v4 = v8;
    if ( v8 < 0 )
    {
      v11 = 2522;
      goto LABEL_15;
    }
  }
LABEL_5:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
