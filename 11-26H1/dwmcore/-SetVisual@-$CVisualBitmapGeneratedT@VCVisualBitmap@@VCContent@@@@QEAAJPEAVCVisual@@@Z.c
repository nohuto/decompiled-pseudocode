/*
 * XREFs of ?SetVisual@?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z @ 0x1801D8A6C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualBitmapGeneratedT<CVisualBitmap,CContent>::SetVisual(__int64 a1, struct CResource *a2)
{
  CVisual **v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (CVisual **)(a1 + 72);
  if ( a2 != *(struct CResource **)(a1 + 72) )
  {
    CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)a1, (struct CResource **)(a1 + 72), a2);
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *(_QWORD *)(a1 + 96) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 88);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
    if ( *v2 )
      CVisual::GetVisualTree(*v2, (struct CVisualTree **)(a1 + 88), 1);
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return 0LL;
}
