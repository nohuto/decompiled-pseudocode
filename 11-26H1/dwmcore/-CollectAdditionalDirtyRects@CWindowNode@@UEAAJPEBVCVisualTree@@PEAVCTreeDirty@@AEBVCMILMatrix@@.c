/*
 * XREFs of ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800588A0
 * Callers:
 *     <none>
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058B30 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x18012F694 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801580A0 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRects(
        __int64 a1,
        CDesktopTree *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        __int64 a5)
{
  int v8; // eax
  unsigned int v9; // edi
  char v11; // al
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  struct CShape *v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CVisual::CollectAdditionalDirtyRects((CVisual *)a1, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xCFu, 0LL);
  }
  else if ( *(_BYTE *)(a1 + 745) )
  {
    v11 = *(_BYTE *)(a1 + 896);
    if ( (v11 & 2) == 0
      && (v11 & 4) != 0
      && (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    {
      v12 = (_QWORD *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)(a1 + 824));
      LOBYTE(v13) = 1;
      CGdiSpriteBitmap::GetAccumShape(*v12, v15, v13);
      if ( v15[0] )
      {
        v14 = (_QWORD *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)(a1 + 824));
        if ( (int)CDesktopTree::AddNewComposeTopContent(
                    a2,
                    (struct IBitmapResource *)((*v14 + 104LL) & -(__int64)(*v14 != 0LL)),
                    v15[0],
                    a4) >= 0 )
          *(_BYTE *)(a1 + 896) |= 2u;
      }
      CShapePtr::~CShapePtr((CShapePtr *)v15);
    }
  }
  return v9;
}
