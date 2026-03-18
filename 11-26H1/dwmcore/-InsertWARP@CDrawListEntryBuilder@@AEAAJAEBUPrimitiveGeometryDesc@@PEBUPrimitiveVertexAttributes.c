/*
 * XREFs of ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x180144440
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800105E0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18000E850 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA?AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z @ 0x180144340 (-ClipRectAndEdgeFlags@@YA-AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z.c)
 *     ?HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z @ 0x180144700 (-HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180144760 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        struct _D3DCOLORVALUE *a3,
        char a4)
{
  unsigned int v4; // ebx
  bool v6; // zf
  unsigned int v8; // esi
  bool v9; // r14
  int appended; // eax
  int v12; // eax
  CCpuClip *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+48h] [rbp-B8h] BYREF
  struct CShape *v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+A0h] [rbp-60h]
  _BYTE v23[72]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v24; // [rsp+F8h] [rbp-8h] BYREF

  v4 = 0;
  v6 = *((_DWORD *)this + 3) == 1;
  v19 = *(_OWORD *)a2;
  if ( v6 )
    v8 = 0;
  else
    v8 = *((_DWORD *)a2 + 4);
  v9 = 0;
  v18 = v8;
  if ( a4 )
  {
    v13 = (CCpuClip *)*((_QWORD *)this + 2);
    v20 = 0LL;
    v22 = 0;
    v14 = CCpuClip::ResolveClip(v13, &v20, (struct CMILMatrix *)v21);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x28Eu, 0LL);
      return v4;
    }
    if ( *((_BYTE *)this + 4489) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v23, (const struct D2D_MATRIX_3X2_F *)((char *)this + 32));
      CMILMatrix::Multiply((CMILMatrix *)v21, (const struct CMILMatrix *)v23);
    }
    v24 = 0LL;
    v15 = (*(__int64 (__fastcall **)(struct CShape *, __int128 *, _BYTE *))(*(_QWORD *)v20 + 48LL))(v20, &v24, v21);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x297u, 0LL);
      return v4;
    }
    v17 = ClipRectAndEdgeFlags(
            (float *)&v19,
            v8,
            (float *)&v24,
            *(_DWORD *)(*((_QWORD *)this + 2) + 100LL) != 1 ? 0x3030303 : 0,
            &v19,
            &v18);
    v8 = v18;
    v9 = v17 != 0;
  }
  if ( *((float *)&v19 + 2) > *(float *)&v19 && *((float *)&v19 + 3) > *((float *)&v19 + 1) )
  {
    if ( *((_BYTE *)this + 4491)
      && (float)((float)(*((float *)&v19 + 3) - *((float *)&v19 + 1)) * (float)(*((float *)&v19 + 2) - *(float *)&v19)) >= (float)CCommonRegistryData::MegaRectSize )
    {
      appended = CDrawListEntryBuilder::AppendReconstructableEntry((unsigned int *)this, &v19, v8, 1, 0, a3, 1026);
      v4 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x2B0u, 0LL);
        return v4;
      }
      if ( (unsigned __int8)HasAntialiasEdgeFlags(v8) )
      {
        v16 = CDrawListEntryBuilder::AppendReconstructableEntry((unsigned int *)this, &v19, v8, 0, 1, a3, 1024);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x2BBu, 0LL);
          return v4;
        }
      }
    }
    else
    {
      v12 = CDrawListEntryBuilder::AppendReconstructableEntry((unsigned int *)this, &v19, v8, 1, 1, a3, 1024);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x2C6u, 0LL);
        return v4;
      }
    }
  }
  if ( v9 && **((_QWORD **)this + 2) )
    *((_BYTE *)this + 4488) = 1;
  return v4;
}
