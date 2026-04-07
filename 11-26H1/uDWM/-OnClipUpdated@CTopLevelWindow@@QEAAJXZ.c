/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800173EC
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BC30 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180016700 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180017664 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18005DBC4 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnClipUpdated(CTopLevelWindow *this, __int64 a2)
{
  CAccent *v3; // rcx
  int updated; // eax
  unsigned int v5; // ebx

  if ( (*(_BYTE *)(*((_QWORD *)this + 87) + 737LL) & 4) != 0 )
    CTopLevelWindow::OnBlurBehindUpdated(this);
  v3 = (CAccent *)*((_QWORD *)this + 30);
  if ( v3 )
  {
    a2 = *((_QWORD *)this + 87);
    if ( (*(_BYTE *)(a2 + 172) & 0x10) != 0 )
      CAccent::SetClipRegion(v3, *(struct CBaseGeometryProxy **)(a2 + 424));
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(this, a2);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6F0u, 0LL);
  return v5;
}
