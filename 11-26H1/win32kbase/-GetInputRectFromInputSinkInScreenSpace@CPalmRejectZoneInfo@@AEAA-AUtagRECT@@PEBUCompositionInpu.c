/*
 * XREFs of ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x14021A904
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x14021A9B8 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x14006EF5C (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x14021A860 (-Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x14021AC20 (-TransformRect@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        const struct CompositionInputObject *a3,
        struct tagRECT *a4)
{
  CPalmRejectZoneInfo *v6; // rcx
  struct tagRECT v8; // [rsp+20h] [rbp-19h] BYREF
  __m128i si128; // [rsp+30h] [rbp-9h] BYREF
  __int64 v10; // [rsp+40h] [rbp+7h]
  int v11; // [rsp+50h] [rbp+17h] BYREF
  __int128 v12; // [rsp+54h] [rbp+1Bh]
  int v13; // [rsp+64h] [rbp+2Bh]
  __int128 v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+78h] [rbp+3Fh]
  __int128 v16; // [rsp+7Ch] [rbp+43h]
  int v17; // [rsp+8Ch] [rbp+53h]

  v11 = 1065353216;
  v13 = 1065353216;
  v15 = 1065353216;
  v17 = 1065353216;
  v12 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  if ( a3 )
    CompositionInputObject::QueryTransform(a3, (struct tagINPUT_TRANSFORM *)&v11);
  v10 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  CPalmRejectZoneInfo::Convert3dTo2dMatrix(
    this,
    (const struct tagINPUT_TRANSFORM *)&v11,
    (struct D2D_MATRIX_3X2_F *)&si128);
  v8 = *a4;
  CPalmRejectZoneInfo::TransformRect(v6, retstr, &v8, (struct D2D_MATRIX_3X2_F *)&si128);
  return retstr;
}
