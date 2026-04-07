/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001CB4C
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008E930 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019C0C (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x18001C080 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x180074AD0 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnClipUpdated(CAccent **this)
{
  CAccent *v2; // rcx
  int updated; // eax
  unsigned int v4; // ebx
  CAccent *v6; // rdx

  if ( (*((_BYTE *)this[89] + 673) & 4) != 0 )
    CTopLevelWindow::OnBlurBehindUpdated((CTopLevelWindow *)this);
  v2 = this[32];
  if ( v2 )
  {
    v6 = this[89];
    if ( (*((_BYTE *)v6 + 172) & 0x10) != 0 )
      CAccent::SetClipRegion(v2, *((struct CBaseGeometryProxy **)v6 + 53));
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity((CTopLevelWindow *)this);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x76Bu, 0LL);
  return v4;
}
