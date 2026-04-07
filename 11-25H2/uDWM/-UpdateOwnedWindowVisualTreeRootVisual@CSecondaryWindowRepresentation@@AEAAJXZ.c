/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18001F8E0
 * Callers:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800212A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUD2D_POINTANDSIZE_L@@@Z @ 0x18002773C (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180018990 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18001DFB8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x18001F8BC (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002142C (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(
        CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rbp
  CBaseObject *v3; // rsi
  CRenderDataVisual *v5; // rcx
  int TLWRootVisualType; // eax
  _QWORD *v8; // r8
  struct CVisual *RootVisualNoAddRef; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // [rsp+50h] [rbp+8h] BYREF
  struct CDrawGeometryInstruction *v16; // [rsp+58h] [rbp+10h] BYREF
  struct CBaseGeometryProxy *v17; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v15 = 0LL;
  v3 = 0LL;
  v16 = 0LL;
  v5 = (CRenderDataVisual *)*((_QWORD *)this + 7);
  v17 = 0LL;
  if ( !v5 )
    return v1;
  CRenderDataVisual::ClearInstructions(v5);
  if ( *((_QWORD *)this + 48) )
  {
    v12 = ResourceHelper::CreateRectangleGeometry(
            *((_DWORD *)this + 98),
            *((_DWORD *)this + 99),
            *((_DWORD *)this + 100),
            *((_DWORD *)this + 101),
            &v17);
    v1 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xF1u, 0LL);
      v3 = v17;
LABEL_10:
      if ( v3 )
        CBaseObject::Release(v3);
      return v1;
    }
    v3 = v17;
    v13 = CDrawGeometryInstruction::Create(*((struct CBaseLegacyMilBrushProxy **)this + 48), v17, &v16);
    v1 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xF5u, 0LL);
      v2 = v16;
    }
    else
    {
      v2 = v16;
      v14 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v16);
      v1 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xF7u, 0LL);
    }
LABEL_8:
    if ( v2 )
      CBaseObject::Release(v2);
    goto LABEL_10;
  }
  if ( *((_QWORD *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64))
       + 55) )
  {
    TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType((__int64)this);
    RootVisualNoAddRef = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(v8, TLWRootVisualType);
    v10 = CDrawVisualTreeInstruction::Create(RootVisualNoAddRef, &v15);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x100u, 0LL);
    }
    else
    {
      v11 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v15);
      v1 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x103u, 0LL);
    }
    if ( v15 )
    {
      CBaseObject::Release(v15);
      goto LABEL_8;
    }
  }
  return v1;
}
