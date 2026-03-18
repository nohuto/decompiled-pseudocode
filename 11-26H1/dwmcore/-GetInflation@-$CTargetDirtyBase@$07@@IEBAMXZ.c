/*
 * XREFs of ?GetInflation@?$CTargetDirtyBase@$07@@IEBAMXZ @ 0x18021F3C0
 * Callers:
 *     ?CalcOcclusion@?$CTargetDirtyBase@$07@@IEAAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18008C7A8 (-CalcOcclusion@-$CTargetDirtyBase@$07@@IEAAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

double __fastcall CTargetDirtyBase<8>::GetInflation(__int64 a1)
{
  double result; // xmm0_8

  if ( *(_BYTE *)(a1 + 1872) )
    return 0.0;
  *(float *)&result = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8));
  if ( *(float *)&result <= 1.0 )
    return 0.0;
  return result;
}
