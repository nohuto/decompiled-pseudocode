/*
 * XREFs of ?HasFinalValue@CExpressionForce@@WBA@EBA_NXZ @ 0x18028E8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CExpressionForce::HasFinalValue(__int64 a1)
{
  return CWICBitmapRealization::IsProtected((CWICBitmapRealization *)(a1 - 16));
}
