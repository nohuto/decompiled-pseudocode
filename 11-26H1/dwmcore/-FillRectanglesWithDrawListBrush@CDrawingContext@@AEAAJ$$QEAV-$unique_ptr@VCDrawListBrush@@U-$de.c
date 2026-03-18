/*
 * XREFs of ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x180236200
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802039A0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802084C4 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000D8A0 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18001D270 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18003EBEC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z @ 0x180082330 (-Pop@-$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800D1830 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180187388 (-Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@V.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1801991E4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCMultiPrimitiveDrawListBrush@@U?$default_delete@VCMultiPrimitiveDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801A9408 (--1-$unique_ptr@VCMultiPrimitiveDrawListBrush@@U-$default_delete@VCMultiPrimitiveDrawListBrush@@.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCMultiPrimitiveDrawListBrush@@U?$default_delete@VCMultiPrimitiveDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18021F570 (--1-$out_param_t@V-$unique_ptr@VCMultiPrimitiveDrawListBrush@@U-$default_delete@VCMultiPrimitive.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBrush(
        struct CDrawingContext *a1,
        __int64 *a2,
        _OWORD *a3,
        __int128 *a4,
        struct CDrawListEntryBuilder *a5)
{
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  CMultiPrimitiveDrawListBrush *v12; // rax
  __int128 v13; // xmm0
  CDrawListEntryBuilder *v14; // rdi
  struct CDrawListEntryBuilder *v15; // r8
  int DrawList; // eax
  int v17; // eax
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  CMultiPrimitiveDrawListBrush *v22; // [rsp+30h] [rbp-D0h] BYREF
  CMultiPrimitiveDrawListBrush *v23; // [rsp+38h] [rbp-C8h] BYREF
  CMultiPrimitiveDrawListBrush **v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  char v26; // [rsp+50h] [rbp-B0h]
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+BCh] [rbp-44h]
  char v30; // [rsp+C0h] [rbp-40h]
  CDrawingContext *v31[6]; // [rsp+D0h] [rbp-30h] BYREF
  int v32; // [rsp+104h] [rbp+4h]
  __int128 v33; // [rsp+108h] [rbp+8h]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v31, a1);
  v9 = (__int64 *)*a2;
  v27 = 0LL;
  v28 = 0;
  v29 = 257;
  v10 = *v9;
  v30 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v10 + 24))(v9) )
    v32 = 128;
  v23 = 0LL;
  v24 = &v23;
  v25 = 0LL;
  v26 = 1;
  v11 = CMultiPrimitiveDrawListBrush::Create(a2, a3, &v25);
  wil::details::out_param_t<std::unique_ptr<CMultiPrimitiveDrawListBrush>>::~out_param_t<std::unique_ptr<CMultiPrimitiveDrawListBrush>>((__int64)&v24);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x345u, 0LL);
    v14 = (struct CDrawingContext *)((char *)a1 + 3440);
  }
  else
  {
    v12 = v23;
    v13 = *a4;
    v23 = 0LL;
    v22 = v12;
    v33 = v13;
    CBrushDrawListGenerator::AttachInput((__int64)v31, 0, (__int64 *)&v22);
    std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v22);
    v14 = (struct CDrawingContext *)((char *)a1 + 3440);
    v15 = (struct CDrawingContext *)((char *)a1 + 3440);
    if ( a5 )
      v15 = a5;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v31,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v27,
                 v15);
    v11 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x34Eu, 0LL);
    }
    else if ( !a5 )
    {
      LODWORD(v22) = 1065353216;
      v17 = CWatermarkStack<float,64,2,10>::Push((__int64)a1 + 3152, &v22);
      v11 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x355u, 0LL);
      }
      else
      {
        v20 = CDrawListEntryBuilder::Render((struct CDrawingContext *)((char *)a1 + 3440), a1, v18, v19);
        v11 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x358u, 0LL);
        CWatermarkStack<void *,2,2,10>::Pop((__int64)a1 + 3152);
      }
    }
  }
  CDrawListEntryBuilder::Reset(v14);
  std::unique_ptr<CMultiPrimitiveDrawListBrush>::~unique_ptr<CMultiPrimitiveDrawListBrush>(&v23);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v31);
  return (unsigned int)v11;
}
