/*
 * XREFs of ?SetFillMode@CPathData@@EEAAXW4D2D1_FILL_MODE@@@Z @ 0x1801E0C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPathData::SetFillMode(CPathData *this, enum D2D1_FILL_MODE a2)
{
  *((_BYTE *)this + 64) = a2 | 0x80;
}
