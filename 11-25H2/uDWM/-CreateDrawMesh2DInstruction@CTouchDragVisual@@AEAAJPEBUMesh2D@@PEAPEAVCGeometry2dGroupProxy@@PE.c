/*
 * XREFs of ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18002F488
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18002E6A0 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateMeshGeometry2dProxy@CCompositor@@QEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18002F5FC (-CreateMeshGeometry2dProxy@CCompositor@@QEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ?Update@CMeshGeometry2dProxy@@QEAAJHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z @ 0x18002F608 (-Update@CMeshGeometry2dProxy@@QEAAJHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z.c)
 *     ?CreateGeometry2dGroupProxy@CCompositor@@QEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x18002F66C (-CreateGeometry2dGroupProxy@CCompositor@@QEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x18002F678 (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 *     ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x18002F73C (-Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z.c)
 */

__int64 __fastcall CTouchDragVisual::CreateDrawMesh2DInstruction(
        CTouchDragVisual *this,
        const struct Mesh2D *a2,
        struct CGeometry2dGroupProxy **a3,
        struct CMeshGeometry2dProxy **a4)
{
  CBaseObject *v6; // rsi
  int MeshGeometry2dProxy; // ebx
  unsigned int v10; // eax
  CBaseObject *v11; // rdi
  CBaseObject *v12; // rcx
  CBaseObject *v14; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  v14 = 0LL;
  MeshGeometry2dProxy = CCompositor::CreateMeshGeometry2dProxy(
                          *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                          a4);
  if ( MeshGeometry2dProxy < 0 )
  {
    v10 = 246;
    goto LABEL_15;
  }
  MeshGeometry2dProxy = CMeshGeometry2dProxy::Update(
                          *a4,
                          *((_QWORD *)a2 + 8),
                          *(const struct D2D_POINT_3F **)a2,
                          *((const struct D2D_POINT_2F **)a2 + 4),
                          *((_DWORD *)a2 + 6),
                          *((const unsigned int **)a2 + 8),
                          *((_DWORD *)a2 + 22));
  if ( MeshGeometry2dProxy < 0 )
  {
    v10 = 253;
    goto LABEL_15;
  }
  MeshGeometry2dProxy = CCompositor::CreateGeometry2dGroupProxy(
                          *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                          a3);
  if ( MeshGeometry2dProxy < 0 )
  {
    v10 = 255;
    goto LABEL_15;
  }
  MeshGeometry2dProxy = CGeometry2dGroupProxy::Update(*a3, *a4);
  if ( MeshGeometry2dProxy < 0 )
  {
    v10 = 256;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MeshGeometry2dProxy, v10, 0LL);
    if ( *a4 )
    {
      CBaseObject::Release(*a4);
      *a4 = 0LL;
    }
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
    if ( v6 )
    {
      v12 = v6;
      goto LABEL_9;
    }
    return (unsigned int)MeshGeometry2dProxy;
  }
  MeshGeometry2dProxy = CDrawMesh2DInstruction::Create(
                          *a3,
                          *(struct CBitmapSourceProxy **)(*((_QWORD *)this + 43) + 16LL),
                          &v14);
  if ( MeshGeometry2dProxy < 0 )
  {
    v6 = v14;
    v10 = 257;
    goto LABEL_15;
  }
  v11 = v14;
  CRenderDataVisual::AddInstruction(this, v14);
  if ( v11 )
  {
    v12 = v11;
LABEL_9:
    CBaseObject::Release(v12);
  }
  return (unsigned int)MeshGeometry2dProxy;
}
