/*
 * XREFs of ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18002E6A0
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x18002E510 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x18002E8B0 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?Reset@Mesh2D@@QEAAXXZ @ 0x18002F438 (-Reset@Mesh2D@@QEAAXXZ.c)
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18002F488 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x18007CD88 (--1Mesh2D@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CTouchDragVisual::UpdateVisual(CTouchDragVisual *this)
{
  struct CMeshGeometry2dProxy **v2; // r14
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  int DrawMesh2DInstruction; // eax
  void *v21[4]; // [rsp+38h] [rbp-D0h] BYREF
  void *v22[4]; // [rsp+58h] [rbp-B0h] BYREF
  void *v23[5]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-68h]
  void *v25[4]; // [rsp+A8h] [rbp-60h] BYREF
  void *v26[4]; // [rsp+C8h] [rbp-40h] BYREF
  void *v27[5]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v28; // [rsp+110h] [rbp+8h]

  v2 = (struct CMeshGeometry2dProxy **)((char *)this + 392);
  v3 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *v2 = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 48) = 0LL;
  }
  v5 = CRenderDataVisual::ClearInstructions(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xD2u, 0LL);
  }
  else if ( *((_DWORD *)this + 84) > 1u )
  {
    DynArrayImpl<0>::DynArrayImpl<0>((__int64)v21, 0LL, 0);
    DynArrayImpl<0>::DynArrayImpl<0>((__int64)v22, v7, v8);
    DynArrayImpl<0>::DynArrayImpl<0>((__int64)v23, v9, v10);
    v24 &= v11;
    Mesh2D::Reset((Mesh2D *)v21);
    DynArrayImpl<0>::DynArrayImpl<0>((__int64)v25, 0LL, 0);
    DynArrayImpl<0>::DynArrayImpl<0>((__int64)v26, v12, v13);
    DynArrayImpl<0>::DynArrayImpl<0>((__int64)v27, v14, v15);
    v28 &= v16;
    Mesh2D::Reset((Mesh2D *)v25);
    v18 = CTouchDragVisualHelper::TriangulatePathGeometry(
            v17,
            (int)this + 312,
            (int)this + 352,
            (unsigned int)v21,
            (__int64)v22,
            (__int64)v23);
    v6 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xE1u, 0LL);
    }
    else
    {
      DrawMesh2DInstruction = CTouchDragVisual::CreateDrawMesh2DInstruction(
                                this,
                                (const struct Mesh2D *)v21,
                                (struct CGeometry2dGroupProxy **)this + 48,
                                v2);
      v6 = DrawMesh2DInstruction;
      if ( DrawMesh2DInstruction < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DrawMesh2DInstruction, 0xE4u, 0LL);
        Mesh2D::~Mesh2D((Mesh2D *)v25);
        Mesh2D::~Mesh2D((Mesh2D *)v21);
        return v6;
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v27);
    DynArrayImpl<0>::~DynArrayImpl<0>(v26);
    DynArrayImpl<0>::~DynArrayImpl<0>(v25);
    DynArrayImpl<0>::~DynArrayImpl<0>(v23);
    DynArrayImpl<0>::~DynArrayImpl<0>(v22);
    DynArrayImpl<0>::~DynArrayImpl<0>(v21);
  }
  return v6;
}
