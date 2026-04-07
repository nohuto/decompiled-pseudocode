/*
 * XREFs of ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800E46F8
 * Callers:
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180019A40 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001B80C (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ @ 0x18003EA94 (-IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::ToggleAutoParenting(CWindowList *this, struct CWindowData *a2)
{
  int inserted; // edi
  __int64 v4; // rdx
  bool v6; // zf
  struct tagPOINT *v7; // r8
  __int64 v8; // rcx
  LONG v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = (struct tagPOINT)this;
  CVisual::RemoveSelfFromParent(*((CContainerVisual ***)a2 + 55));
  *((_BYTE *)a2 + 742) = *((_BYTE *)a2 + 742) & 0xF7 | ~*((_BYTE *)a2 + 742) & 8;
  inserted = CWindowList::InsertIntoVisualTree(
               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
               (struct _LIST_ENTRY *)a2);
  if ( inserted < 0 )
  {
    v4 = 8458LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  inserted = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 59)
                                                                     + 248LL))(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
               a2);
  if ( inserted < 0 )
  {
    v4 = 8459LL;
    goto LABEL_3;
  }
  v6 = (*((_BYTE *)a2 + 742) & 8) == 0;
  v7 = (struct tagPOINT *)*((_QWORD *)a2 + 55);
  v11 = 0LL;
  if ( v6 )
  {
    if ( CTopLevelWindow::IsWindowOffscreen((CTopLevelWindow *)v7) )
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
  else
  {
    v8 = *((_QWORD *)a2 + 75);
    v11 = v7[7];
    v11.x -= *(_DWORD *)(v8 + 48);
    v11.y -= *(_DWORD *)(v8 + 52);
  }
  CVisual::SetOffset(v7, &v11, (__int64)v7);
  return 0LL;
}
