/*
 * XREFs of ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x18008B550
 * Callers:
 *     ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800381B0 (-_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C5700 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032A64 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 */

void __fastcall CStoryboard::ResizeToSnapshot(HWND a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  struct tagRECT v3; // xmm0
  CDesktopManager *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // r8d
  struct CTransitionWindowSnapshot *v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v6 = CDesktopManager::s_pDesktopManagerInstance;
  v7 = 0;
  *a3 = v3;
  v11 = 0LL;
  if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(*((CTransitionVisualController **)v6 + 24), a1, &v11) >= 0 )
  {
    v8 = *((_QWORD *)v11 + 30);
    v9 = 0;
    if ( (int)(*((_QWORD *)v11 + 31) - v8) >= 0 )
      v9 = *((_QWORD *)v11 + 31) - v8;
    v10 = HIDWORD(*((_QWORD *)v11 + 31)) - HIDWORD(v8);
    a3->right = a3->left + v9;
    if ( v10 >= 0 )
      v7 = v10;
    a3->bottom = a3->top + v7;
  }
}
