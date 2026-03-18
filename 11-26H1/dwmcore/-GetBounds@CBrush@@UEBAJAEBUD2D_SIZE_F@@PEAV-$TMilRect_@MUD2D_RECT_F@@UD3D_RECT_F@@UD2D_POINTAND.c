/*
 * XREFs of ?GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A7D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrush::GetBounds(__int64 a1, _DWORD *a2, __int64 a3)
{
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 8) = *a2;
  *(_DWORD *)(a3 + 12) = a2[1];
  return 0LL;
}
