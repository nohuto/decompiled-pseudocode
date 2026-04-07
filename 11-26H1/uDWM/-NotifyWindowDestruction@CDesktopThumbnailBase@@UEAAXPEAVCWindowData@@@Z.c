/*
 * XREFs of ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x180026E50
 * Callers:
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x180026EE0 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180025648 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180060188 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyWindowDestruction(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow **a2)
{
  int Index; // eax
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2[55]);
  v4 = (unsigned int)Index;
  if ( Index >= 0 )
  {
    v5 = v3 + 23;
    CContainerVisual::RemoveChild((CContainerVisual *)v3, *(struct CVisual **)(v3[23] + 16LL * (unsigned int)Index + 8));
    v6 = *(CBaseObject **)(*v5 + 16 * v4);
    if ( v6 )
      CBaseObject::Release(v6);
    v7 = *(CBaseObject **)(*v5 + 16 * v4 + 8);
    if ( v7 )
      CBaseObject::Release(v7);
    DynArray<CIconicBitmapPending,0>::RemoveAt(v5, (unsigned int)v4);
  }
}
