/*
 * XREFs of ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180007D60
 * Callers:
 *     ?RealizePrimitive@CReconstructableDrawListEntry@@QEAAJXZ @ 0x180007A40 (-RealizePrimitive@CReconstructableDrawListEntry@@QEAAJXZ.c)
 * Callees:
 *     ??0CCpuClip@@QEAA@XZ @ 0x180007CF8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180009380 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18000B410 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::BuildPrimitiveFromReconstructableDrawList(
        const struct CReconstructableDrawListEntry *a1,
        struct CDrawListPrimitive **a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h]
  _BYTE *v16; // [rsp+50h] [rbp-B0h]
  unsigned int v17; // [rsp+58h] [rbp-A8h]
  char v18; // [rsp+5Ch] [rbp-A4h]
  char v19; // [rsp+5Dh] [rbp-A3h]
  __int16 v20; // [rsp+5Eh] [rbp-A2h]
  _DWORD v21[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+74h] [rbp-8Ch]
  int v25[2]; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+84h] [rbp-7Ch]
  __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  _OWORD v32[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-20h]
  char *v34; // [rsp+E8h] [rbp-18h]
  _BYTE v35[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v36[96]; // [rsp+100h] [rbp+0h] BYREF
  int v37[7]; // [rsp+160h] [rbp+60h] BYREF
  char v38; // [rsp+17Dh] [rbp+7Dh]
  __int64 v39; // [rsp+210h] [rbp+110h]
  __int64 v40; // [rsp+9B0h] [rbp+8B0h]
  int v41; // [rsp+1150h] [rbp+1050h]
  __int64 v42; // [rsp+1158h] [rbp+1058h]
  __int64 v43; // [rsp+1160h] [rbp+1060h]

  v2 = *((_QWORD *)a1 + 2);
  CCpuClip::CCpuClip((CCpuClip *)v35);
  LODWORD(v14) = *(_DWORD *)(v2 + 16);
  v15 = 1065353216LL;
  v16 = v35;
  v5 = *((_DWORD *)a1 + 16) & 0xFFFFFEFD;
  v18 = 0;
  v17 = v5;
  v19 = *(_BYTE *)(v2 + 81);
  v20 = 0;
  HIDWORD(v14) = 1065353216;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v37);
  CDrawListEntryBuilder::Begin(
    (CDrawListEntryBuilder *)v37,
    (const struct DrawListEntryBuilderSetupParams *)&v14,
    *((struct CRenderingEffect **)a1 + 3));
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_BYTE *)a1 + 101) == 0;
  v8 = *((_QWORD *)a1 + 11);
  v31 = 0LL;
  v28 = 1015021568LL;
  v30 = 0LL;
  LODWORD(v30) = v6;
  v9 = *(_OWORD *)(v2 + 56);
  BYTE13(v31) = *((_BYTE *)a1 + 100);
  v29 = v9;
  BYTE12(v31) = 1;
  DWORD2(v31) = !v7;
  v32[1] = 0LL;
  v32[0] = *((_OWORD *)a1 + 3);
  gsl::details::extent_type<-1>::extent_type<-1>(&v14, v8);
  if ( v14 == -1 || a1 == (const struct CReconstructableDrawListEntry *)-104LL && v14 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v33 = v14;
  v34 = (char *)a1 + 104;
  CDrawListEntryBuilder::AppendHWGeometry(
    (CDrawListEntryBuilder *)v37,
    (const struct Mesh::MeshDesc *)&v28,
    (const struct PrimitiveVertexAttributesDesc *)v32);
  v10 = v42;
  v21[0] = v37[1];
  v21[1] = v37[2];
  gsl::details::extent_type<-1>::extent_type<-1>(&v14, (v43 - v42) >> 1);
  if ( v14 == -1 || !v10 && v14 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *(_QWORD *)v22 = v40;
  *(_QWORD *)v25 = v39;
  v23 = 8 * v37[0] + 16;
  v24 = v41;
  v26 = v23;
  v27 = v41;
  v15 = v10;
  v11 = CDrawListPrimitive::Create((int)v25, (int)v22, v37[0], v21, v38, (__int64)a2);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x645u, 0LL);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v37);
  CShapePtr::~CShapePtr((CShapePtr *)v36);
  return v12;
}
