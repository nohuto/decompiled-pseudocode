/*
 * XREFs of ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801D4CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 */

__int64 __fastcall CColorBrush::GetBrushParameters(CColorBrush *this, struct CBrushDrawListGenerator *a2)
{
  __int64 result; // rax

  CBrushDrawListGenerator::Reset(a2);
  result = 0LL;
  *(_OWORD *)((char *)a2 + 56) = *(_OWORD *)((char *)this + 104);
  return result;
}
