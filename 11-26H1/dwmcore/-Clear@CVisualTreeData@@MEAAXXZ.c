/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1800AD880
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800ADAF0 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 48) = 0LL;
}
