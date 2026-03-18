/*
 * XREFs of ?SetInterpolationMode@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJH@Z @ 0x18024B72C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF610 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 */

__int64 __fastcall CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetInterpolationMode(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // r9

  if ( a2 != *(_DWORD *)(a1 + 136) )
  {
    *(_DWORD *)(a1 + 136) = a2;
    v2 = D2DInterpolationModeFromMilInterpolationMode(a2);
    *(_DWORD *)(v3 + 180) = v2;
    CBrush::NotifyOnChanged(v3, 6u, v3);
  }
  return 0LL;
}
