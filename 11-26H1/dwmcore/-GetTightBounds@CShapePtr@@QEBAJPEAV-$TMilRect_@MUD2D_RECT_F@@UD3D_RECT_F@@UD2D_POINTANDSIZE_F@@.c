/*
 * XREFs of ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1801738B0
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180182380 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1802020AC (-GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapePtr::GetTightBounds(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int v3; // ebx

  v1 = *a1;
  if ( !v1 )
    return 2291662987LL;
  result = (*(__int64 (**)(void))(*(_QWORD *)v1 + 48LL))();
  v3 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x137u, 0LL);
    return v3;
  }
  return result;
}
