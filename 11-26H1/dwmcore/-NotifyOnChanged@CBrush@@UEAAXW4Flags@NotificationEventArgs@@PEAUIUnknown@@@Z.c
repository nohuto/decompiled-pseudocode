/*
 * XREFs of ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630
 * Callers:
 *     ?SetSource@CMaskBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801D30E0 (-SetSource@CMaskBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ?SetMask@CMaskBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801D3170 (-SetMask@CMaskBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ?SetStretchMode@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJW4Enum@MilStretchMode@@@Z @ 0x1801DA1F4 (-SetStretchMode@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJW4Enum@MilStretchMode@.c)
 *     ?SetSurfaceInternal@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020FE5C (-SetSurfaceInternal@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?OnHorizontalAlignmentChanged@CSurfaceBrush@@QEAAXXZ @ 0x18021F028 (-OnHorizontalAlignmentChanged@CSurfaceBrush@@QEAAXXZ.c)
 *     ?SetInterpolationMode@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJH@Z @ 0x18024B72C (-SetInterpolationMode@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJH@Z.c)
 *     ?SetIsAtlasSurface@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z @ 0x18024B790 (-SetIsAtlasSurface@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z.c)
 *     ?SetSnapToPixels@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z @ 0x18024E948 (-SetSnapToPixels@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z.c)
 *     ?SetSuperDownSample@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z @ 0x18024EA8C (-SetSuperDownSample@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z.c)
 *     ?SetTransform@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x18024EEE0 (-SetTransform@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCComponentTransform2.c)
 *     ?OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ @ 0x1802841D8 (-OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ.c)
 *     ?OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802843F4 (-OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_P.c)
 *     ?OnVerticalAlignmentChanged@CSurfaceBrush@@QEAAXXZ @ 0x180284614 (-OnVerticalAlignmentChanged@CSurfaceBrush@@QEAAXXZ.c)
 *     ?SetProperty@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180284660 (-SetProperty@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID.c)
 *     ?SetSurfaceDirtyRect@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180284774 (-SetSurfaceDirtyRect@CSurfaceBrush@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z @ 0x18015AD10 (-AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrush::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ecx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = a2;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    if ( !a3 || a3 != a1 )
      *(_QWORD *)(a1 + 88) = a3;
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      if ( a2 == 14 )
      {
        *(_DWORD *)(v5 + 40) = 0;
        DynArrayImpl<0>::ShrinkToSize(v5 + 16, 24LL);
        *(_BYTE *)(v5 + 200) = 1;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(a1 + 80);
      }
      else if ( a2 == 1 )
      {
        CBrushRenderingGraph::AdjustNotification(
          *(CBrushRenderingGraph **)(a1 + 80),
          (enum NotificationEventArgs::Flags *)&v11,
          (const struct CBrush *)a1);
        v3 = v11;
      }
    }
    v6 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 4)) & 0xC;
    if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 4)) & 0xC) & 0xC) != 4
      || !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 184LL))(a1, v3, a1) )
    {
      goto LABEL_7;
    }
    if ( (*(_QWORD *)(a1 + 32) & 3) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 32) & 3LL) == 1 )
      {
        v8 = (_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_15;
      }
      if ( (*(_QWORD *)(a1 + 32) & 3LL) == 2 )
      {
        v8 = 0LL;
        goto LABEL_15;
      }
      if ( (*(_QWORD *)(a1 + 32) & 3LL) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v8 = (_QWORD *)(a1 + 32);
LABEL_15:
    v9 = detail::pointer_buffer_impl<CResource *,0>::last((__int64 *)(a1 + 32));
    while ( v8 != (_QWORD *)v9 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 88LL))(a1, *v8++, v3, a1);
LABEL_7:
    v7 = *(_DWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 40) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(4 * (v7 >> 2) - 4)) & 0xC;
  }
}
