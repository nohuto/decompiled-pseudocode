/*
 * XREFs of ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1800D5E80
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x1800D5FF0 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CProjectedShadowScene::IsEmptyProjection(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( *((_QWORD *)this + 10) )
  {
    if ( *((_QWORD *)this + 12) )
    {
      v2 = *((_QWORD *)this + 13);
      if ( v2 )
      {
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowScene::CalculateOpacity(this, 0.0)) & _xmm) >= 0.0000011920929 )
        {
          return 0;
        }
      }
    }
  }
  return result;
}
