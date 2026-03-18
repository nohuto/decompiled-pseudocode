/*
 * XREFs of ?SetSuperDownSample@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z @ 0x18024EA8C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180284660 (-SetProperty@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetSuperDownSample(__int64 a1, char a2)
{
  if ( a2 != *(_BYTE *)(a1 + 141) )
  {
    *(_BYTE *)(a1 + 141) = a2;
    if ( *(_QWORD *)(a1 + 48) )
      CResource::InvalidateConsumingAnimationsInternal(a1);
    CBrush::NotifyOnChanged(a1, 0, a1);
  }
  return 0LL;
}
