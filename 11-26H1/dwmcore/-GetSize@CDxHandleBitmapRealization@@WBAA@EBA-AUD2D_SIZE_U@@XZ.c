/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802ABCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CDxHandleBitmapRealization::GetSize(__int64 a1, _QWORD *a2)
{
  return CDxHandleBitmapRealization::GetSize((CDxHandleBitmapRealization *)(a1 - 256), a2);
}
