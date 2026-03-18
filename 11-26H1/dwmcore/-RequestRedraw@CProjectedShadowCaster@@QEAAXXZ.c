/*
 * XREFs of ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x1800D52F8
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1800D5144 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x18014E1E0 (-DirtyProjectedShadowCasters@CVisual@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801D3E30 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x180214FEC (-ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWC.c)
 *     ?ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL@@@Z @ 0x180219A70 (-ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRO.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180190F7C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::RequestRedraw(CProjectedShadowCaster *this)
{
  CProjectedShadowScene **v1; // rdi
  CProjectedShadowScene **i; // rbx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = (CProjectedShadowScene **)*((_QWORD *)this + 14);
    for ( i = (CProjectedShadowScene **)*((_QWORD *)this + 13); i != v1; ++i )
      CProjectedShadowScene::RequestRedrawAll(*i);
  }
}
