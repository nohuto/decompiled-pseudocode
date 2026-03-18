/*
 * XREFs of ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18004EE50 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 * Callees:
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18004F690 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18004FA0C (-GetControlPointsForModification@Segment@Path@@QEAA-AV-$span@UD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180050318 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x180052E34 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x180052FBC (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x180053D20 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180053E1C (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18005483C (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@EV?$allocator@E@std@@@std@@AEAAXAEA_K@Z @ 0x180055150 (--$_Reallocate@$0A@@-$vector@EV-$allocator@E@std@@@std@@AEAAXAEA_K@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInterpolatePathsOperation::Interpolate(
        CInterpolatePathsOperation *this,
        const struct CPathData *a2,
        const struct CPathData *a3,
        float a4,
        struct CPathData **a5)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // rax
  int v9; // r13d
  __int64 v10; // rdi
  __int64 v11; // rsi
  float v12; // xmm7_4
  _BYTE *v13; // rbx
  _BYTE *v14; // r14
  __int64 Size; // r12
  float *v16; // rbx
  float *v17; // r12
  __int64 v18; // rbx
  void *v19; // rax
  __int64 v20; // rax
  struct CPathData *v21; // rbx
  __int64 v23; // [rsp+38h] [rbp-41h] BYREF
  float *v24; // [rsp+40h] [rbp-39h]
  _QWORD v25[2]; // [rsp+48h] [rbp-31h] BYREF
  int v26; // [rsp+58h] [rbp-21h]
  __int128 v27; // [rsp+60h] [rbp-19h] BYREF
  __int128 v28; // [rsp+70h] [rbp-9h]
  _BYTE *v29; // [rsp+E0h] [rbp+67h] BYREF

  v5 = 0;
  v6 = *((_QWORD *)a2 + 3) - *((_QWORD *)a2 + 2);
  *(_QWORD *)&v28 = 0LL;
  v27 = 0LL;
  if ( v6 == -1LL )
    goto LABEL_27;
  if ( !*((_QWORD *)a2 + 2) )
  {
    if ( !v6 )
    {
      v29 = 0LL;
      goto LABEL_6;
    }
LABEL_27:
    `gsl::details::get_terminate_handler'::`2'::handler(this);
    __debugbreak();
  }
  v29 = (_BYTE *)v6;
  if ( v6 )
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
    std::vector<unsigned char>::_Reallocate<0>(&v27, &v29);
  }
LABEL_6:
  v9 = 0;
  v10 = *((_QWORD *)a3 + 2);
  v11 = *((_QWORD *)a3 + 3);
  v25[0] = v10;
  v25[1] = v11;
  v12 = fminf(1.0, fmaxf(a4, 0.0));
  v26 = 0;
  if ( a2 == a3 || COERCE_FLOAT(LODWORD(v12) & _xmm) < 0.0000011920929 )
  {
    (*(void (__fastcall **)(const struct CPathData *))(*(_QWORD *)a2 + 8LL))(a2);
    *a5 = a2;
    goto LABEL_20;
  }
  v13 = (_BYTE *)*((_QWORD *)a2 + 2);
  v14 = (_BYTE *)*((_QWORD *)a2 + 3);
  v29 = v13;
  while ( v13 != v14 )
  {
    LOBYTE(this) = *v13;
    Size = (unsigned int)Path::Segment::GetSize(this);
    if ( v13 > &v13[Size] )
      goto LABEL_27;
    std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(
      &v27,
      *((_QWORD *)&v27 + 1),
      v13,
      (unsigned int)Size);
    if ( v10 != v11 || v9 )
    {
      Path::Segment::GetControlPointsForModification(*((_QWORD *)&v27 + 1) - Size, &v23);
      v16 = v24;
      v17 = &v24[2 * v23];
      while ( v16 != v17 )
      {
        if ( v10 != v11 || v9 )
        {
          *v16 = (float)((float)(1.0 - v12) * *v16)
               + (float)(v12 * *(float *)Path::ControlPointCollection::const_iterator::operator*(v25));
          v16[1] = (float)((float)(1.0 - v12) * v16[1])
                 + (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*(v25) + 4) * v12);
          Path::ControlPointCollection::const_iterator::operator++(v25);
          v9 = v26;
          v10 = v25[0];
        }
        v16 += 2;
      }
    }
    Path::SegmentCollection::const_iterator::operator++(&v29);
    v13 = v29;
  }
  v18 = *((_QWORD *)a2 + 5);
  v19 = MIDL_user_allocate(0x48uLL);
  if ( !v19 )
  {
    v29 = 0LL;
    goto LABEL_29;
  }
  v20 = CPathData::CPathData(v19, v18, &v27);
  v29 = (_BYTE *)v20;
  v21 = (struct CPathData *)v20;
  if ( !v20 )
  {
LABEL_29:
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2CEu, 0LL);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease(&v29);
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v5 = 0;
  *a5 = v21;
LABEL_20:
  std::vector<unsigned char>::_Tidy(&v27);
  return v5;
}
