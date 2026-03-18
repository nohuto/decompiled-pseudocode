/*
 * XREFs of ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801A45F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::GetBrushParameters(CSurfaceBrush *this, struct CBrushDrawListGenerator *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *, struct CBrushDrawListGenerator *))(**((_QWORD **)this + 24)
                                                                                              + 88LL))(
           *((_QWORD *)this + 24),
           this,
           a2);
}
