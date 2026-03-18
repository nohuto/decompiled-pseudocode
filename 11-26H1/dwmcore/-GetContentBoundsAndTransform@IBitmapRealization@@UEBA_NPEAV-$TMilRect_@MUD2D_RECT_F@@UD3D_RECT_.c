/*
 * XREFs of ?GetContentBoundsAndTransform@IBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x1802596F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IBitmapRealization::GetContentBoundsAndTransform(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 a4)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 40LL))(a1, a4, a2);
  *a3 = *a2;
  return result;
}
