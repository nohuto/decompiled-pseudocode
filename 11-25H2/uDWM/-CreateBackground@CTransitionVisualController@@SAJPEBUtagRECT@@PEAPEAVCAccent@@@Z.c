/*
 * XREFs of ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800D1E64
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008E25C (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180011F28 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18007C8B0 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBackground(const struct tagRECT *a1, struct CAccent **a2)
{
  int v4; // eax
  struct CAccent *v5; // rbx
  unsigned int v6; // edi
  __m128i v8; // [rsp+30h] [rbp-18h] BYREF
  CMILRefCountBase *v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v4 = CAccent::Create(&v9);
  v5 = v9;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0x1CAu,
      0LL);
  }
  else
  {
    v8.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v8.m128i_i32[0] = 1;
    CAccent::UpdateAccentPolicy(v9, a1, &v8, 0LL);
    *a2 = v5;
    if ( !v5 )
      return v6;
    CMILRefCountBase::AddRef(v5);
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v6;
}
