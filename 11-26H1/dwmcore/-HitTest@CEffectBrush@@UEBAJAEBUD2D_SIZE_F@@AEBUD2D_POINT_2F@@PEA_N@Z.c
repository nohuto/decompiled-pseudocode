/*
 * XREFs of ?HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801B4170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::HitTest(
        CEffectBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  bool v4; // bl
  float y; // xmm1_4

  v4 = 0;
  *a4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CEffectBrush *))(*(_QWORD *)this + 224LL))(this) )
  {
    if ( a3->x >= 0.0 && a2->width > a3->x )
    {
      y = a3->y;
      if ( y >= 0.0 )
        v4 = a2->height > y;
    }
    *a4 = v4;
  }
  return 0LL;
}
