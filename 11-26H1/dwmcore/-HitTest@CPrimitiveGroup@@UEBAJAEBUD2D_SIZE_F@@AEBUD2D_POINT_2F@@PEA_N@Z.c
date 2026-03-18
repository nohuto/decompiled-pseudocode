/*
 * XREFs of ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800AEB70
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE4D4 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z @ 0x1801AC5AC (-FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::HitTest(
        CPrimitiveGroup *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  bool v4; // bl
  float y; // xmm1_4
  const struct D2D_MATRIX_3X2_F *v9; // r8
  __int64 v10; // rcx
  ID2D1Geometry *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( *((_BYTE *)this + 402) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A7,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\primitivegroup.cpp",
      (const char *)a4);
  if ( *((_QWORD *)this + 41) )
  {
    if ( a3->x >= *((float *)this + 27) && *((float *)this + 29) >= a3->x )
    {
      y = a3->y;
      if ( y >= *((float *)this + 28)
        && *((float *)this + 30) >= y
        && (int)CPrimitiveGroup::EnsureHitTestRegions(this) >= 0 )
      {
        v10 = *((_QWORD *)this + 11);
        v14 = 0;
        if ( v10 && ((*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 56LL))(v10, *a3, 0LL), v14)
          || (v12 = (ID2D1Geometry *)*((_QWORD *)this + 12)) != 0LL
          && (ID2D1Geometry::FillContainsPoint(v12, *a3, v9, &v14), v14) )
        {
          v4 = 1;
        }
        *a4 = v4;
      }
    }
  }
  return 0LL;
}
