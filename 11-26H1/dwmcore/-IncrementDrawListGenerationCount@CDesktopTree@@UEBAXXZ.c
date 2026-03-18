/*
 * XREFs of ?IncrementDrawListGenerationCount@CDesktopTree@@UEBAXXZ @ 0x18019CCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTree::IncrementDrawListGenerationCount(CDesktopTree *this)
{
  *((_QWORD *)this + 325) = ++CDesktopTree::s_desktopDrawlistGenerationCount;
}
