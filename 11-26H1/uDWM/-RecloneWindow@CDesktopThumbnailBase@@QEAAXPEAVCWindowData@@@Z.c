/*
 * XREFs of ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180025564
 * Callers:
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180062C70 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180025648 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 */

void __fastcall CDesktopThumbnailBase::RecloneWindow(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  const struct CTopLevelWindow *v2; // r11
  int Index; // eax
  CContainerVisual *v6; // r11
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  struct CTopLevelWindow *v10; // rbx
  __int64 v11; // rax
  struct CTopLevelWindow *v12; // rcx
  struct CTopLevelWindow *v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = (const struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
  v13 = 0LL;
  if ( v2 )
  {
    Index = CDesktopThumbnailBase::_GetIndex(this, v2);
    v7 = (unsigned int)Index;
    if ( Index >= 0 )
    {
      CContainerVisual::RenderRecursive(v6);
      v8 = CTopLevelWindow::CloneVisualTreeForLivePreview(*((CTopLevelWindow **)a2 + 55), 0, &v13);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xAEu, 0LL);
        v12 = v13;
      }
      else
      {
        v9 = 2 * v7;
        v10 = v13;
        CContainerVisual::InsertChildBefore(this, v13, *(struct CVisual **)(*((_QWORD *)this + 23) + 8 * v9 + 8));
        CContainerVisual::RemoveChild(this, *(struct CVisual **)(*((_QWORD *)this + 23) + 8 * v9 + 8));
        v11 = *((_QWORD *)this + 23);
        v12 = *(struct CTopLevelWindow **)(v11 + 8 * v9 + 8);
        *(_QWORD *)(v11 + 8 * v9 + 8) = v10;
      }
      if ( v12 )
        CBaseObject::Release(v12);
    }
  }
}
