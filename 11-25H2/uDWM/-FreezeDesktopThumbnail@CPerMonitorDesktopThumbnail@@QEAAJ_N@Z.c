/*
 * XREFs of ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800AE364
 * Callers:
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800AE234 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x1800295A8 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x180052FC0 (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180055A78 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18006F840 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(CPerMonitorDesktopThumbnail *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  CBaseObject *v8; // rcx

  v4 = 0;
  if ( CDesktopManager::_IsMultiMon(CDesktopManager::s_pDesktopManagerInstance) || !a2 )
  {
    if ( CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
      CBaseObject::Release(this);
    *(_BYTE *)(*((_QWORD *)this + 8) + 272LL) = 0;
    v8 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
  else
  {
    if ( CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
      goto LABEL_11;
    v5 = CDesktopThumbnailCVI::_EnsureResources(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x157u, 0LL);
      return v4;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8));
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x158u, 0LL);
      return v4;
    }
    CCachedVisualImageProxy::Snapshot(*((CCachedVisualImageProxy **)this + 3), (const struct tagRECT *)this + 2);
    v7 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v4 = v7;
    if ( v7 >= 0 )
    {
LABEL_11:
      *(_BYTE *)(*((_QWORD *)this + 8) + 272LL) = a2;
      CMILRefCountBase::AddRef(this);
      return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x15Cu, 0LL);
  }
  return v4;
}
