/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800030D0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180003EAC (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180019464 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180084008 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180087220 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // ebx
  CWindowData *v5; // rdi
  CTopLevelWindow3D *v6; // rcx
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-28h]
  CWindowData *v10; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+68h] [rbp+20h]

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v10 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = v10;
  if ( !v10 )
  {
    v4 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x88Eu, 0LL);
    goto LABEL_19;
  }
  LOBYTE(v10) = 1;
  v6 = (CTopLevelWindow3D *)*((_QWORD *)v5 + 56);
  if ( !v6 )
    goto LABEL_14;
  v7 = CTopLevelWindow3D::BeginDestroySprite(v6, (bool *)&v10);
  v4 = v7;
  if ( v7 < 0 )
  {
    v9 = 2195;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v9, 0LL);
    goto LABEL_19;
  }
  if ( (_BYTE)v10 )
  {
LABEL_14:
    CWindowList::ImmediateDestroySprite(this, v5);
  }
  else
  {
    *((_BYTE *)v5 + 672) |= 4u;
    if ( !*((_QWORD *)v5 + 60) && !CWindowData::IsImmersiveWindow(v5) && (int)CWindowData::SnapshotWindow(v5) >= 0 )
    {
      v7 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
      v4 = v7;
      if ( v7 < 0 )
      {
        v9 = 2218;
        goto LABEL_18;
      }
    }
    v7 = CGenericSet<CWindowData *>::Add((char *)this + 312, v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      v9 = 2222;
      goto LABEL_18;
    }
  }
  if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    v7 = CWindowList::DestroyWindow(this, a2);
    v4 = v7;
    if ( v7 < 0 )
    {
      v9 = 2227;
      goto LABEL_18;
    }
  }
LABEL_19:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
