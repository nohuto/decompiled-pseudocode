/*
 * XREFs of ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800E878C
 * Callers:
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180006D20 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180007764 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001BF3C (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ @ 0x18008F1B0 (-IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_AutoParentedFilteredCaptureFix@@@details@wil@@QEAA_NXZ @ 0x1800C50CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_AutoParentedFilteredCaptu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::ToggleAutoParenting(CWindowList *this, struct CWindowData *a2)
{
  CDesktopManager *v3; // rax
  int inserted; // edi
  __int64 v5; // rdx
  struct tagPOINT *v7; // r8
  __int64 v8; // rcx
  LONG v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = (struct tagPOINT)this;
  CVisual::RemoveSelfFromParent(*((CContainerVisual ***)a2 + 55));
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)a2 + 678) ^= 0x10u;
  inserted = CWindowList::InsertIntoVisualTree(*((CWindowList **)v3 + 53), (struct _LIST_ENTRY *)a2);
  if ( inserted < 0 )
  {
    v5 = 8119LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_AutoParentedFilteredCaptureFix>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_AutoParentedFilteredCaptureFix>::GetImpl'::`2'::impl) )
  {
    inserted = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 58)
                                                                       + 224LL))(
                 *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
                 a2);
    if ( inserted < 0 )
    {
      v5 = 8122LL;
      goto LABEL_3;
    }
  }
  v11 = 0LL;
  v7 = (struct tagPOINT *)*((_QWORD *)a2 + 55);
  if ( (*((_BYTE *)a2 + 678) & 0x10) != 0 )
  {
    v8 = *((_QWORD *)a2 + 75);
    v11 = v7[8];
    v11.x -= *(_DWORD *)(v8 + 48);
    v11.y -= *(_DWORD *)(v8 + 52);
  }
  else
  {
    if ( CTopLevelWindow::IsWindowOffscreen(*((CTopLevelWindow **)a2 + 55)) )
    {
      v9 = -32000;
      v11.x = -32000;
    }
    else
    {
      v11.x = *((_DWORD *)a2 + 12);
      v9 = *((_DWORD *)a2 + 13);
    }
    v11.y = v9;
  }
  CVisual::SetOffset(v7, &v11);
  return 0LL;
}
