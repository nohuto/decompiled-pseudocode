/*
 * XREFs of ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x180053598
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18004FD7C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 * Callees:
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x180051C34 (--0CPathLengthOperation@@QEAA@XZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x180052E34 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1800533A4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180053E1C (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18005483C (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180054E28 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180054E8C (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     fmodf_0 @ 0x1802B9720 (fmodf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTrimPathOperation::Trim(
        CTrimPathOperation *this,
        const struct CPathData *a2,
        float a3,
        float a4,
        float a5,
        struct CPathData **a6)
{
  float v8; // xmm10_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  __int64 v11; // r15
  struct CPathData *v12; // rdi
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  CPathLengthOperation *v16; // rax
  float Length; // xmm0_4
  __int64 v18; // rbx
  __int64 v19; // rsi
  const struct Path::Segment *v20; // rdx
  void *v21; // rax
  __int64 v22; // rax
  struct CPathData *v23; // rbx
  unsigned int v24; // ebx
  unsigned int Size; // eax
  char v27; // al
  int v28; // xmm1_4
  void *v29; // rax
  float v30; // xmm0_4
  unsigned int v31; // [rsp+28h] [rbp-E0h]
  _QWORD v32[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 i; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v36[224]; // [rsp+68h] [rbp-A0h] BYREF

  v8 = fminf(1.0, fmaxf(a4, 0.0));
  v9 = fminf(1.0, fmaxf(a3, 0.0));
  v10 = v8 - v9;
  if ( (float)(v8 - v9) < 0.0 )
    v10 = v10 + 1.0;
  v11 = *((_QWORD *)a2 + 5);
  v12 = 0LL;
  v32[0] = 0LL;
  if ( !CPathData::IsSimpleGeometry(a2) )
  {
    v24 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304315, 0xA5u, 0LL);
    goto LABEL_24;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) < 0.0000011920929 )
  {
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v32, a2);
    v12 = (struct CPathData *)v32[0];
    v24 = 0;
    goto LABEL_24;
  }
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.0000011920929 )
  {
    v29 = MIDL_user_allocate(0x48uLL);
    if ( v29 )
    {
      v33 = 0LL;
      v34 = 0LL;
      v29 = (void *)CPathData::CPathData(v29, v11, &v33);
    }
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v32, v29);
    v12 = (struct CPathData *)v32[0];
    if ( v32[0] )
      goto LABEL_23;
    v31 = 179;
LABEL_31:
    v24 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v31, 0LL);
    goto LABEL_24;
  }
  v13 = fmodf_0(v9 + a5, 1.0);
  v14 = fmodf_0(v8 + a5, 1.0);
  v15 = v14;
  if ( v13 < 0.0 )
    v13 = v13 + 1.0;
  if ( v14 < 0.0 )
    v15 = v14 + 1.0;
  *((_BYTE *)this + 396) = 0;
  if ( v13 > v15 )
  {
    v30 = v13;
    *((_BYTE *)this + 396) = 1;
    v13 = v15;
    v15 = v30;
  }
  v16 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v36);
  Length = CPathLengthOperation::GetLength(v16, a2);
  *((float *)this + 6) = Length * v13;
  *((float *)this + 7) = Length * v15;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 397) = 1;
  if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
    *((_QWORD *)this + 1) = *(_QWORD *)this;
  v18 = *((_QWORD *)a2 + 2);
  v19 = *((_QWORD *)a2 + 3);
  for ( i = v18; v18 != v19; v18 = i )
  {
    if ( *(_BYTE *)v18 == 1 && *(_BYTE *)(v18 + 2) )
    {
      if ( COERCE_FLOAT(*(_DWORD *)(v18 + 4) & _xmm) >= 0.0000011920929 )
      {
        Size = Path::Segment::GetSize(2);
        memset_0(&v33, 0, Size);
        v27 = *(_BYTE *)(v18 + 1);
        v28 = *((_DWORD *)this + 14);
        HIDWORD(v33) = *(_DWORD *)(v18 + 4);
        HIDWORD(v34) = *((_DWORD *)this + 15);
        LODWORD(v34) = v28;
        LOBYTE(v33) = 2;
        BYTE1(v33) = v27;
        CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)&v33);
      }
      v20 = (const struct Path::Segment *)v32;
      v32[0] = *(_QWORD *)v18;
      BYTE2(v32[0]) = *((_BYTE *)this + 397);
      HIDWORD(v32[0]) = 0;
    }
    else
    {
      v20 = (const struct Path::Segment *)v18;
    }
    if ( !CTrimPathOperation::ProcessSegment(this, v20) )
      break;
    Path::SegmentCollection::const_iterator::operator++(&i);
  }
  v21 = MIDL_user_allocate(0x48uLL);
  if ( !v21 || (v22 = CPathData::CPathData(v21, v11, this), (v23 = (struct CPathData *)v22) == 0LL) )
  {
    v31 = 243;
    goto LABEL_31;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  v12 = v23;
LABEL_23:
  v24 = 0;
LABEL_24:
  *a6 = v12;
  return v24;
}
