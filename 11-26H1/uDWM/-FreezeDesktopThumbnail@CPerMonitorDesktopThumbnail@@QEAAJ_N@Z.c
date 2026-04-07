/*
 * XREFs of ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800ADA68
 * Callers:
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800AD934 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180034A5C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x1800614B8 (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180083DA8 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 *     ?Release@CVisualBrush@@QEAAXXZ @ 0x180083FAC (-Release@CVisualBrush@@QEAAXXZ.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(CPerMonitorDesktopThumbnail *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax

  v4 = 0;
  if ( CDesktopManager::_IsMultiMon(CDesktopManager::s_pDesktopManagerInstance) || !a2 )
  {
    if ( CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
      CBaseObject::Release(this);
    *(_BYTE *)(*((_QWORD *)this + 8) + 256LL) = 0;
    CVisualBrush::Release((CPerMonitorDesktopThumbnail *)((char *)this + 24));
  }
  else
  {
    if ( CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
      goto LABEL_9;
    v5 = CDesktopThumbnailCVI::_EnsureResources(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x156u, 0LL);
      return v4;
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8));
    CVisualBrush::FreezeImpl((__int64)this + 24, 1u);
    v6 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v4 = v6;
    if ( v6 >= 0 )
    {
LABEL_9:
      *(_BYTE *)(*((_QWORD *)this + 8) + 256LL) = a2;
      CBaseObject::AddRef(this);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x15Bu, 0LL);
    }
  }
  return v4;
}
