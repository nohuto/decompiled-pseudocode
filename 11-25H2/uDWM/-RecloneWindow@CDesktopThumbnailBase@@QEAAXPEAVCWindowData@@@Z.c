/*
 * XREFs of ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18004BD18
 * Callers:
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180084720 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x18004BDF8 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18004C3BC (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18004CCDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 */

void __fastcall CDesktopThumbnailBase::RecloneWindow(CDesktopThumbnailBase *this, const struct CTopLevelWindow **a2)
{
  int Index; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  CContainerVisual *v7; // r11
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  struct CTopLevelWindow *v11; // rbx
  __int64 v12; // rax
  struct CTopLevelWindow *v13; // rcx
  struct CTopLevelWindow *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  if ( a2[55] )
  {
    Index = CDesktopThumbnailBase::_GetIndex(this, a2[55]);
    v8 = (unsigned int)Index;
    if ( Index >= 0 )
    {
      CContainerVisual::RenderRecursive(v7, v5, v6);
      v9 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2[55], 0, &v14);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xAEu, 0LL);
        v13 = v14;
      }
      else
      {
        v10 = 2 * v8;
        v11 = v14;
        CContainerVisual::InsertChildBefore(this, v14, *(struct CVisual **)(*((_QWORD *)this + 25) + 8 * v10 + 8));
        CContainerVisual::RemoveChild(this, *(struct CVisualProxy ***)(*((_QWORD *)this + 25) + 8 * v10 + 8));
        v12 = *((_QWORD *)this + 25);
        v13 = *(struct CTopLevelWindow **)(v12 + 8 * v10 + 8);
        *(_QWORD *)(v12 + 8 * v10 + 8) = v11;
      }
      if ( v13 )
        CBaseObject::Release(v13);
    }
  }
}
