/*
 * XREFs of ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x18019A794
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800744EC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18019A854 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::BspHitTest(
        const struct D2D_POINT_2F *this,
        const struct CMILMatrix *a2,
        struct CPolygon *a3)
{
  unsigned int v3; // ebx
  struct D2D_POINT_2F v7; // rsi
  const enum MilBackfaceVisibility::Enum *TopByReference; // rax
  const struct CMILMatrix *v9; // r8
  int v10; // eax
  bool v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*(_QWORD *)&this[13] )
  {
    v7 = (struct D2D_POINT_2F)*((_QWORD *)a3 + 27);
    if ( (*(unsigned __int8 (__fastcall **)(struct D2D_POINT_2F))(**(_QWORD **)&v7 + 264LL))(v7) )
    {
      v12 = 0;
      TopByReference = (const enum MilBackfaceVisibility::Enum *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)&this[21]);
      v10 = CPolygon::HitTestWithTransformation(a3, this + 10, v9, a2, TopByReference, &v12);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1A1u, 0LL);
      }
      else if ( v12 )
      {
        this[13] = v7;
      }
    }
  }
  return v3;
}
